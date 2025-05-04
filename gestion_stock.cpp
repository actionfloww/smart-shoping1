#include "gestion_stock.h"
#include "ui_gestion_stock.h"
#include "gestionstock.h"
#include <QMessageBox>
#include <QDebug>
#include "dialogfonctionnalites.h"
#include <QtPrintSupport/QPrinter>
#include <QtGui/QPainter>
#include <QFileDialog>
#include <QStandardPaths>
#include <QPageSize>
#include <QHeaderView>
#include <QDesktopServices>
#include <QUrl>
#include <QSqlQuery>
#include <QSqlError> // Ajout pour QSqlError
#include <QMessageBox>
#include <QVBoxLayout> // Ajout pour QVBoxLayout
#include <QHBoxLayout> // Ajout pour QHBoxLayout
#include <QDir>
#include <QSystemTrayIcon>
#include <QTimer>
#include <QLabel>
#include <QTableWidget>
#include <QHeaderView>
#include <QStyle>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QPixmap>
#include <QApplication>
#define QT_CHARTS_USE_NAMESPACE
#include "qsqldatabase.h"
#include <QDebug>
#include <QSerialPortInfo>
#include <QString>


gestion_stock::gestion_stock(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_stock)
{
    ui->setupUi(this);
    ui->pushButton_13->setIcon(QPixmap("C:\\Users\\MSI\\Desktop\\QT\\interface1\\st.png"));
    ui->pushButton_12->setIcon(QPixmap("C:\\Users\\MSI\\Desktop\\QT\\interface1\\pdf.png"));
    ui->pushButton_14->setIcon(QPixmap("C:\\Users\\MSI\\Desktop\\QT\\interface1\\nt.jpg"));

    ui->pushButton_15->setIcon(QPixmap("C:\\Users\\MSI\\Desktop\\QT\\interface1\\mail.png"));
    // Initialisation des comboBox
    ui->comboBox->clear();
    ui->comboBox->addItem("Tous les produits");
    ui->comboBox->addItem("alimentaire");
    ui->comboBox->addItem("vestimentaire");
    ui->comboBox->addItem("cosmétique");

    ui->comboBox_2->clear();
    ui->comboBox_2->addItem("alimentaire");
    ui->comboBox_2->addItem("vestimentaire");
    ui->comboBox_2->addItem("cosmétique");

    // Configuration du tableau
    ui->tableStock->setColumnCount(6);
    QStringList headers;
    headers << "Nom du produit" << "Quantité" << "Type" << "Prix unitaire" << "Date d'ajout" << "Fournisseur";
    ui->tableStock->setHorizontalHeaderLabels(headers);
    ui->tableStock->horizontalHeader()->setStretchLastSection(true);

    // Afficher TOUS les produits au démarrage
    afficherTousLesProduits();

    // Connexions des signaux et slots
    connect(ui->tableStock, &QTableWidget::cellClicked, this, &gestion_stock::onCellClicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &gestion_stock::on_pushButton_3_clicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &gestion_stock::on_pushButton_2_clicked);
    connect(ui->comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &gestion_stock::on_comboBox_currentIndexChanged);
    connect(ui->pushButton_12, &QPushButton::clicked, this, &gestion_stock::genererPDF);
    // Configuration initiale du bouton
    ui->pushButton_14->setFlat(true);
    ui->pushButton_14->setText(""); // Supprimer tout texte
    ui->pushButton_14->setStyleSheet("border: none; background: transparent;");

    // Connexion du signal textChanged() au slot
    connect(ui->recherche, &QLineEdit::textChanged,
            this, &gestion_stock::onRechercheTextChanged);

    connect(ui->pushButton_17, &QPushButton::clicked,
            this, &gestion_stock::on_pushButton_17_clicked);

    checkStockAlerts(); // Vérifier les alertes au démarrage


    // Vérifier le stock toutes les heures (3600000 ms)
    QTimer *stockCheckTimer = new QTimer(this);
    connect(stockCheckTimer, &QTimer::timeout, this, &gestion_stock::checkCriticalStockAndNotify);
    stockCheckTimer->start(3600000);

    // Premier check après 5 secondes (le temps que l'application se lance)
    QTimer::singleShot(5000, this, &gestion_stock::checkCriticalStockAndNotify);




    // Lancer la connexion à Arduino
    int ret = A.connect_arduino();
    switch (ret) {
    case 0:
        qDebug() << "Arduino est disponible et connecté au port :" << A.getarduino_port_name();
        break;
    case 1:
        qDebug() << "Arduino est disponible mais pas connecté au port :" << A.getarduino_port_name();
        break;
    case -1:
        qDebug() << "Arduino n'est pas disponible";
        break;
    }

    // Connecter le signal de réception de données Arduino au slot update_label
    QObject::connect(A.getserial(), SIGNAL(readyRead()), this, SLOT(update_label()));

    // Initialiser le timer pour les alertes automatiques (si nécessaire)
    alertTimer = new QTimer(this);
    connect(alertTimer, &QTimer::timeout, this, &gestion_stock::send_automatic_alert);
    alertTimer->start(5000); // Exemple : toutes les 5 secondes

    // Initialiser le dernier statut
    lastStatus = "";
}


gestion_stock::~gestion_stock()
{
    delete ui;
    db.close();
}

void gestion_stock::afficherStock()
{
    // Cette méthode devient simplement un alias de afficherTousLesProduits()
    afficherTousLesProduits();
}

