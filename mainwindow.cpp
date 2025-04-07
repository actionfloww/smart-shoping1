#include "mainwindow.h"
#include "Event.h"
#include "ui_mainwindow.h"
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QPrinter>
#include <QPainter>
#include <QTextDocument>
#include <QSortFilterProxyModel>
#include <QVBoxLayout>
#include <QSqlError>
#include <QPushButton>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QTextCharFormat>
#include <QByteArray>
#include "qrcodegenerator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), event(new Event()), proxyModel(new QSortFilterProxyModel(this))
{
    ui->setupUi(this);

    // Configuration des icônes
    ui->logo->setPixmap(QPixmap("C:\\Users\\MSI\\Documents\\projet\\logo.png"));


    ui->calendar_4->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\calendar.png"));
    ui->analytics_3->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\analytics.png"));
    ui->pushButton_13->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\tournant.png"));
    ui->P_2->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\pdf.png"));
    ui->sup_2->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\update.png"));
    ui->filter->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\filter.png"));
    ui->search_3->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\search.png"));
    ui->sup->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\bin.png"));

    // Configuration du modèle proxy
    proxyModel->setSourceModel(event->afficher()); // Modèle de votre table
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyModel->setSortCaseSensitivity(Qt::CaseInsensitive);

    ui->tableView->setModel(proxyModel); // Attacher le modèle proxy à la vue
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setStyleSheet(
        "QTableView::item:selected { "
        "background-color: #e27396; "  // Couleur de fond pour l'élément sélectionné
        "color: black; "
        "}"
        );

    // Connexions des boutons
    connect(ui->sup_2, &QPushButton::clicked, this, &MainWindow::on_sup_2_clicked);
    connect(ui->update, &QPushButton::clicked, this, &MainWindow::on_update_clicked);
    connect(ui->P_2, &QPushButton::clicked, this, &MainWindow::generatePDF);
    connect(ui->search_3, &QPushButton::clicked, this, &MainWindow::rechercherEvent);
    connect(ui->pushButton_13, &QPushButton::clicked, this, &MainWindow::refreshPage);
    connect(ui->filter, &QPushButton::clicked, this, &MainWindow::trierParType);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::switchToStatisticsPage);
    connect(ui->analytics_3, &QPushButton::clicked, this, &MainWindow::goToStatisticsPage);
    connect(ui->analytics_3, &QPushButton::clicked, this, &MainWindow::afficherStatistiques);
   // connect(ui->calendarWidget, &QCalendarWidget::clicked, this, &MainWindow::afficherDetailsEvenement);
   connect(ui->calendar_4, &QPushButton::clicked, this, &MainWindow::switchTocalender);
    connect(ui->calendarWidget, &QCalendarWidget::clicked, this, &MainWindow::afficherDetailsEvenement);





    // Vérification de la base de données
    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Erreur", "Impossible d'ouvrir la base de données !");
    }


        // Configurer Tab1 (Interface existante)
        QWidget *tab1 = ui->tabWidget->widget(0); // Onglet 1
        // Ajoutez votre interface principale ici, déjà placée dans `tab1`.

        // Configurer Tab2 (Statistiques)
        QWidget *tab2 = ui->tabWidget->widget(1); // Onglet 2
        QVBoxLayout *layout = new QVBoxLayout(tab2);
        tab2->setLayout(new QVBoxLayout());


        QWidget *page4 = ui->tabWidget->widget(3);  // Page 4 (index 3 car 0-based)


        // Initialisation du Timer
        // Initialisation des timers
        timerAffichage = new QTimer(this);
        timerMasquage = new QTimer(this);

        // Connexion des signaux et slots
        connect(timerAffichage, &QTimer::timeout, this, &MainWindow::afficherAfficheEvenement);
        connect(timerMasquage, &QTimer::timeout, this, &MainWindow::masquerAfficheEvenement);

        // Démarrer l'affichage toutes les 30 secondes
        timerAffichage->start(60000); // 30 secondes


        QWidget *tab4 = ui->tabWidget->widget(3);




}





MainWindow::~MainWindow()
{
    delete ui;
    delete event;
}
void MainWindow::goToStatisticsPage() {
    ui->tabWidget->setCurrentIndex(1); // Naviguer vers Tab2 (Statistiques)
}

