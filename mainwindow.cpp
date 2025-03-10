#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupDatabase();
    loadEmployes();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupDatabase()
{
    if (!conn.createConnection()) {
        QMessageBox::critical(this, "Erreur", "Connexion à la BD échouée !");
    } else {
        db = QSqlDatabase::database();
    }
}

void MainWindow::loadEmployes()
{
    model = new QSqlTableModel(this, db);
    model->setTable("AHMED1.EMPLOYES"); // Nom complet de la table
    model->select();

    ui->table->setModel(model);

}

void MainWindow::on_ajouter_clicked()
{
    QString cin = ui->cin->text();
    QString nom = ui->nom->text();
    QString prenom = ui->prenom->text();
    QString email = ui->email->text();
    QString tel = ui->tel->text();
    QString poste = ui->poste->text();
    QString statut = ui->status->text();
    QString MOT_DE_PASSE = ui->MOT_DE_PASSE->text();

    // Vérification des champs obligatoires
    if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty() || MOT_DE_PASSE.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "CIN, Nom, Prénom et Mot de passe sont obligatoires !");
        return;
    }

    // Get the next IDEMPLOYE value by finding the current maximum value and incrementing by 1
    QSqlQuery queryMaxId;
    queryMaxId.prepare("SELECT MAX(IDEMPLOYE) FROM AHMED1.EMPLOYES");
    if (queryMaxId.exec() && queryMaxId.next()) {
        int currentMaxId = queryMaxId.value(0).toInt();
        int newIdEmploye = currentMaxId + 1;

        // Préparer la requête d'insertion avec IDEMPLOYE
        QSqlQuery query;
        query.prepare("INSERT INTO AHMED1.EMPLOYES (IDEMPLOYE, NOM, PRENOM, EMAIL, TELEPHONE, POSTE, STATUT, MOT_DE_PASSE, CIN) "
                      "VALUES (:idEmploye, :nom, :prenom, :email, :tel, :poste, :statut, :MOT_DE_PASSE, :cin)");

        query.bindValue(":idEmploye", newIdEmploye);
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":email", email);
        query.bindValue(":tel", tel);
        query.bindValue(":poste", poste);
        query.bindValue(":statut", statut);
        query.bindValue(":MOT_DE_PASSE", MOT_DE_PASSE);
        query.bindValue(":cin", cin);

        if (query.exec()) {
            QMessageBox::information(this, "Succès", "Employé ajouté !");
            model->select(); // Actualiser la table
        } else {
            QMessageBox::critical(this, "Erreur", "Échec : " + query.lastError().text());
        }
    } else {
        QMessageBox::critical(this, "Erreur", "Impossible de récupérer l'ID employé maximal : " + queryMaxId.lastError().text());
    }
}

void MainWindow::on_supprimer_clicked()
{
    QModelIndex index = ui->table->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(this, "Erreur", "Sélectionnez un employé !");
        return;
    }

    if (QMessageBox::question(this, "Confirmer", "Supprimer cet employé ?") == QMessageBox::Yes) {
        model->removeRow(index.row());
        model->submitAll();
    }
}
void MainWindow::on_update_clicked()
{
    // Récupérer l'ID de l'employé depuis l'interface en tant que QString
    QString idEmploye = ui->IDEMPLOYE->text();
    qDebug() << "IDEMPLOYE value from UI:" << idEmploye;

    // Récupérer les autres valeurs de l'interface
    QString motDePasse = ui->MOT_DE_PASSE->text();
    QString cin = ui->cin->text();
    QString nom = ui->nom->text();
    QString prenom = ui->prenom->text();
    QString email = ui->email->text();
    QString telephone = ui->tel->text();
    QString poste = ui->poste->text();
    QString status = ui->status->text();

    // Afficher les valeurs pour le debug
    qDebug() << "Input values:";
    qDebug() << "MOT_DE_PASSE:" << motDePasse;
    qDebug() << "CIN:" << cin;
    qDebug() << "NOM:" << nom;
    qDebug() << "PRENOM:" << prenom;
    qDebug() << "EMAIL:" << email;
    qDebug() << "TELEPHONE:" << telephone;
    qDebug() << "POSTE:" << poste;
    qDebug() << "STATUT:" << status;

    // Vérifier si l'ID existe dans la base de données
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM AHMED1.EMPLOYES WHERE IDEMPLOYE = :idEmploye");
    checkQuery.bindValue(":idEmploye", idEmploye);

    if (!checkQuery.exec()) {
        qDebug() << "Check query execution failed:" << checkQuery.lastError().text();
        QMessageBox::critical(this, "Erreur", "Requête de vérification échouée : " + checkQuery.lastError().text());
        return;
    }

    if (checkQuery.next()) {
        int count = checkQuery.value(0).toInt();
        qDebug() << "Number of employees with this ID:" << count;
        if (count == 0) {
            qDebug() << "IDEMPLOYE not found in database";
            QMessageBox::warning(this, "Erreur", "ID Employé n'existe pas !");
            return;
        }
    } else {
        qDebug() << "Error getting count result:" << checkQuery.lastError().text();
        QMessageBox::critical(this, "Erreur", "Impossible de vérifier l'ID employé : " + checkQuery.lastError().text());
        return;
    }

    // Préparer la requête de mise à jour
    QSqlQuery query;
    query.prepare("UPDATE AHMED1.EMPLOYES SET "
                  "MOT_DE_PASSE = :motDePasse, "
                  "CIN = :cin, "
                  "NOM = :nom, "
                  "PRENOM = :prenom, "
                  "EMAIL = :email, "
                  "TELEPHONE = :telephone, "
                  "POSTE = :poste, "
                  "STATUT = :status "
                  "WHERE IDEMPLOYE = :idEmploye");

    query.bindValue(":motDePasse", motDePasse);
    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":telephone", telephone);
    query.bindValue(":poste", poste);
    query.bindValue(":status", status);
    query.bindValue(":idEmploye", idEmploye);

    // Exécuter et vérifier la requête
    if (query.exec()) {
        qDebug() << "Update successful";
        QMessageBox::information(this, "Succès", "Employé mis à jour !");
        model->select(); // Actualiser la vue pour refléter les changements
    } else {
        qDebug() << "Update failed:" << query.lastError().text();
        qDebug() << "Last query:" << query.lastQuery();
        QMessageBox::critical(this, "Erreur", "Échec de la mise à jour : " + query.lastError().text());
    }
}