void gestion_stock::afficherTousLesProduits()
{
    QList<GestionStock> stockList = GestionStock::afficher();
    ui->tableStock->setRowCount(0);

    if(stockList.isEmpty()) {
        qDebug() << "Aucun produit trouvé dans la base de données";
        QMessageBox::information(this, "Information", "La base de données ne contient aucun produit.");

        // Ajout d'un produit de test si nécessaire
        qDebug() << "Ajout d'un produit de test...";
        GestionStock test("Produit_TEST", 10, "alimentaire", 5.99, QDate::currentDate().toString("dd/MM/yyyy"), "Fournisseur_TEST");
        if(test.ajouter()) {
            qDebug() << "Produit test ajouté avec succès";
            afficherTousLesProduits(); // Réafficher après ajout
        }
        return;
    }

    // Trier les produits par type (alimentaire > cosmétique > vestimentaire) puis par nom
    std::sort(stockList.begin(), stockList.end(), [](const GestionStock &a, const GestionStock &b) {
        // Ordre de tri des types
        QMap<QString, int> typeOrder = {
            {"alimentaire", 1},
            {"cosmétique", 2},
            {"vestimentaire", 3}
        };

        int aOrder = typeOrder.value(a.getType().toLower(), 4);
        int bOrder = typeOrder.value(b.getType().toLower(), 4);

        if (aOrder != bOrder) {
            return aOrder < bOrder;
        }
        return a.getNomProduit().toLower() < b.getNomProduit().toLower();
    });

    // Afficher tous les produits triés
    for (const GestionStock &stock : stockList) {
        ajouterLigneTableau(stock);
    }
}

void gestion_stock::afficherStockParType(const QString &type)
{
    QList<GestionStock> stockList;

    if (type == "Tous" || type == "Tous les produits") {
        // Utiliser afficherTousLesProduits() qui contient déjà le tri
        afficherTousLesProduits();
        return;
    } else {
        stockList = GestionStock::afficherParType(type);
    }

    ui->tableStock->setRowCount(0);

    if(stockList.isEmpty()) {
        return; // Pas de message d'erreur
    }

    // Trier les produits du type spécifique par nom
    std::sort(stockList.begin(), stockList.end(), [](const GestionStock &a, const GestionStock &b) {
        return a.getNomProduit().toLower() < b.getNomProduit().toLower();
    });

    // Afficher les produits du type spécifique
    for (const GestionStock &stock : stockList) {
        ajouterLigneTableau(stock);
    }

    ui->tableStock->resizeColumnsToContents();
}

void gestion_stock::ajouterLigneTableau(const GestionStock &stock)
{
    int row = ui->tableStock->rowCount();
    ui->tableStock->insertRow(row);

    ui->tableStock->setItem(row, 0, new QTableWidgetItem(stock.getNomProduit()));
    ui->tableStock->setItem(row, 1, new QTableWidgetItem(QString::number(stock.getQuantite())));
    ui->tableStock->setItem(row, 2, new QTableWidgetItem(stock.getType()));
    ui->tableStock->setItem(row, 3, new QTableWidgetItem(QString::number(stock.getPrixUnitaire())));
    ui->tableStock->setItem(row, 4, new QTableWidgetItem(stock.getDateAjout()));
    ui->tableStock->setItem(row, 5, new QTableWidgetItem(stock.getFournisseur()));

    // Mise en évidence des stocks critiques
    if (stock.getQuantite() <= 10) {
        for (int col = 0; col < ui->tableStock->columnCount(); ++col) {
            if (col == 1) {
                ui->tableStock->item(row, col)->setForeground(Qt::red);
            }
            ui->tableStock->item(row, col)->setBackground(QColor(255, 200, 200));
        }
    }
}

void gestion_stock::on_comboBox_currentIndexChanged(int index)
{
    if (index == 0) { // "Tous les produits"
        afficherTousLesProduits();
    } else {
        QString selectedType = ui->comboBox->itemText(index);
        afficherStockParType(selectedType);
    }
}

// ... (le reste du code reste inchangé)

void gestion_stock::on_pushButton_clicked()
{
    // Validation des champs
    if (ui->lineEditNomProduit->text().isEmpty() ||
        ui->lineEditQuantite->text().isEmpty() ||
        ui->lineEditPrixUnitaire->text().isEmpty() ||
        ui->dateEditAjout->text().isEmpty() ||
        ui->lineEditFournisseur->text().isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Tous les champs doivent être remplis !");
        return;
    }

    // Récupération des données
    QString nom_produit = ui->lineEditNomProduit->text();
    int quantite = ui->lineEditQuantite->text().toInt();
    QString type = ui->comboBox_2->currentText();
    double prix_unitaire = ui->lineEditPrixUnitaire->text().toDouble();
    QString date_ajout = ui->dateEditAjout->text();
    QString fournisseur = ui->lineEditFournisseur->text();

    // Validation des valeurs
    if (quantite <= 0 || prix_unitaire <= 0) {
        QMessageBox::warning(this, "Erreur", "La quantité et le prix doivent être positifs !");
        return;
    }

    // Ajout du produit
    GestionStock stock(nom_produit, quantite, type, prix_unitaire, date_ajout, fournisseur);
    if (stock.ajouter()) {
        QMessageBox::information(this, "Succès", "Produit ajouté avec succès !");
        afficherTousLesProduits();
        // Réinitialiser les champs après l'ajout
        ui->lineEditNomProduit->clear();
        ui->lineEditQuantite->clear();
        ui->lineEditPrixUnitaire->clear();
        ui->lineEditFournisseur->clear();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout du produit !");
    }
}

void gestion_stock::onCellClicked(int row, int column)
{
    Q_UNUSED(column);

    ui->lineEditNomProduit->setText(ui->tableStock->item(row, 0)->text());
    ui->lineEditQuantite->setText(ui->tableStock->item(row, 1)->text());
    ui->comboBox_2->setCurrentText(ui->tableStock->item(row, 2)->text()); // Utilisez comboBox_2 pour l'édition
    ui->lineEditPrixUnitaire->setText(ui->tableStock->item(row, 3)->text());
    ui->dateEditAjout->setDate(QDate::fromString(ui->tableStock->item(row, 4)->text(), "dd/MM/yyyy"));
    ui->lineEditFournisseur->setText(ui->tableStock->item(row, 5)->text());
    GestionStock stock;

    IDSTOCK=stock.GetIDByNomProduitAndFournisseurAndQuantite(ui->tableStock->item(row, 0)->text(),ui->tableStock->item(row, 5)->text(),ui->tableStock->item(row, 1)->text().toInt());
}