void MainWindow::switchToStatisticsPage() {
    // Supposons que la deuxième page du QTabWidget est à l'index 1
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::switchTocalender() {
    // Supposons que la deuxième page du QTabWidget est à l'index 1
    ui->tabWidget->setCurrentIndex(2);
}





/*void MainWindow::actualiserTableau()
{
    // Créer un modèle de requête SQL
    QSqlQueryModel *model = new QSqlQueryModel(this);

    // Exécuter une requête pour récupérer les colonnes spécifiques (sans l'ID si non affiché)
    model->setQuery("SELECT NOM_EVENT, DESCRIPTION, TYPE, DATE_DEBUT, DATE_FIN, PRODUIT FROM EVENEMENTS");

    // Définir les en-têtes de colonnes
    model->setHeaderData(0, Qt::Horizontal, tr("Nom de l'événement")); // NOM_EVENT
    model->setHeaderData(1, Qt::Horizontal, tr("Description"));        // DESCRIPTION
    model->setHeaderData(2, Qt::Horizontal, tr("Type"));               // TYPE
    model->setHeaderData(3, Qt::Horizontal, tr("Date de début"));      // DATE_DEBUT
    model->setHeaderData(4, Qt::Horizontal, tr("Date de fin"));        // DATE_FIN
    model->setHeaderData(5, Qt::Horizontal, tr("Produit"));            // PRODUIT

    // Appliquer le modèle à la QTableView
    ui->tableView->setModel(model);

    // Redimensionner les colonnes pour s'adapter au contenu
    ui->tableView->resizeColumnsToContents();
}*/


void MainWindow::on_pushButton_clicked()
{

    // Récupération des données depuis les champs de l'interface
    QString idProduit = ui->lineEdit_8->text();
    QString nomEvent = ui->lineEdit_5->text();
    QString description = ui->textEdit_3->toPlainText();
    QString type = ui->lineEdit_9->text();
    QString dateDebut = ui->dateEdit_6->text();
    QString dateFin = ui->dateEdit_5->text();

    // Contrôle de saisie : vérifier que tous les champs sont remplis
    if (idProduit.isEmpty() || nomEvent.isEmpty() || description.isEmpty() || type.isEmpty() || dateDebut.isEmpty() || dateFin.isEmpty()) {
        QMessageBox::warning(this, "Champs vides", "Tous les champs doivent être remplis !");
        return;  // Arrête l'exécution de la fonction si un champ est vide
    }

    // Vérifier que idProduit est un nombre
    bool isNumber;
    idProduit.toInt(&isNumber);
    if (!isNumber) {
        QMessageBox::warning(this, "Erreur de saisie", "L'ID du produit doit être un nombre !");
        return;  // Arrête l'exécution si idProduit n'est pas un nombre
    }

    // Vérifier que nomEvent ne contient pas de chiffres
    QRegularExpression regex("\\d");  // Expression régulière pour détecter les chiffres
    if (nomEvent.contains(regex)) {
        QMessageBox::warning(this, "Erreur de saisie", "Le nom de l'événement ne doit pas contenir de chiffres !");
        return;  // Arrête l'exécution si nomEvent contient des chiffres
    }

    // Vérifier que type est soit "solde", "promotion" ou "réduction"
    QStringList typesValides = {"solde", "promotion", "réduction"};
    if (!typesValides.contains(type.toLower())) {
        QMessageBox::warning(this, "Erreur de saisie", "Le type doit être 'solde', 'promotion' ou 'réduction' !");
        return;  // Arrête l'exécution si le type est invalide
    }

    // Vérification des dates (date de début doit être avant la date de fin)
    QDate debut = QDate::fromString(dateDebut, "dd/MM/yyyy");
    QDate fin = QDate::fromString(dateFin, "dd/MM/yyyy");
    if (debut > fin) {
        QMessageBox::warning(this, "Erreur de date", "La date de début doit être antérieure à la date de fin !");
        return;  // Arrête l'exécution de la fonction si les dates sont invalides
    }

    // Préparation de la requête SQL
    QSqlQuery query;
    query.prepare("INSERT INTO EVENEMENTS (NOM_EVENT, DESCRIPTION, TYPE, DATE_DEBUT, DATE_FIN, PRODUIT) "
                  "VALUES (:nomEvent, :description, :type, TO_DATE(:dateDebut, 'DD/MM/YYYY'), TO_DATE(:dateFin, 'DD/MM/YYYY'), :idProduit)");
    query.bindValue(":nomEvent", nomEvent);
    query.bindValue(":description", description);
    query.bindValue(":type", type);
    query.bindValue(":dateDebut", dateDebut);
    query.bindValue(":dateFin", dateFin);
    query.bindValue(":idProduit", idProduit);

    // Exécution et vérification de la requête
    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Événement ajouté avec succès !");
        viderFormulaire();
        ui->tableView->setModel(event->afficher());
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout de l'événement !");
    }

}
void MainWindow::on_tab_affichage_clicked(const QModelIndex &index)
{
    if (!index.isValid()) {
        return;
    }


    QString nomEvent = ui->tableView->model()->data(index.siblingAtColumn(0)).toString();
    QString description = ui->tableView->model()->data(index.siblingAtColumn(1)).toString();
    QString type = ui->tableView->model()->data(index.siblingAtColumn(2)).toString();
    QString dateDebut = ui->tableView->model()->data(index.siblingAtColumn(3)).toString();
    QString dateFin = ui->tableView->model()->data(index.siblingAtColumn(4)).toString();
    QString produit = ui->tableView->model()->data(index.siblingAtColumn(5)).toString();


    ui->lineEdit_5->setText(nomEvent);
    ui->textEdit_3->setPlainText(description);
    ui->lineEdit_9->setText(type);
    ui->dateEdit_6->setDate(QDate::fromString(dateDebut, "yyyy-MM-dd"));
    ui->dateEdit_5->setDate(QDate::fromString(dateFin, "yyyy-MM-dd"));
    ui->lineEdit_8->setText(produit);
    //actualiserTableau();
    ui->tableView->setModel(event->afficher());
}

