#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "produit.h"
#include "pack.h"
#include "dialog.h"
#include <QMessageBox>
#include <QTimer>
#include <QPrinter>
#include <QPainter>
#include <QTextDocument>
#include <QFileDialog>
#include <QDesktopServices>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , produit(new Produit(this))
    , msgBox(nullptr)
{
    ui->setupUi(this);
    this->setWindowTitle("Accueil");

    // Configuration des formats de date
    ui->dateEdit_date_limite->setDisplayFormat("yyyy-MM-dd");
    ui->dateEdit_saison_fin->setDisplayFormat("yyyy-MM-dd");

    // Initialisation du ComboBox des catégories
    QStringList categories;
    categories << "Mode & Accessoires" << "Électronique" << "Beauté & Cosmétiques"
               << "Maison & Décoration" << "Alimentation" << "Culture & Loisirs Créatifs";
    ui->comboBox_categorie->addItems(categories);

    // Initialisation du ComboBox des tris
    QStringList tri;
    tri << "catégorie" << "prix" << "pack";
    ui->comboBox_tri->addItems(tri);

    // Connexion des signaux
    connect(ui->comboBox_tri, &QComboBox::currentIndexChanged,
            this, &MainWindow::on_comboBox_tri_currentIndexChanged);

    connect(ui->pushButton_rechercher, &QPushButton::clicked,
            this, &MainWindow::on_pushButton_rechercher_clicked);

    connect(ui->pushButton_renitialiser, &QPushButton::clicked,
            this, &MainWindow::on_pushButton_renitialiser_clicked);

    connect(produit, &Produit::prixMisAJour,
            this, &MainWindow::afficherNotificationPrix);

    // Configuration par défaut des boutons radio
    ui->radioNon->setChecked(true);

    // Timer pour rafraîchissement automatique
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::afficherProduits);
    timer->start(3600000); // Toutes les heures

    // Affichage initial des produits
    afficherProduits();

    // Connexion pour le remplissage du formulaire
    connect(ui->tableView_2->selectionModel(), &QItemSelectionModel::currentRowChanged,
            this, &MainWindow::remplirFormulaireDepuisSelection);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete produit;
    if (msgBox) {
        msgBox->deleteLater();
    }
}

void MainWindow::afficherNotificationPrix(int nbProduitsModifies)
{
    // Nettoyage préalable
    if (msgBox) {
        msgBox->deleteLater();
        msgBox = nullptr;
    }

    // Création de la notification
    msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("Mise à jour des prix");
    msgBox->setText(QString("<div style='font-size:14px; color:#2a4b8d;'>"
                            "<b>%1 produit(s)</b> mis à jour<br>"
                            "<span style='font-size:12px;'>Prix dynamiques appliqués</span>"
                            "</div>").arg(nbProduitsModifies));
    msgBox->setIcon(QMessageBox::Information);
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox->setModal(false);

    // Style amélioré
    msgBox->setStyleSheet(
        "QMessageBox { background-color: #f8f9fa; min-width: 300px; }"
        "QLabel { margin: 10px; }"
        "QPushButton { min-width: 80px; padding: 5px; }"
        );

    // Fermeture automatique après 3 secondes
    QTimer::singleShot(3000, this, [this]() {
        if (msgBox) {
            msgBox->accept();
            msgBox->deleteLater();
            msgBox = nullptr;
        }
    });

    msgBox->show();
}

void MainWindow::afficherProduits() {
    produit->afficherProduits(ui->tableView_2);

    disconnect(ui->tableView_2->selectionModel(), &QItemSelectionModel::currentRowChanged,
               this, &MainWindow::remplirFormulaireDepuisSelection);
    connect(ui->tableView_2->selectionModel(), &QItemSelectionModel::currentRowChanged,
            this, &MainWindow::remplirFormulaireDepuisSelection);
}

void MainWindow::remplirFormulaireDepuisSelection(const QModelIndex &index) {
    if (!index.isValid()) return;

    int row = index.row();
    QAbstractItemModel *model = ui->tableView_2->model();

    // Extraire toutes les valeurs des colonnes
    QString nom = model->data(model->index(row, 1)).toString();
    QString categorie = model->data(model->index(row, 2)).toString();
    double prix = model->data(model->index(row, 5)).toDouble();
    QString description = model->data(model->index(row, 4)).toString();
    QString gamme = model->data(model->index(row, 3)).toString();
    QDate date_limite = model->data(model->index(row, 6)).toDate();
    QDate saison_fin = model->data(model->index(row, 7)).toDate();
    QString est_pack = model->data(model->index(row, 8)).toString();

    // Afficher dans la console pour debug
    qDebug() << "Valeur de est_pack:" << est_pack;

    // Remplir les champs de formulaire
    ui->lineEdit_nom->setText(nom);
    ui->comboBox_categorie->setCurrentText(categorie);
    ui->lineEdit_prix_2->setText(QString::number(prix, 'f', 2)); // 2 décimales
    ui->lineEdit_description->setText(description);
    ui->lineEdit_gamme_2->setText(gamme);
    ui->dateEdit_date_limite->setDate(date_limite);
    ui->dateEdit_saison_fin->setDate(saison_fin);

    // Vérifier la valeur et cocher le bon bouton radio
    if (est_pack.toLower() == "oui") {
        ui->radioOui->setChecked(true);
    } else {
        ui->radioNon->setChecked(true);
    }
}