void gestion_stock::on_pushButton_3_clicked()
{
    QString nomProduit = ui->lineEditNomProduit->text();
    QString Fournisseur=ui->lineEditFournisseur->text();
    int Quantite=ui->lineEditQuantite->text().toInt();

    if (nomProduit.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Aucun produit sélectionné !");
        return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer ce produit ?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        GestionStock stock;
        int id= stock.GetIDByNomProduitAndFournisseurAndQuantite(nomProduit,Fournisseur,Quantite);
        qDebug()<<"id supprimer : ";
        qDebug()<<id;
        if (stock.supprimer(id)) {
            QMessageBox::information(this, "Succès", "Produit supprimé avec succès !");
            afficherStock();
            // Réinitialiser les champs après suppression
            ui->lineEditNomProduit->clear();
            ui->lineEditQuantite->clear();
            ui->lineEditPrixUnitaire->clear();
            ui->lineEditFournisseur->clear();
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression !");
        }
    }
}



// 1. Modification de la fonction dans MainWindow.cpp
void gestion_stock::on_pushButton_2_clicked()
{
    // On récupère l'ID du stock sélectionné
    // int idStock = ui->tableStock->model()->data(ui->tableStock->currentIndex().siblingAtColumn(6)).toInt(); // 6 est l'index de la colonne IDSTOCK
    int idStock=IDSTOCK;
    qDebug()<<"id modifier : ";
    qDebug()<<IDSTOCK;

    if (idStock <= 0) {
        QMessageBox::warning(this, "Erreur", "Aucun produit sélectionné ou ID invalide !");
        return;
    }

    // Récupère les données saisies
    QString nom_produit = ui->lineEditNomProduit->text();
    int quantite = ui->lineEditQuantite->text().toInt();
    QString type = ui->comboBox_2->currentText();
    double prix_unitaire = ui->lineEditPrixUnitaire->text().toDouble();
    QString date_ajout = ui->dateEditAjout->text();
    QString fournisseur = ui->lineEditFournisseur->text();

    // Vérification des valeurs numériques
    if (quantite <= 0) {
        QMessageBox::warning(this, "Erreur", "La quantité doit être un nombre positif !");
        return;
    }
    if (prix_unitaire <= 0) {
        QMessageBox::warning(this, "Erreur", "Le prix unitaire doit être un nombre positif !");
        return;
    }

    GestionStock stock;
    if (stock.modifier(idStock, nom_produit, quantite, type, prix_unitaire, date_ajout, fournisseur)) {
        QMessageBox::information(this, "Succès", "Produit modifié avec succès !");
        afficherStock();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la modification !");
    }
}
void gestion_stock::genererPDF()
{
    // Préparation du contenu HTML
    QString html;
    QTextStream out(&html);

    // Style CSS amélioré avec taille agrandie
    out << "<html>"
           "<head>"
           "<meta Content=\"Text/html; charset=UTF-8\">"
           "<title>Liste des Equipements</title>"
           "<style>"
           "body { font-family: 'Arial', sans-serif; margin: 0.5cm; }"
           ".header { text-align: center; margin-bottom: 1cm; }"
           ".title { font-size: 28pt; font-weight: bold; margin-bottom: 15px; text-decoration: underline; }"
           ".subtitle { font-size: 14pt; color: #555; margin-bottom: 20px; }"
           "table { width: 100%; border-collapse: collapse; margin-top: 15px; font-size: 12pt; }"
           "th { background-color: #3498db; color: white; font-weight: bold; padding: 15px; text-align: left; font-size: 14pt; border: 2px solid #2980b9; }"
           "td { padding: 12px; border: 2px solid #ddd; font-size: 12pt; }"
           "tr:nth-child(even) { background-color: #f8f9fa; }"
           ".footer { margin-top: 1cm; font-size: 10pt; color: #666; text-align: center; }"
           ".image-cell img { max-width: 200px; max-height: 200px; display: block; margin: 0 auto; }"
           ".number-col { text-align: center; font-weight: bold; }"
           "</style>"
           "</head>"
           "<body>"
           "<div class='header'>"
           "<div class='title'>LISTE DES ÉQUIPEMENTS</div>"
           "<div class='subtitle'>Inventaire complet du matériel</div>"
           "</div>"
           "<table>";

    // En-têtes du tableau - version agrandie
    out << "<thead><tr><th style='width:5%;' class='number-col'>N°</th>";
    for (int col = 0; col < ui->tableStock->columnCount(); ++col) {
        out << QString("<th style='width:%1%;'>").arg(col == 2 ? 20 : 15)
        << ui->tableStock->horizontalHeaderItem(col)->text().toUpper() << "</th>";
    }
    out << "</tr></thead><tbody>";

    // Données du tableau - version agrandie
    for (int row = 0; row < ui->tableStock->rowCount(); ++row) {
        out << "<tr><td class='number-col'>" << row+1 << "</td>";

        for (int col = 0; col < ui->tableStock->columnCount(); ++col) {
            QTableWidgetItem* item = ui->tableStock->item(row, col);
            QString text = item ? item->text() : "";

            if (col == 2) { // Colonne TYPE
                // Normalisation du type (optionnel)
                QString type = text.toLower().trimmed();
                if (type == "ali" || type == "alim") type = "Alimentaire";
                else if (type == "vest" || type == "hab") type = "Vestimentaire";
                else if (type == "cos" || type == "beaute") type = "Cosmétique";

                out << "<td>" << (type.isEmpty() ? "Autre" : type) << "</td>";
            } else {
                out << "<td>" << (text.isEmpty() ? "&nbsp;" : text) << "</td>";
            }
        }
        out << "</tr>";
    }

    // Pied de page
    out << "</tbody></table>"
           "<div class='footer'>"
           "<hr style='margin-top:20px;margin-bottom:10px;border:1px solid #eee;'>"
           "Document généré le " << QDateTime::currentDateTime().toString("dd/MM/yyyy à HH:mm") << "<br>"
                                                                          "© " << QDate::currentDate().toString("yyyy") << " Votre Société - Tous droits réservés"
                                                    "</div>"
                                                    "</body></html>";

    // Configuration du PDF en mode paysage pour plus d'espace
    QString defaultName = "Inventaire_Complet_" + QDate::currentDate().toString("yyyyMMdd") + ".pdf";
    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer le PDF",
                                                    QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "/" + defaultName,
                                                    "Fichiers PDF (*.pdf)");

    if (fileName.isEmpty()) return;

    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPageSize(QPageSize(QPageSize::A4));
    printer.setPageOrientation(QPageLayout::Landscape); // Mode paysage
    printer.setOutputFileName(fileName);

    QTextDocument doc;
    doc.setHtml(html);
    doc.setPageSize(printer.pageLayout().paintRectPixels(printer.resolution()).size());
    doc.print(&printer);

    QMessageBox::information(this, "Export réussi",
                             "Le fichier PDF a été généré avec succès:\n" + fileName);
}