void MainWindow::on_sup_clicked()
{
    QItemSelectionModel *selection = ui->tableView->selectionModel();

    if (!selection->hasSelection()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner une ligne à supprimer.");
        return;
    }

    QModelIndex index = selection->currentIndex();

    QString nomEvent = ui->tableView->model()->data(index.siblingAtColumn(0)).toString();

    if (nomEvent.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Nom de l'événement invalide. Veuillez sélectionner une ligne valide.");
        return;
    }

    // Recherche de l'ID de l'événement à partir du nom
    QSqlQuery query;
    query.prepare("SELECT ID_EVENT FROM EVENEMENTS WHERE NOM_EVENT = :nomEvent");
    query.bindValue(":nomEvent", nomEvent);
    query.exec();

    if (query.next()) {
        int eventID = query.value(0).toInt();

        if (eventID <= 0) {
            QMessageBox::warning(this, "Erreur", "ID invalide. Impossible de trouver l'ID pour l'événement.");
            return;
        }

        // Demande de confirmation
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment supprimer cet événement ?",
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            // Créez un objet Event pour supprimer l'événement avec l'ID trouvé

            bool test = event->supprimer(eventID);  // Appel à la méthode de suppression avec la méthode correcte

            if (test) {
                QMessageBox::information(this, "Succès", "Suppression effectuée.");
                ui->tableView->setModel(event->afficher());  // Rafraîchir l'affichage
            } else {
                QMessageBox::critical(this, "Erreur", "Suppression non effectuée. Vérifiez l'ID.");
            }
        }
    } else {
        QMessageBox::warning(this, "Erreur", "Événement non trouvé dans la base de données.");
    }
}



void MainWindow::on_sup_2_clicked()
{
    QString nomEvent = ui->updatee_2->text().trimmed();

    if (nomEvent.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer le nom de l'événement.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM EVENEMENTS WHERE NOM_EVENT = :nomEvent");
    query.bindValue(":nomEvent", nomEvent);

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Échec de la récupération des données.\n" );
        return;
    }

    if (query.next()) {
        // Récupérer les données de l'événement
        int idEvent = query.value("ID_EVENT").toInt();
        QString description = query.value("DESCRIPTION").toString();
        QString type = query.value("TYPE").toString();
        QDate dateDebut = query.value("DATE_DEBUT").toDate();
        QDate dateFin = query.value("DATE_FIN").toDate();
        QString produit = query.value("PRODUIT").toString();

        // Remplir les champs du formulaire avec les données récupérées
        ui->textEdit_3->setPlainText(description);
        ui->lineEdit_9->setText(type);
        ui->dateEdit_6->setDate(dateDebut);
        ui->dateEdit_5->setDate(dateFin);
        ui->lineEdit_8->setText(produit);
        ui->lineEdit_5->setText(nomEvent);

        // Stocker l'ID de l'événement pour l'utiliser lors de la mise à jour
        currentEventID = idEvent;
    } else {
        QMessageBox::warning(this, "Erreur", "Aucun événement trouvé avec ce nom.");
    }
}