void MainWindow::on_pushButton_Ajouter_clicked() {
    // Récupérer les valeurs des champs
    QString nom = ui->lineEdit_nom->text();
    QString categorie = ui->comboBox_categorie->currentText();
    double prix = ui->lineEdit_prix_2->text().toDouble();
    QString description = ui->lineEdit_description->text();
    QString gamme = ui->lineEdit_gamme_2->text();
    QDate dateLimite = ui->dateEdit_date_limite->date();
    QDate saisonFin = ui->dateEdit_saison_fin->date();
    QString est_pack = ui->radioOui->isChecked() ? "oui" : "non";

    // Vérifications des champs
    if (nom.isEmpty() || categorie.isEmpty() || description.isEmpty() || gamme.isEmpty()){
        QMessageBox::warning(this, "Erreur", "Tous les champs sont obligatoires.");
        return;
    }

    if (prix < 0) {
        QMessageBox::warning(this, "Erreur", "Le champ 'prix' doit être strictement positif.");
        return;
    }

    // Ajouter le produit
    if (produit->ajouterProduit(nom, categorie, prix, description, gamme, dateLimite, saisonFin, est_pack)) {
        QMessageBox::information(this, "Succès", "Produit ajouté avec succès !");
        afficherProduits();
        viderFormulaire();
    }
}

void MainWindow::on_pushButton_Modifier_clicked() {
    // Récupérer le modèle du QTableView
    QAbstractItemModel *modfl = ui->tableView_2->model();

    // Vérifier si une ligne est sélectionnée
    QModelIndex index = ui->tableView_2->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un produit à modifier !");
        return;
    }

    // Récupérer l'ID de la ligne sélectionnée
    int id = modfl->data(modfl->index(index.row(), 0)).toInt();

    // Récupérer les valeurs des champs
    QString nom = ui->lineEdit_nom->text();
    QString categorie = ui->comboBox_categorie->currentText();
    double prix = ui->lineEdit_prix_2->text().toDouble();
    QString description = ui->lineEdit_description->text();
    QString gamme = ui->lineEdit_gamme_2->text();
    QDate date_limite = ui->dateEdit_date_limite->date();
    QDate saison_fin = ui->dateEdit_saison_fin->date();
    QString est_pack = ui->radioOui->isChecked() ? "oui" : "non";

    // Modifier le produit
    if (produit->modifierProduit(id, nom, categorie, prix, description, gamme, date_limite, saison_fin, est_pack)) {
        QMessageBox::information(this, "Succès", "Produit modifié avec succès !");
        afficherProduits();
        viderFormulaire();
    }
}

void MainWindow::on_pushButton_Supprimer_clicked() {
    // Récupérer la ligne sélectionnée dans le QTableView
    QModelIndex index = ui->tableView_2->currentIndex();

    if (!index.isValid()) {
        QMessageBox::warning(this, "Attention", "Veuillez sélectionner un produit à supprimer !");
        return;
    }

    // Récupérer le modèle depuis tableView_2
    QAbstractItemModel *model = ui->tableView_2->model();

    // Récupérer l'ID depuis la première colonne (0)
    int id = model->data(model->index(index.row(), 0)).toInt();

    // Supprimer le produit
    if (produit->supprimerProduit(id)) {
        QMessageBox::information(this, "Succès", "Produit supprimé avec succès !");
        afficherProduits();
    }
}

void MainWindow::viderFormulaire() {
    ui->lineEdit_nom->clear();
    ui->comboBox_categorie->setCurrentIndex(0);
    ui->lineEdit_prix_2->clear();
    ui->lineEdit_description->clear();
    ui->lineEdit_gamme_2->clear();
    ui->dateEdit_date_limite->clear();
    ui->dateEdit_saison_fin->clear();
    ui->radioNon->setChecked(true);
}

void MainWindow::on_comboBox_tri_currentIndexChanged(int index)
{
    qDebug() << "Tri sélectionné, index:" << index;

    if (!produit || !ui->tableView_2) {
        qDebug() << "Erreur: Objets non initialisés";
        return;
    }

    try {
        QString critere = ui->comboBox_tri->currentText();
        qDebug() << "Critère de tri:" << critere;

        if (critere == "catégorie") {
            produit->trierParCategorie(ui->tableView_2);
        }
        else if (critere == "prix") {
            produit->trierParPrixDescendant(ui->tableView_2);
        }
        else if (critere == "pack") {
            produit->trierParPack(ui->tableView_2);
        }
    }
    catch (...) {
        qDebug() << "Exception dans le tri";
    }
}