QT_CHARTS_USE_NAMESPACE



void gestion_stock::on_pushButton_13_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT TYPE, SUM(QUANTITE) FROM STOCKS GROUP BY TYPE");

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur de base de données: " + query.lastError().text());
        return;
    }

    QMap<QString, int> typeData;
    int total = 0;

    QVector<QColor> stockPalette = {
        QColor(34, 193, 195),
        QColor(253, 187, 45),
        QColor(40, 167, 69),
        QColor(0, 123, 255),
        QColor(255, 123, 123),
        QColor(128, 0, 128)
    };

    while (query.next()) {
        typeData.insert(query.value(0).toString(), query.value(1).toInt());
        total += query.value(1).toInt();
    }

    QDialog statsDialog(this);
    statsDialog.setWindowTitle("📊 Statistiques des Stocks par Type");
    statsDialog.setMinimumSize(980, 750);
    statsDialog.setStyleSheet(
        "QDialog { background: #f5f8fa; border-radius: 12px; padding: 15px; border: 2px solid #e2e8f0; }"
        "QLabel { color: #2d3748; font-size: 14px; font-weight: bold; }"
        );

    QVBoxLayout *mainLayout = new QVBoxLayout(&statsDialog);
    QTabWidget *tabs = new QTabWidget(&statsDialog);
    tabs->setStyleSheet(
        "QTabWidget::pane { border: none; }"
        "QTabBar::tab { background: #e2f7f2; color: #2d3748; padding: 12px 20px; border-radius: 8px; }"
        "QTabBar::tab:selected { background: #34c7c2; color: white; }"
        "QTabWidget { border-radius: 8px; }"
        );

    // Diagramme circulaire
    QPieSeries *pieSeries = new QPieSeries();
    pieSeries->setPieSize(0.75);
    int colorIndex = 0;

    for (const QString &type : typeData.keys()) {
        qreal percentage = (typeData[type] * 100.0) / total;
        QPieSlice *slice = pieSeries->append(type, typeData[type]);
        slice->setColor(stockPalette[colorIndex % stockPalette.size()]);
        slice->setLabelVisible(true);
        slice->setLabel(QString("%1\n%2 unités (%3%)")
                            .arg(type)
                            .arg(typeData[type])
                            .arg(percentage, 0, 'f', 1));
        slice->setBorderWidth(1);
        slice->setBorderColor(Qt::white);
        colorIndex++;
    }

    QChart *pieChart = new QChart();
    pieChart->addSeries(pieSeries);
    pieChart->setTitle("Répartition des Stocks par Type");
    pieChart->setTitleFont(QFont("Segoe UI", 14, QFont::Bold));
    pieChart->legend()->setAlignment(Qt::AlignRight);
    pieChart->setAnimationOptions(QChart::SeriesAnimations);

    QChartView *pieChartView = new QChartView(pieChart);
    pieChartView->setRenderHint(QPainter::Antialiasing);
    pieChartView->setStyleSheet("border-radius: 8px; border: 1px solid #d1d9e6; background: white;");
    tabs->addTab(pieChartView, "📊 Vue Globale");

    // Diagramme en barres
    QBarSeries *barSeries = new QBarSeries();
    QBarSet *barSet = new QBarSet("Quantité");
    barSet->setColor(QColor(34, 193, 195));

    QStringList categories;
    for (const QString &type : typeData.keys()) {
        *barSet << typeData[type];
        categories << type;
    }

    barSeries->append(barSet);
    barSeries->setLabelsVisible(true);
    barSeries->setLabelsFormat("@value");

    QChart *barChart = new QChart();
    barChart->addSeries(barSeries);
    barChart->setTitle("Quantité de Stock par Type");
    barChart->setTitleFont(QFont("Segoe UI", 14, QFont::Bold));

    QBarCategoryAxis *xAxis = new QBarCategoryAxis();
    xAxis->append(categories);
    barChart->addAxis(xAxis, Qt::AlignBottom);
    barSeries->attachAxis(xAxis);

    QValueAxis *yAxis = new QValueAxis();
    yAxis->setLabelFormat("%d");
    barChart->addAxis(yAxis, Qt::AlignLeft);
    barSeries->attachAxis(yAxis);

    QChartView *barChartView = new QChartView(barChart);
    barChartView->setRenderHint(QPainter::Antialiasing);
    barChartView->setStyleSheet("border-radius: 8px; border: 1px solid #d1d9e6; background: white;");
    tabs->addTab(barChartView, "📈 Analyse Comparée");

    mainLayout->addWidget(tabs);

    // Bouton Fermer
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    QPushButton *closeButton = new QPushButton("❌ Fermer");
    closeButton->setStyleSheet(
        "QPushButton { background: #f5f8fa; color: #2d3748; padding: 12px 18px; border-radius: 6px; font-weight: bold; border: 1px solid #d1d9e6; }"
        "QPushButton:hover { background: #e2e8f0; }"
        );
    QObject::connect(closeButton, &QPushButton::clicked, &statsDialog, &QDialog::accept);
    buttonLayout->addWidget(closeButton);
    buttonLayout->setAlignment(Qt::AlignRight);
    mainLayout->addLayout(buttonLayout);

    statsDialog.exec();
}