void MainWindow::on_update_clicked()
{
    // Vérifier si un événement est sélectionné
    if (currentEventID <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez charger un événement à modifier.");
        return;
    }

    // Récupérer les données modifiées depuis le formulaire
    QString nomEvent = ui->lineEdit_5->text().trimmed(); // Champ pour le nom de l'événement
    QString description = ui->textEdit_3->toPlainText().trimmed();
    QString type = ui->lineEdit_9->text().trimmed();
    QDate dateDebut = ui->dateEdit_6->date();
    QDate dateFin = ui->dateEdit_5->date();
    QString idProduitStr = ui->lineEdit_8->text().trimmed(); // Renommer pour éviter la redéfinition

    // Vérification des champs obligatoires
    if (nomEvent.isEmpty() || type.isEmpty() || idProduitStr.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs obligatoires.");
        return;
    }

    // Conversion de idProduitStr (QString) en idProduit (int)
    bool conversionOk;
    int idProduit = idProduitStr.toInt(&conversionOk); // Utiliser un bool pour vérifier la conversion

    if (!conversionOk) {
        QMessageBox::warning(this, "Erreur", "Le champ produit doit contenir un entier valide.");
        return;
    }

    Event event;  // Déclare un objet Event (pas un pointeur)

    // Définition des attributs via les setters
    event.setNomEvent(nomEvent);
    event.setDescription(description);
    event.setType(type);
    event.setDateDebut(dateDebut);
    event.setDateFin(dateFin);
    event.setIdProduit(idProduit);


    // Appeler la méthode de mise à jour
    bool result = event.modifier(currentEventID);

    if (result) {
        QMessageBox::information(this, "Succès", "Événement modifié avec succès !");
        viderFormulaire();
        ui->tableView->setModel(event.afficher());  // Rafraîchir l'affichage
    } else {
        QMessageBox::critical(this, "Erreur", "La modification a échoué.\nDétails : " );
    }


}

void MainWindow::viderFormulaire()
{
    ui->lineEdit_5->clear();
    ui->lineEdit_9->clear();
    ui->textEdit_3->clear();
    ui->lineEdit_8->clear();
    ui->dateEdit_5->setDate(QDate::currentDate());
    ui->dateEdit_6->setDate(QDate::currentDate());
}


void MainWindow::generatePDF() {
    // Sélectionner l'emplacement où sauvegarder le PDF
    QString fileName = QFileDialog::getSaveFileName(this, "Sauvegarder en PDF", "", "Fichiers PDF (*.pdf)");
    if (fileName.isEmpty()) {
        return; // Si l'utilisateur annule
    }

    // Configurer l'imprimante pour un fichier PDF
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);

    // Initialiser un peintre pour dessiner dans le PDF
    QPainter painter(&printer);

    // Dimensions et positions
    int margin = 30;
    int cellWidth = 90; // Largeur de chaque cellule
    int cellHeight = 30; // Hauteur de chaque cellule
    int tableStartX = margin;
    int tableStartY = 150;

    // Récupérer le modèle associé au QTableView
    QAbstractItemModel *model = ui->tableView->model();
    if (!model) {
        QMessageBox::warning(this, "Erreur", "Le modèle du tableau est vide !");
        return;
    }

    // Dessiner le titre
    painter.setFont(QFont("Arial", 16));
    painter.drawText(margin, 100, "Détails des Événements");

    // Dessiner les en-têtes de colonnes
    painter.setFont(QFont("Arial", 10, QFont::Bold));
    for (int col = 0; col < model->columnCount(); ++col) {
        QString headerText = model->headerData(col, Qt::Horizontal).toString();
        QRect cellRect(tableStartX + col * cellWidth, tableStartY, cellWidth, cellHeight);
        painter.drawRect(cellRect); // Dessiner la bordure de la cellule
        painter.drawText(cellRect, Qt::AlignCenter, headerText); // Texte centré
    }

    // Dessiner les données
    painter.setFont(QFont("Arial", 10));
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < model->columnCount(); ++col) {
            QString cellText = model->data(model->index(row, col)).toString();
            QRect cellRect(tableStartX + col * cellWidth, tableStartY + (row + 1) * cellHeight, cellWidth, cellHeight);
            painter.drawRect(cellRect); // Dessiner la bordure de la cellule
            painter.drawText(cellRect, Qt::AlignCenter, cellText); // Texte centré
        }
    }

    // Terminer le PDF
    painter.end();
    QMessageBox::information(this, "Succès", "Fichier PDF généré avec succès !");
}