void MainWindow::on_pushButton_rechercher_clicked()
{
    QString motCle = ui->LineEdit_rechercher->text().trimmed();

    if (motCle.isEmpty()) {
        afficherProduits();
        return;
    }

    if (!produit) {
        qDebug() << "Erreur: produit non initialisé";
        return;
    }

    produit->rechercherProduits(motCle, ui->tableView_2);
}

void MainWindow::on_pushButton_renitialiser_clicked()
{
    ui->LineEdit_rechercher->clear();
    afficherProduits();
}

void MainWindow::on_pushButton_fonctionalite_clicked()
{
    Dialog *maDialog = new Dialog(this);
    maDialog->exec();
}




void MainWindow::on_pushButton_exporter_clicked()
{
    ui->tableView_2->viewport()->update();

    QAbstractItemModel *model = ui->tableView_2->model();
    if (!model || model->rowCount() == 0) {
        QMessageBox::warning(this, "Erreur", "Aucune donnée à exporter !");
        return;
    }

    QString fileName = QFileDialog::getSaveFileName(this, "Exporter en PDF",
                                                    QDir::homePath() + "/liste_produits_élégante.pdf",
                                                    "Fichiers PDF (*.pdf)");
    if (fileName.isEmpty()) return;

    // Style CSS haut de gamme
    QString html = QStringLiteral(
        "<html>"
        "<head>"
        "<style>"
        "body { font-family: 'Arial Narrow', sans-serif; margin: 0; padding: 0; }"
        "h1 { "
        "   font-size: 28pt; "
        "   text-align: center; "
        "  margin: 5pt 0 40pt 0; "
        "   color: #2a4b8d; "  // Bleu marine plus clair (#2a4b8d)
        "   font-weight: bold; "
        "}"
        "table { "
        "   width: 60%; "
        "   margin: 0 auto; "
        "   border-collapse: collapse; "
        "   font-size: 8pt; "
        "}"
        "th { "
        "   background-color: #2a4b8d; "  // Même bleu marine plus clair
        "   color: white; "
        "   padding: 8pt; "
        "   text-align: center; "
        "   border: 1pt solid #dddddd; "
        "}"
        "td { "
        "   padding: 6pt; "
        "   text-align: center; "
        "   border: 1pt solid #dddddd; "  // Bordures grises
        "}"
        "tr:nth-child(even) { background-color: #f9f9f9; }"
        ".footer { "
        "   text-align: center; "
        "   margin-top: 15pt; "
        "   font-size: 8pt; "
        "   color: #666666; "
        "}"
        "</style>"
        "</head>"
        "<body>"
        "<h1>Liste des produits</h1>"
        "<table>"
        );

    // En-têtes de colonnes
    html += "<tr>";
    for (int col = 0; col < model->columnCount(); ++col) {
        QString header = model->headerData(col, Qt::Horizontal).toString();
        html += QString("<th>%1</th>").arg(header);
    }
    html += "</tr>";

    // Données du tableau
    for (int row = 0; row < model->rowCount(); ++row) {
        html += "<tr>";
        for (int col = 0; col < model->columnCount(); ++col) {
            QVariant data = model->data(model->index(row, col));
            QString content = data.isNull() ? "N/A" : data.toString();
            html += QString("<td>%1</td>").arg(content.toHtmlEscaped());
        }
        html += "</tr>";
    }

    html += QStringLiteral(
                "</table>"
                "<div class='footer'>Généré le %1</div>"
                "</body></html>"
                ).arg(QDateTime::currentDateTime().toString("dd/MM/yyyy à HH:mm"));

    QTextDocument doc;
    doc.setHtml(html);

    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    printer.setPageSize(QPageSize(QPageSize::A4));
    printer.setPageMargins(QMarginsF(10, 10, 10, 10), QPageLayout::Millimeter);

    doc.print(&printer);

    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setText("Export PDF réussi");
    msgBox.setInformativeText("Voulez-vous ouvrir le fichier ?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);

    if (msgBox.exec() == QMessageBox::Yes) {
        QDesktopServices::openUrl(QUrl::fromLocalFile(fileName));
    }
}




void MainWindow::on_pushButton_pack_clicked()
{
    pack *fenetrePack = new pack(this);  // 'this' pour parenté à MainWindow

    // 2. Afficher la fenêtre (mode modal pour bloquer l'interface principale)
    fenetrePack->exec();  // Ou fenetrePack->show() pour une fenêtre non-modale

    // 3. Nettoyer la mémoire (si vous utilisez 'exec()', faites-le après la fermeture)
    delete fenetrePack;
    // Rafraîchir l'affichage pour voir les produits marqués comme packs
    afficherProduits();

}