void gestion_stock::checkStockAlerts()
{
    QSqlQuery countQuery;
    countQuery.prepare("SELECT COUNT(*) FROM STOCKS WHERE QUANTITE <= 10");

    if (!countQuery.exec() || !countQuery.next()) {
        QMessageBox::critical(this, "Erreur", "Erreur de comptage: " + countQuery.lastError().text());
        return;
    }

    int alertCount = countQuery.value(0).toInt();
    updateNotificationBadge(alertCount);

    static int lastAlertCount = 0;
    if (alertCount > lastAlertCount && alertCount > 0) {
        showFacebookStyleNotification(alertCount);
    }
    lastAlertCount = alertCount;

    ui->pushButton_14->setEnabled(alertCount > 0);
}

void gestion_stock::updateNotificationBadge(int count)
{


    if (count > 0) {
        // Bip système simple
        QApplication::beep();
        // D'abord, réinitialiser complètement le style
        ui->pushButton_14->setStyleSheet("");
        ui->pushButton_14->style()->unpolish(ui->pushButton_14);
        ui->pushButton_14->style()->polish(ui->pushButton_14);

        if (count > 0) {


            // Style avec badge de notification
            QString badgeStyle = QString(
                                     "QPushButton {"
                                     "   border: none;"
                                     "   background: transparent;"
                                     "   padding: 0px;"
                                     "   margin: 0px;"
                                     "}"
                                     "QPushButton::after {"
                                     "   content: '%1';"
                                     "   position: absolute;"
                                     "   top: -2px;"
                                     "   right: -2px;"
                                     "   background: red;"
                                     "   color: white;"
                                     "   border-radius: 7px;"
                                     "   min-width: 12px;"
                                     "   height: 12px;"
                                     "   font-size: 8px;"
                                     "   text-align: center;"
                                     "}"
                                     ).arg(count);

            ui->pushButton_14->setStyleSheet(badgeStyle);
            ui->pushButton_14->setProperty("alert", true);
        } else {
            // Charger l'icône inactive
            QPixmap inactivePixmap("C:/Users/MSI/Desktop/QT/interface1/nt.jpg");
            if (!inactivePixmap.isNull()) {
                ui->pushButton_14->setIcon(QIcon(inactivePixmap));
                ui->pushButton_14->setIconSize(inactivePixmap.size());
            } else {
                qWarning() << "Failed to load inactive notification icon";
            }

            // Style sans badge
            ui->pushButton_14->setStyleSheet(
                "QPushButton {"
                "   border: none;"
                "   background: transparent;"
                "   padding: 0px;"
                "   margin: 0px;"
                "}"
                );
            ui->pushButton_14->setProperty("alert", false);
        }

        // Forcer la mise à jour du style
        ui->pushButton_14->style()->unpolish(ui->pushButton_14);
        ui->pushButton_14->style()->polish(ui->pushButton_14);
        ui->pushButton_14->update();
    }
}

void gestion_stock::showFacebookStyleNotification(int count)
{
    QDialog *notification = new QDialog(this);
    notification->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    notification->setAttribute(Qt::WA_DeleteOnClose);
    notification->setStyleSheet(
        "background-color: #4267B2; color: white; border-radius: 5px; padding: 10px;"
        );

    QLabel *message = new QLabel(
        QString("<b>Nouvelle alerte stock!</b><br>%1 produit(s) en stock critique").arg(count),
        notification
        );
    message->setStyleSheet("color: white;");

    QVBoxLayout *layout = new QVBoxLayout(notification);
    layout->addWidget(message);

    // Ajuster la taille avant le positionnement
    notification->adjustSize();

    // Position en haut à droite
    QPoint pos = this->mapToGlobal(QPoint(this->width() - notification->width() - 10, 30));
    notification->move(pos);

    // Animation d'apparition
    QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect(notification);
    notification->setGraphicsEffect(effect);

    QPropertyAnimation *anim = new QPropertyAnimation(effect, "opacity");
    anim->setDuration(500);
    anim->setStartValue(0);
    anim->setEndValue(1);
    anim->start();

    // Fermeture automatique après 5s
    QTimer::singleShot(5000, notification, [notification]() {
        QPropertyAnimation *closeAnim = new QPropertyAnimation(notification, "windowOpacity");
        closeAnim->setDuration(1000);
        closeAnim->setStartValue(1);
        closeAnim->setEndValue(0);
        closeAnim->start();
        connect(closeAnim, &QPropertyAnimation::finished, notification, &QDialog::close);
    });

    notification->show();
}