void MainWindow::rechercherEvent() {
    // Récupérer le texte saisi dans le QLineEdit
    QString nomRecherche = ui->lineEdit->text().trimmed();
    if (nomRecherche.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un nom pour effectuer la recherche.");
        return;
    }

    // Récupérer le modèle du tableau
    QAbstractItemModel *model = ui->tableView->model();
    if (!model) {
        QMessageBox::warning(this, "Erreur", "Le modèle du tableau est vide !");
        return;
    }

    // Créer un modèle filtré
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(model);
    proxyModel->setFilterKeyColumn(0); // Colonne à filtrer (0 = première colonne, où se trouve le nom)
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive); // Ignorer la casse
    proxyModel->setFilterFixedString(nomRecherche);

    // Vérifier si des résultats existent
    if (proxyModel->rowCount() == 0) {
        QMessageBox::information(this, "Résultat", "Aucun événement trouvé pour ce nom.");
        return;
    }

    // Appliquer le modèle filtré au QTableView
    ui->tableView->setModel(proxyModel);
}

void MainWindow::refreshPage() {
    // Réinitialiser le modèle proxy pour afficher tous les événements
    if (proxyModel) {
        proxyModel->setFilterFixedString("");  // Supprimer le filtre
        proxyModel->invalidate();             // Réinitialiser le modèle
    }

    // Réinitialiser la vue pour afficher tous les événements
     ui->tableView->setModel(event->afficher());
    viderFormulaire();

}

void MainWindow::trierParType() {
    // Récupérer le type sélectionné dans le QComboBox
    QString typeSelectionne = ui->comboBox_2->currentText();

    if (proxyModel) {
        // Appliquer le filtre basé sur le type sélectionné
        proxyModel->setFilterKeyColumn(2); // Supposons que la colonne "Type" soit la colonne 2
        proxyModel->setFilterFixedString(typeSelectionne);
    }

    // Mettre à jour la vue
    ui->tableView->reset();

}


