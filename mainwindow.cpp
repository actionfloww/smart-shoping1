#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "produit.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialiser l'instance de Produit
    produit = new Produit(this);

    // Afficher les produits au démarrage
    afficherProduits();

    // Connecter le signal de sélection à la fonction de remplissage du formulaire
    connect(ui->tableView_2->selectionModel(), &QItemSelectionModel::currentRowChanged,
            this, &MainWindow::remplirFormulaireDepuisSelection);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete produit; // Nettoyer l'instance de Produit
}

void MainWindow::afficherProduits() {
    produit->afficherProduits(ui->tableView_2);

    // Reconnecter le signal après la mise à jour de la table
    disconnect(ui->tableView_2->selectionModel(), &QItemSelectionModel::currentRowChanged,
               this, &MainWindow::remplirFormulaireDepuisSelection);
    connect(ui->tableView_2->selectionModel(), &QItemSelectionModel::currentRowChanged,
            this, &MainWindow::remplirFormulaireDepuisSelection);
}

void MainWindow::remplirFormulaireDepuisSelection(const QModelIndex &index) {
    if (!index.isValid()) return;

    // Récupérer la ligne sélectionnée
    int row = index.row();

    // Récupérer le modèle associé au QTableView
    QAbstractItemModel *model = ui->tableView_2->model();

    // Extraire les valeurs des colonnes
    int id = model->data(model->index(row, 0)).toInt();
    QString nom = model->data(model->index(row, 1)).toString();
    QString categorie = model->data(model->index(row, 2)).toString();
    double prix = model->data(model->index(row, 3)).toDouble();
    QString description = model->data(model->index(row, 4)).toString();
    QString gamme = model->data(model->index(row, 5)).toString();
    QDate date_limite = model->data(model->index(row, 6)).toDate();
    QDate saison_fin = model->data(model->index(row, 7)).toDate();
    int seuil_stock = model->data(model->index(row, 8)).toInt();
    QString est_pack = model->data(model->index(row, 9)).toString();

    // Remplir les champs de formulaire
    ui->lineEdit_idproduit->setText(QString::number(id));
    ui->lineEdit_nom->setText(nom);
    ui->lineEdit_categorie->setText(categorie);
    ui->lineEdit_prix_2->setText(QString::number(prix));
    ui->lineEdit_description->setText(description);
    ui->lineEdit_gamme_2->setText(gamme);
    ui->dateEdit_date_limite->setDate(date_limite);
    ui->dateEdit_saison_fin->setDate(saison_fin);
    ui->lineEdit_soeuil_stock->setText(QString::number(seuil_stock));
    ui->lineEditest_pack->setText(est_pack);
}

void MainWindow::on_pushButton_Ajouter_clicked() {
    // Récupérer les valeurs des champs
    QString idText = ui->lineEdit_idproduit->text();
    bool idValid = false;
    int id = idText.toInt(&idValid);
    QString nom = ui->lineEdit_nom->text();
    QString categorie = ui->lineEdit_categorie->text();
    double prix = ui->lineEdit_prix_2->text().toDouble();
    QString description = ui->lineEdit_description->text();
    QString gamme = ui->lineEdit_gamme_2->text();
    QDate dateLimite = ui->dateEdit_date_limite->date();
    QDate saisonFin = ui->dateEdit_saison_fin->date();
    int seuil_stock = ui->lineEdit_soeuil_stock->text().toInt();
    QString est_pack = ui->lineEditest_pack->text().toLower();

    // Vérifications des champs
    if (nom.isEmpty() || categorie.isEmpty() || description.isEmpty() || gamme.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Tous les champs sont obligatoires.");
        return;
    }
    if (!idValid) {
        QMessageBox::warning(this, "Erreur", "L'ID doit contenir uniquement des chiffres.");
        return;
    }
    if (est_pack != "oui" && est_pack != "non") {
        QMessageBox::warning(this, "Erreur", "Le champ 'est_pack' doit être 'oui' ou 'non'.");
        return;
    }
    if (seuil_stock <= 0) {
        QMessageBox::warning(this, "Erreur", "Le seuil de stock doit être strictement supérieur à 0");
        return;
    }

    // Ajouter le produit
    if (produit->ajouterProduit(id, nom, categorie, prix, description, gamme, dateLimite, saisonFin, seuil_stock, est_pack)) {
        QMessageBox::information(this, "Succès", "Produit ajouté avec succès !");
        afficherProduits(); // Rafraîchir l'affichage
        viderFormulaire();  // Réinitialiser le formulaire
    }
}

void MainWindow::on_pushButton_Modifier_clicked() {
    // Récupérer les valeurs des champs
    int id = ui->lineEdit_idproduit->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString categorie = ui->lineEdit_categorie->text();
    double prix = ui->lineEdit_prix_2->text().toDouble();
    QString description = ui->lineEdit_description->text();
    QString gamme = ui->lineEdit_gamme_2->text();
    QDate date_limite = ui->dateEdit_date_limite->date();
    QDate saison_fin = ui->dateEdit_saison_fin->date();
    int seuil_stock = ui->lineEdit_soeuil_stock->text().toInt();
    QString est_pack = ui->lineEditest_pack->text();

    // Modifier le produit
    if (produit->modifierProduit(id, nom, categorie, prix, description, gamme, date_limite, saison_fin, seuil_stock, est_pack)) {
        QMessageBox::information(this, "Succès", "Produit modifié avec succès !");
        afficherProduits(); // Rafraîchir l'affichage
        viderFormulaire();  // Réinitialiser le formulaire
    }
}

void MainWindow::on_pushButton_Supprimer_clicked() {
    int id = ui->lineEdit_idproduit->text().toInt();

    // Supprimer le produit
    if (produit->supprimerProduit(id)) {
        QMessageBox::information(this, "Succès", "Produit supprimé avec succès !");
        afficherProduits(); // Rafraîchir l'affichage
        viderFormulaire();  // Réinitialiser le formulaire
    }
}

void MainWindow::viderFormulaire() {
    ui->lineEdit_idproduit->clear();
    ui->lineEdit_nom->clear();
    ui->lineEdit_categorie->clear();
    ui->lineEdit_prix_2->clear();
    ui->lineEdit_description->clear();
    ui->lineEdit_gamme_2->clear();
    ui->dateEdit_date_limite->clear();
    ui->dateEdit_saison_fin->clear();
    ui->lineEdit_soeuil_stock->clear();
    ui->lineEditest_pack->clear();
}