void gestion_stock::on_pushButton_14_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT IDSTOCK, NOM_PRODUIT, QUANTITE, TYPE, FOURNISSEUR FROM STOCKS WHERE QUANTITE <= 10 ORDER BY QUANTITE");

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur de base de données: " + query.lastError().text());
        return;
    }

    // Créer la boîte de dialogue
    QDialog *alertDialog = new QDialog(this);
    alertDialog->setWindowTitle("Produits en stock critique");
    alertDialog->setMinimumSize(600, 400);

    QVBoxLayout *mainLayout = new QVBoxLayout(alertDialog);

    // Compter le nombre réel de résultats
    int rowCount = 0;
    while (query.next()) rowCount++;
    query.seek(-1); // Retour au début des résultats

    QLabel *titleLabel = new QLabel(QString("%1 Produit(s) en stock critique").arg(rowCount));
    titleLabel->setStyleSheet("font-weight: bold; font-size: 16px; margin-bottom: 15px;");
    mainLayout->addWidget(titleLabel);

    if (rowCount > 0) {
        QTableWidget *table = new QTableWidget(rowCount, 5);
        table->setHorizontalHeaderLabels({"ID", "Nom", "Quantité", "Type", "Fournisseur"});

        int row = 0;
        while (query.next()) {
            table->setItem(row, 0, new QTableWidgetItem(query.value("IDSTOCK").toString()));
            table->setItem(row, 1, new QTableWidgetItem(query.value("NOM_PRODUIT").toString()));

            QTableWidgetItem *qtyItem = new QTableWidgetItem(query.value("QUANTITE").toString());
            qtyItem->setForeground(Qt::red);
            table->setItem(row, 2, qtyItem);

            table->setItem(row, 3, new QTableWidgetItem(query.value("TYPE").toString()));
            table->setItem(row, 4, new QTableWidgetItem(query.value("FOURNISSEUR").toString()));
            row++;
        }

        table->resizeColumnsToContents();
        mainLayout->addWidget(table);
    } else {
        mainLayout->addWidget(new QLabel("Aucun produit en stock critique"));
    }

    // Boutons
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    QPushButton *refreshButton = new QPushButton("Actualiser");
    QPushButton *closeButton = new QPushButton("Fermer");

    connect(refreshButton, &QPushButton::clicked, [this, alertDialog]() {
        alertDialog->close();
        on_pushButton_14_clicked(); // Recharge les données
    });
    connect(closeButton, &QPushButton::clicked, alertDialog, &QDialog::accept);

    buttonLayout->addWidget(refreshButton);
    buttonLayout->addWidget(closeButton);
    mainLayout->addLayout(buttonLayout);

    alertDialog->exec();
    delete alertDialog;
}

void gestion_stock::onRechercheTextChanged(const QString &text)
{
    QSqlQuery query;
    query.prepare("SELECT NOM_PRODUIT, QUANTITE, TYPE, PRIX_UNITAIRE, DATE_AJOUT, FOURNISSEUR "
                  "FROM STOCKS "
                  "WHERE NOM_PRODUIT LIKE :search "
                  "ORDER BY NOM_PRODUIT");
    query.bindValue(":search", "%" + text + "%");

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur de recherche: " + query.lastError().text());
        return;
    }

    // Effacer le tableau existant
    ui->tableStock->setRowCount(0);

    // Remplir avec les nouveaux résultats
    int row = 0;
    while (query.next()) {
        ui->tableStock->insertRow(row);

        // Colonne 0: Nom du produit
        ui->tableStock->setItem(row, 0, new QTableWidgetItem(query.value("NOM_PRODUIT").toString()));

        // Colonne 1: Quantité
        QTableWidgetItem *qtyItem = new QTableWidgetItem(query.value("QUANTITE").toString());
        qtyItem->setTextAlignment(Qt::AlignCenter);
        ui->tableStock->setItem(row, 1, qtyItem);

        // Colonne 2: Type
        ui->tableStock->setItem(row, 2, new QTableWidgetItem(query.value("TYPE").toString()));

        // Colonne 3: Prix unitaire
        QTableWidgetItem *priceItem = new QTableWidgetItem(QString::number(query.value("PRIX_UNITAIRE").toDouble(), 'f', 2));
        priceItem->setTextAlignment(Qt::AlignRight);
        ui->tableStock->setItem(row, 3, priceItem);

        // Colonne 4: Date d'ajout
        QTableWidgetItem *dateItem = new QTableWidgetItem(query.value("DATE_AJOUT").toDate().toString("dd/MM/yyyy"));
        dateItem->setTextAlignment(Qt::AlignCenter);
        ui->tableStock->setItem(row, 4, dateItem);

        // Colonne 5: Fournisseur
        ui->tableStock->setItem(row, 5, new QTableWidgetItem(query.value("FOURNISSEUR").toString()));

        row++;
    }

    // Redimensionner les colonnes si nécessaire
    ui->tableStock->resizeColumnsToContents();
}



void gestion_stock::checkCriticalStockAndNotify()
{
    QSqlQuery query;
    query.prepare("SELECT IDSTOCK, NOM_PRODUIT, QUANTITE, FOURNISSEUR FROM STOCKS WHERE QUANTITE <= 10");

    if (!query.exec()) {
        qWarning() << "Erreur de requête stock critique:" << query.lastError().text();
        return;
    }

    while (query.next()) {
        QString idStock = query.value("IDSTOCK").toString();
        if (!notifiedProducts.contains(idStock)) {
            QString productName = query.value("NOM_PRODUIT").toString();
            int quantity = query.value("QUANTITE").toInt();
            QString fournisseur = query.value("FOURNISSEUR").toString();

            sendStockAlertEmail(productName, idStock, quantity, fournisseur);
            notifiedProducts.insert(idStock);
        }
    }
}