void MainWindow::afficherStatistiques() {
    // Créer une série pour le graphique
    QPieSeries *series = new QPieSeries();

    // Récupérer les données depuis la base
    QSqlQuery query("SELECT TYPE, COUNT(*) as count FROM EVENEMENTS GROUP BY TYPE");
    while (query.next()) {
        QString type = query.value(0).toString();
        int count = query.value(1).toInt();
        series->append(type, count);
    }

    // Configurer les options du graphique
    for (auto slice : series->slices()) {
        slice->setLabel(QString("%1 (%2)").arg(slice->label()).arg(slice->value()));
    }

    // Créer le graphique
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques des événements par type");
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    // Créer une vue pour afficher le graphique
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Ajouter le graphique à l'interface
    QWidget *tab2 = ui->tabWidget->widget(1); // Onglet des statistiques
    QVBoxLayout *layout = dynamic_cast<QVBoxLayout *>(tab2->layout());
    if (layout) {
        // Nettoyer les widgets existants pour éviter les doublons
        QLayoutItem *item;
        while ((item = layout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        layout->addWidget(chartView);
    }
}


void MainWindow::afficherEvenementsSurCalendrier() {
    // Réinitialiser le format de toutes les dates
    ui->calendarWidget->setDateTextFormat(QDate(), QTextCharFormat());

    // Définir le format des dates contenant des événements
    QTextCharFormat format;
    format.setBackground(Qt::yellow);  // Fond jaune pour marquer les événements
    format.setForeground(Qt::black);   // Texte en noir

    // Requêter la base de données pour récupérer les événements
    QSqlQuery query("SELECT ID_EVENT, NOM_EVENT, DESCRIPTION, TYPE, DATE_DEBUT, DATE_FIN, PRODUIT FROM EVENEMENTS");

    if (query.exec()) {
        while (query.next()) {
            int idEvent = query.value(0).toInt();
            QString nomEvent = query.value(1).toString();
            QString description = query.value(2).toString();
            QString type = query.value(3).toString();
            QDate dateDebut = query.value(4).toDate();
            QDate dateFin = query.value(5).toDate();
            int idProduit = query.value(6).toInt();

            // Vérifier si les dates sont valides
            if (!dateDebut.isValid() || !dateFin.isValid()) {
                continue;
            }

            // Surligner chaque date dans l'intervalle de l'événement
            for (QDate date = dateDebut; date <= dateFin; date = date.addDays(1)) {
                QTextCharFormat tempFormat = format;

                // Ajouter le nom de l'événement dans l'infobulle
                QString existingToolTip = ui->calendarWidget->dateTextFormat(date).toolTip();
                tempFormat.setToolTip(existingToolTip + QString("\n📌 %1 (%2)").arg(nomEvent).arg(type));

                // Appliquer le format à la date dans le calendrier
                ui->calendarWidget->setDateTextFormat(date, tempFormat);
            }
        }
    } else {
        QMessageBox::warning(this, "Erreur", "Impossible de récupérer les événements pour le calendrier.");
        qDebug() << "Erreur SQL:" << query.lastError().text();
    }

    // Mettre à jour l'affichage du calendrier
    ui->calendarWidget->update();
}

void MainWindow::afficherDetailsEvenement(const QDate &date) {
    QString details;

    // Requêter la base de données pour trouver les événements pour la date sélectionnée
    QSqlQuery query;
    query.prepare("SELECT ID_EVENT, NOM_EVENT, DESCRIPTION, TYPE, DATE_DEBUT, DATE_FIN, PRODUIT "
                  "FROM EVENEMENTS WHERE :date BETWEEN DATE_DEBUT AND DATE_FIN");
    query.bindValue(":date", date);

    if (query.exec()) {
        while (query.next()) {
            int idEvent = query.value(0).toInt();
            QString nomEvent = query.value(1).toString();
            QString description = query.value(2).toString();
            QString type = query.value(3).toString();
            QDate dateDebut = query.value(4).toDate();
            QDate dateFin = query.value(5).toDate();
            int idProduit = query.value(6).toInt();

            details += QString("📅 **Événement** : %1\n"
                               "📖 **Description** : %2\n"
                               "🏷️ **Type** : %3\n"
                               "📆 **Du** %4 **au** %5\n"
                               "🆔 **ID Produit** : %6\n\n")
                           .arg(nomEvent)
                           .arg(description)
                           .arg(type)
                           .arg(dateDebut.toString("dd/MM/yyyy"))
                           .arg(dateFin.toString("dd/MM/yyyy"))
                           .arg(idProduit);

        }
    } else {
        details = "❌ Erreur lors de la récupération des événements.";
        qDebug() << "Erreur SQL:" << query.lastError().text();
    }

    if (details.isEmpty()) {
        details = "Aucun événement pour cette date.";
    }

    // Afficher les détails dans une boîte de dialogue
    QMessageBox::information(this, "📅 Détails des événements", details);
}



void MainWindow::afficherAfficheEvenement() {
    if (!ui->labelAffiche) {
        qDebug() << "Erreur: labelAffiche non trouvé dans l'interface.";
        return;
    }

    // Définir le chemin de l'affiche (ex: "affiche.jpg")
    QString imagePath = ("C:\\Users\\MSI\\Documents\\projet\\affiche.png");
    QPixmap affiche(imagePath);

    if (affiche.isNull()) {
        qDebug() << "Erreur: Image non trouvée à l'emplacement" << imagePath;
        ui->labelAffiche->setText("Affiche non trouvée.");
    } else {
        // Afficher l'affiche
        ui->labelAffiche->setPixmap(affiche.scaled(400, 600, Qt::KeepAspectRatio));
        ui->labelAffiche->setScaledContents(true);
        ui->labelAffiche->show(); // S'assurer que le QLabel est visible
    }

    // Lancer le timer pour masquer l'affiche après 8 secondes
    timerMasquage->start(8000); // 8 secondes
}

void MainWindow::masquerAfficheEvenement() {
    if (ui->labelAffiche) {
        ui->labelAffiche->clear(); // Efface l'affiche
    }
}









