void gestion_stock::sendStockAlertEmail(const QString &productName, const QString &idStock,
                                     int quantity, const QString &fournisseur)
{
    // 1. CONFIGURATION DES ADRESSES EMAIL (À PERSONNALISER ICI)
    const QString emailFrom = "tasnimdridi29@gmail.com";  // <-- METTEZ VOTRE EMAIL D'ENVOI ICI
    const QString emailTo = "responsable.stock@votreentreprise.com"; // <-- METTEZ L'EMAIL DESTINATAIRE ICI
    const QString smtpServer = "smtp.gmail.com";             // <-- SERVEUR SMTP
    const QString smtpUser = "tasnimdridi29@gmail.com";                    // <-- LOGIN SMTP
    const QString smtpPassword = "votre_mdp_smtp";                  // <-- MOT DE PASSE SMTP

    // 2. CONSTRUCTION DU MESSAGE (Ne pas modifier sauf si besoin)
    QString subject = QString("ALERTE STOCK CRITIQUE: %1 (Ref:%2)").arg(productName).arg(idStock);

    QString body = QString(
                       "Madame, Monsieur,\n\n"
                       "Notre système de gestion de stock a détecté le produit suivant en niveau critique:\n\n"
                       "▸ Produit: %1\n"
                       "▸ Référence: %2\n"
                       "▸ Stock restant: %3 unités\n"
                       "▸ Fournisseur: %4\n\n"
                       "Action requise: Veuillez procéder au réapprovisionnement urgent.\n\n"
                       "Cordialement,\n"
                       "Le Service Logistique\n"
                       "--\n"
                       "Ce message est généré automatiquement - Ne pas répondre"
                       ).arg(productName, idStock, QString::number(quantity), fournisseur);

    // 3. COMMANDE POWERSHELL (Configuration SMTP)
    QString command = QString(
                          "powershell -Command \""
                          "Send-MailMessage "
                          "-From '%1' "
                          "-To '%2' "
                          "-Subject '%3' "
                          "-Body '%4' "
                          "-SmtpServer '%5' "
                          "-Port 587 "
                          "-Credential (New-Object System.Management.Automation.PSCredential('%6', "
                          "(ConvertTo-SecureString '%7' -AsPlainText -Force))) "
                          "-UseSsl "
                          "\""
                          ).arg(emailFrom, emailTo, subject.replace("'", "''"), body.replace("'", "''").replace("\n", "`n"),
                               smtpServer, smtpUser, smtpPassword);

    QProcess::startDetached(command);
}



#include <QSslSocket>

void gestion_stock::on_pushButton_15_clicked()
{
    QString serveur = "smtp.gmail.com";
    int port = 587; // Port pour SMTP avec STARTTLS

    // Informations de l'expéditeur et du destinataire
    QString expediteur = "tasnimdridi29@gmail.com";
    QString destinataire = ui->dest->toPlainText();

    QString subject = "Mail a propos gestion du stock ";

    // Détails du message
    QString corps = ui->contenu->toPlainText();

    // Connexion au serveur SMTP
    QSslSocket socket;
    socket.connectToHost(serveur, port);
    if (!socket.waitForConnected()) {
        qDebug() << "Échec de connexion au serveur SMTP:" << socket.errorString();
        return;
    }

    // Attente de la réponse du serveur
    if (!socket.waitForReadyRead()) {
        qDebug() << "Délai d'attente de réponse du serveur SMTP:" << socket.errorString();
        return;
    }
    qDebug() << socket.readAll(); // Afficher la réponse initiale du serveur

    // Envoi de la commande EHLO
    socket.write("EHLO localhost\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Délai d'attente de réponse du serveur SMTP (EHLO):" << socket.errorString();
        return;
    }
    qDebug() << socket.readAll(); // Afficher la réponse après EHLO

    // Envoi de la commande STARTTLS
    socket.write("STARTTLS\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Délai d'attente de réponse du serveur SMTP (STARTTLS):" << socket.errorString();
        return;
    }
    qDebug() << socket.readAll(); // Afficher la réponse après STARTTLS

    // Démarrer le chiffrement
    socket.startClientEncryption();
    if (!socket.waitForEncrypted()) {
        qDebug() << "Échec du chiffrement:" << socket.errorString();
        return;
    }

    // Envoi de la commande AUTH LOGIN
    socket.write("AUTH LOGIN\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Délai d'attente de réponse du serveur SMTP (AUTH LOGIN):" << socket.errorString();
        return;
    }
    qDebug() << socket.readAll(); // Afficher la réponse après AUTH LOGIN

    // Envoi du nom d'utilisateur encodé en Base64
    socket.write(QByteArray().append(expediteur.toUtf8()).toBase64() + "\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Délai d'attente de réponse du serveur SMTP (Nom d'utilisateur):" << socket.errorString();
        return;
    }
    qDebug() << socket.readAll(); // Afficher la réponse après l'envoi du nom d'utilisateur

    // Envoi du mot de passe encodé en Base64
    socket.write(QByteArray().append("dsll xjlv muty dqia").toBase64() + "\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Échec de l'authentification SMTP (Mot de passe):" << socket.errorString();
        return;
    }
    qDebug() << socket.readAll(); // Afficher la réponse après l'envoi du mot de passe

    // Envoi de la commande MAIL FROM
    socket.write("MAIL FROM:<" + expediteur.toUtf8() + ">\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Délai d'attente de réponse du serveur SMTP (MAIL FROM):" << socket.errorString();
        return;
    }
    qDebug() << socket.readAll(); // Afficher la réponse après MAIL FROM

    // Envoi de la commande RCPT TO
    socket.write("RCPT TO:<" + destinataire.toUtf8() + ">\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Délai d'attente de réponse du serveur SMTP (RCPT TO):" << socket.errorString();
        return;
    }
    qDebug() << socket.readAll(); // Afficher la réponse après RCPT TO

    // Envoi de la commande DATA
    socket.write("DATA\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Délai d'attente de réponse du serveur SMTP (DATA):" << socket.errorString();
        return;
    }
    qDebug() << socket.readAll(); // Afficher la réponse après DATA

    // Envoi des en-têtes et du corps du message
    socket.write("From: " + expediteur.toUtf8() + "\r\n");
    socket.write("To: " + destinataire.toUtf8() + "\r\n");
    socket.write("Subject: " + subject.toUtf8() + "\r\n");
    socket.write("\r\n");
    socket.write(corps.toUtf8() + "\r\n");
    socket.write(".\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Échec d'envoi des données du mail:" << socket.errorString();
        return;
    }
    qDebug() << socket.readAll(); // Afficher la réponse après l'envoi des données du mail

    // Envoi de la commande QUIT
    socket.write("QUIT\r\n");
    if (!socket.waitForBytesWritten()) {
        qDebug() << "Échec d'envoi de la commande QUIT:" << socket.errorString();
        return;
    }

    // Fermeture de la connexion
    socket.close();
    QMessageBox::information(this, "Succès", "L'email a été envoyé avec succès à " + destinataire);


}



void gestion_stock::on_pushButton_17_clicked()
{
    // 1. Actualiser le tableau principal
    ui->tableStock->clearContents();
    ui->tableStock->setRowCount(0);

    QSqlQuery query;
    query.prepare("SELECT NOM_PRODUIT, QUANTITE, TYPE, PRIX_UNITAIRE, DATE_AJOUT, FOURNISSEUR, IDSTOCK FROM STOCKS");

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Rafraîchissement impossible: " + query.lastError().text());
        return;
    }

    // Variables pour détecter les stocks critiques
    bool criticalStockFound = false;
    QStringList criticalProducts;

    int row = 0;
    while (query.next()) {
        ui->tableStock->insertRow(row);

        // Remplissage normal du tableau
        ui->tableStock->setItem(row, 0, new QTableWidgetItem(query.value("NOM_PRODUIT").toString()));

        // Gestion spéciale pour la quantité (en rouge si critique)
        int quantity = query.value("QUANTITE").toInt();
        QTableWidgetItem *qtyItem = new QTableWidgetItem(QString::number(quantity));
        if (quantity <= 10) {
            qtyItem->setForeground(Qt::red);
            criticalStockFound = true;
            criticalProducts << query.value("NOM_PRODUIT").toString();
        }
        ui->tableStock->setItem(row, 1, qtyItem);

        // Autres colonnes
        ui->tableStock->setItem(row, 2, new QTableWidgetItem(query.value("TYPE").toString()));
        ui->tableStock->setItem(row, 3, new QTableWidgetItem(query.value("PRIX_UNITAIRE").toString()));
        ui->tableStock->setItem(row, 4, new QTableWidgetItem(query.value("DATE_AJOUT").toString()));
        ui->tableStock->setItem(row, 5, new QTableWidgetItem(query.value("FOURNISSEUR").toString()));

        row++;
    }

    ui->tableStock->resizeColumnsToContents();

    // 2. Vérifier et afficher les alertes
    if (criticalStockFound) {
        QString alertMessage = "ALERTE - Stocks critiques détectés:\n";
        alertMessage += "• " + criticalProducts.join("\n• ");

        QMessageBox::warning(this,
                             "Stocks Critiques",
                             alertMessage,
                             QMessageBox::Ok);

        // Optionnel: Mettre à jour le badge de notification
        updateNotificationBadge(criticalProducts.size());
    } else {
        QMessageBox::information(this,
                                 "État des stocks",
                                 "Tous les stocks sont normaux",
                                 QMessageBox::Ok);
    }
}








//
void gestion_stock::update_label() {
    // Ajouter les données reçues au tampon
    dataBuffer += A.read_from_arduino();
    qDebug() << "Données reçues d'Arduino :" << dataBuffer;

    // Vérifier si le tampon contient une ligne complète se terminant par '\n' ou '\r\n'
    int newlineIndex = dataBuffer.indexOf("\r\n");  // Recherche de la fin de la ligne
    if (newlineIndex != -1) {
        // Extraire le message complet
        QString completeMessage = dataBuffer.left(newlineIndex).trimmed();
        dataBuffer.remove(0, newlineIndex + 2); // Supprimer la ligne traitée (y compris '\r\n')

        // Traiter le message reçu
        if (completeMessage == "NORMAL") {
            ui->statusLabel->setText("Mode normal");
            lastStatus = "NORMAL";
        } else if (completeMessage == "VERIFIER_QUANTITE") {
            ui->statusLabel->setText("Vérifier Quantité");
            lastStatus = "VERIFIER_QUANTITE";
        } else {
            // Message inconnu
            ui->statusLabel->setText("Message inconnu : " + completeMessage);
        }
    }
}

void gestion_stock::send_automatic_alert() {
    // Envoyer une alerte en fonction du dernier statut reçu de l'Arduino
    if (lastStatus == "NORMAL") {
        A.write_to_arduino("NORMAL");
    } else if (lastStatus == "VERIFIER_QUANTITE") {
        int quantity = getQuantityFromDatabase();
        if (quantity <= 5) {
            A.write_to_arduino("MODE_NORMAL");
        } else {
            A.write_to_arduino("QUANTITE_AUGMENTE");
        }
    } else {
        // Si aucun statut n'a été reçu, envoyer une alerte par défaut
        A.write_to_arduino("UNKNOWN");
    }
}

int gestion_stock::getQuantityFromDatabase() {
    // Vérifier si la base de données est ouverte
    if (!db.isOpen()) {
        qDebug() << "";
        return 10; // Valeur par défaut en cas de problème de connexion à la base de données
    }

    // Préparer la requête SQL pour récupérer la quantité
    QSqlQuery query;
    query.prepare("SELECT QUANTITE FROM STOCKS WHERE ROWNUM = 1");

    // Exécuter la requête et vérifier si l'exécution a réussi
    if (query.exec()) {
        if (query.next()) {
            // Retourner la quantité récupérée
            return query.value(0).toInt();
        } else {
            // Si aucune ligne n'est retournée, afficher un message d'erreur et retourner la valeur par défaut
            qDebug() << "Aucune quantité trouvée dans la base de données.";
            return 10;
        }
    } else {
        // Si la requête échoue, afficher un message d'erreur
        qDebug() << "Erreur lors de l'exécution de la requête SQL : " << query.lastError().text();
        return 10;
    }
}

