#include "gestion_employe.h"
#include "ui_gestion_employe.h"

#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include <QRegularExpression>
#include <QSqlRecord>
// Ajoutez ces includes au début de votre fichier gestion_employe.cpp
#include <QFileDialog>
#include <QMessageBox>
#include <QDateTime>


// Ajoutez ces includes au début de gestion_employe.cpp
#include <QBarSet>
#include <QBarSeries>
#include <QChart>
#include <QBarCategoryAxis>
#include <QValueAxis>
#include <QChartView>
#include <QtCharts>
#include <QPieSeries>
#include <QPieSlice>
#include <QPropertyAnimation>
#include <QPrinter>
#include <QPainter>
#include <QTableWidget>
#include <QHeaderView>
#include <QFileDialog>
#include <QMessageBox>
#include <QDateTime>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFrame>
#include <QLabel>



gestion_employe::gestion_employe(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::gestion_employe) {
    ui->setupUi(this);
    setupDatabase();
    loadEmployes();
    employer = new Employer();
    // Dans le constructeur, après employer = new Employer();
    currentSearchField = "ALL"; // Valeur par défaut

    // Initialiser le QComboBox
    ui->kkk->addItem("Tous");
    ui->kkk->addItem("Nom");
    ui->kkk->addItem("Prénom");
    ui->kkk->addItem("Poste");
    ui->kkk->addItem("Statut");

    // Connecter les signaux
    connect(ui->rec, &QLineEdit::textChanged, this, &gestion_employe::onRechercheTextChanged);
    connect(ui->kkk, &QComboBox::currentTextChanged,
            this, &gestion_employe::onComboSearchChanged);



    ui->tri->addItem("ID");
    ui->tri->addItem("Nom");
    ui->tri->addItem("Poste");
    ui->tri->addItem("Statut");

    ui->kkk_2->addItem("Croissant");
    ui->kkk_2->addItem("Décroissant");


    // Connecter les combobox de tri avec les slots
    connect(ui->kkk_2, SIGNAL(currentIndexChanged(int)), this, SLOT(on_ord_currentIndexChanged(int)));
    connect(ui->tri, SIGNAL(currentIndexChanged(int)), this, SLOT(on_tri_currentIndexChanged(int)));


}

gestion_employe::~gestion_employe() {
    delete ui;
    delete employer;  // Libération de la mémoire allouée pour Employer
}

void gestion_employe::setupDatabase() {
    if (!conn.createconnect()) {
        QMessageBox::critical(this, "Erreur", "Connexion à la BD échouée !");
    } else {
        db = QSqlDatabase::database();
    }
}

void gestion_employe::loadEmployes() {
    model = new QSqlTableModel(this, db);
    model->setTable("EMPLOYES"); // Nom complet de la table
    model->select();
    ui->table->setModel(model);
}

void gestion_employe::on_ajouter_clicked() {
    QString cin = ui->cin->text();
    QString nom = ui->nom->text();
    QString prenom = ui->prenom->text();
    QString email = ui->email->text();
    QString tel = ui->tel->text();
    QString poste = ui->poste->text();
    QString statut = ui->status->text();
    QString MOT_DE_PASSE = ui->MOT_DE_PASSE->text();

    if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty() ||
        email.isEmpty() || tel.isEmpty() || poste.isEmpty() ||
        statut.isEmpty() || MOT_DE_PASSE.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Tous les champs sont obligatoires !");
        return;
    }

    QRegularExpression regexPwd("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d).+$");
    if (!regexPwd.match(MOT_DE_PASSE).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le mot de passe doit contenir au moins une majuscule, une minuscule et un chiffre !");
        return;
    }

    bool ok;
    cin.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Erreur", "Le champ CIN doit être numérique !");
        return;
    }

    if (!email.contains("@") || !email.contains(".com")) {
        QMessageBox::warning(this, "Erreur", "Email invalide. Il doit contenir '@' et '.com' !");
        return;
    }

    QRegularExpression telRegex("^\\d+$");
    if (!telRegex.match(tel).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le téléphone doit contenir uniquement des chiffres et être positif !");
        return;
    }

    if (poste != "ADMIN" && poste != "EMPLOYER") {
        QMessageBox::warning(this, "Erreur", "Le poste doit être 'ADMIN' ou 'EMPLOYER' !");
        return;
    }

    QString statutLower = statut.toLower();
    if (statutLower != "on" && statutLower != "off") {
        QMessageBox::warning(this, "Erreur", "Le statut doit être 'on' ou 'off' !");
        return;
    }

    Employer newEmployer(nom, prenom, email, tel, poste, statut, MOT_DE_PASSE, cin);

    if (newEmployer.insertIntoDatabase()) {
        QMessageBox::information(this, "Succès", "Employé ajouté !");
        model->select(); // Actualiser la table
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout : " + newEmployer.lastError().text());
    }
}

void gestion_employe::on_supprimer_clicked() {
    QString idToDelete = ui->sup->text();

    if (idToDelete.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir l'ID de l'employé à supprimer !");
        return;
    }

    bool ok;
    int idNum = idToDelete.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Erreur", "L'ID doit être numérique !");
        return;
    }

    if (QMessageBox::question(this,
                              "Confirmation",
                              "Voulez-vous vraiment supprimer l'employé avec l'ID " + QString::number(idNum) + " ?",
                              QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes) {

        if (employer->supprimer(idNum)) {
            QMessageBox::information(this, "Succès", "Employé supprimé avec succès !");
            model->select();  // Actualiser le modèle pour mettre à jour la table
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression : " + employer->lastError().text());
        }
    }
}

void gestion_employe::on_update_clicked() {
    QString idEmploye = ui->IDEMPLOYE->text();
    QString motDePasse = ui->MOT_DE_PASSE->text();
    QString cin = ui->cin->text();
    QString nom = ui->nom->text();
    QString prenom = ui->prenom->text();
    QString email = ui->email->text();
    QString telephone = ui->tel->text();
    QString poste = ui->poste->text();
    QString status = ui->status->text();

    if (idEmploye.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir l'ID de l'employé à mettre à jour !");
        return;
    }

    bool ok;
    int idNum = idEmploye.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Erreur", "L'ID doit être numérique !");
        return;
    }

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM EMPLOYES WHERE IDEMPLOYE = :idEmploye");
    checkQuery.bindValue(":idEmploye", idNum);

    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Erreur", "Requête de vérification échouée : " + checkQuery.lastError().text());
        return;
    }
    if (checkQuery.next()) {
        int count = checkQuery.value(0).toInt();
        if (count == 0) {
            QMessageBox::warning(this, "Erreur", "L'employé avec cet ID n'existe pas !");
            return;
        }
    } else {
        QMessageBox::critical(this, "Erreur", "Impossible de vérifier l'ID employé : " + checkQuery.lastError().text());
        return;
    }

    Employer updatedEmployer(nom, prenom, email, telephone, poste, status, motDePasse, cin);
    updatedEmployer.setIdEmploye(idNum);

    if (updatedEmployer.modifier(idNum)) {
        QMessageBox::information(this, "Succès", "Employé mis à jour !");
        model->select(); // Actualiser la vue pour refléter les changements
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la mise à jour : " + updatedEmployer.lastError().text());
    }
}

void gestion_employe::onComboSearchChanged(const QString &text) {
    if(text == "Tous") currentSearchField = "ALL";
    else if(text == "Nom") currentSearchField = "NOM";
    else if(text == "Prénom") currentSearchField = "PRENOM";
    else if(text == "Poste") currentSearchField = "POSTE";
    else if(text == "Statut") currentSearchField = "STATUT";

    // Déclencher la recherche avec le texte actuel
    onRechercheTextChanged(ui->rec->text());
}

void gestion_employe::onRechercheTextChanged(const QString &text) {
    QAbstractItemModel *oldModel = ui->table->model();

    if(text.isEmpty()) {
        ui->table->setModel(model); // Réafficher le modèle complet
    } else {
        QSqlQueryModel *searchModel = employer->rechercher(text, currentSearchField);
        ui->table->setModel(searchModel);

        // Supprimer l'ancien modèle s'il existe et n'est pas le modèle principal
        if(oldModel && oldModel != model) {
            delete oldModel;
        }
    }
}

void gestion_employe::updateSorting() {
    QString sortField;
    QString sortOrder;

    // Déterminer le champ de tri
    int fieldIndex = ui->tri->currentIndex();
    if (fieldIndex == 0) {
        sortField = "ID";
    } else if (fieldIndex == 1) {
        sortField = "NOM";
    } else if (fieldIndex == 2) {
        sortField = "POSTE";
    } else if (fieldIndex == 3) {
        sortField = "STATUT";
    } else {
        sortField = "ID"; // Par défaut
    }

    // Déterminer l'ordre de tri
    int orderIndex = ui->kkk_2->currentIndex();
    if (orderIndex == 0) {
        sortOrder = "ASC";
    } else if (orderIndex == 1) {
        sortOrder = "DESC";
    } else {
        sortOrder = "ASC"; // Par défaut
    }

    // Appliquer le tri
    QAbstractItemModel *oldModel = ui->table->model();
    QSqlQueryModel *sortedModel = employer->tri(sortField, sortOrder);
    ui->table->setModel(sortedModel);

    // Supprimer l'ancien modèle s'il n'est pas le modèle principal
    if (oldModel && oldModel != model) {
        delete oldModel;
    }
}

void gestion_employe::on_tri_currentIndexChanged(int index) {
    updateSorting();
}

void gestion_employe::on_ord_currentIndexChanged(int index) {
    updateSorting();
}

void gestion_employe::on_export_2_clicked() {
    // Demander à l'utilisateur où enregistrer le fichier PDF
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Exporter au format PDF"),
                                                    QDir::homePath() + "/liste_employes_" + QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm") + ".pdf",
                                                    tr("Fichiers PDF (*.pdf)"));

    if (fileName.isEmpty()) {
        return; // L'utilisateur a annulé l'opération
    }

    QAbstractItemModel* currentModel = ui->table->model();

    if (employer->exporterPDF(fileName, currentModel)) {
        QMessageBox::information(this, tr("Export PDF"), tr("Le fichier PDF a été créé avec succès!"));
    } else {
        QMessageBox::critical(this, tr("Erreur"), tr("Échec de l'exportation du PDF!"));
    }
}


void gestion_employe::on_export_3_clicked() {
    afficherStatistiquesPoste();
}

void gestion_employe::afficherStatistiquesPoste()
{
    // 1. Récupération des données
    QMap<QString, int> stats = employer->getStatistiquesParPoste();
    if (stats.isEmpty()) {
        QMessageBox::information(this, tr("Statistiques"), tr("Aucune donnée disponible pour les statistiques."));
        return;
    }

    // 2. Calcul du total
    int totalEmployes = 0;
    for (auto count : stats) {
        totalEmployes += count;
    }

    // 3. --- Diagramme Donut ---
    // Création de la série
    QPieSeries *pieSeries = new QPieSeries();
    for (auto it = stats.constBegin(); it != stats.constEnd(); ++it) {
        const QString &poste = it.key();
        int count = it.value();
        double percent = (double)count / totalEmployes * 100.0;

        QPieSlice *slice = pieSeries->append(poste, count);
        slice->setLabel(QString("%1 (%2%)").arg(poste).arg(QString::number(percent, 'f', 1)));
        slice->setLabelVisible(true);
    }
    pieSeries->setHoleSize(0.35); // Taille du "trou" pour obtenir un donut

    // Configuration du graphique
    QChart *donutChart = new QChart();
    donutChart->addSeries(pieSeries);
    donutChart->setTitle(tr("Répartition des employés par poste"));
    donutChart->legend()->setAlignment(Qt::AlignRight);

    QChartView *donutChartView = new QChartView(donutChart);
    donutChartView->setRenderHint(QPainter::Antialiasing);

    // 4. --- Histogramme (Bar Chart) ---
    // Préparation des données
    QBarSet *barSet = new QBarSet(tr("Nombre"));
    QStringList categories;
    int maxCount = 0;
    for (auto it = stats.constBegin(); it != stats.constEnd(); ++it) {
        categories << it.key();
        barSet->append(it.value());
        maxCount = qMax(maxCount, it.value());
    }

    // Série et graphique
    QBarSeries *barSeries = new QBarSeries();
    barSeries->append(barSet);

    QChart *barChart = new QChart();
    barChart->addSeries(barSeries);
    barChart->setTitle(tr("Nombre d'employés par poste"));

    // Axe X (catégories)
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    barChart->setAxisX(axisX, barSeries);

    // Axe Y (valeurs)
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, maxCount + 1);
    axisY->setLabelFormat("%d");
    barChart->setAxisY(axisY, barSeries);

    QChartView *barChartView = new QChartView(barChart);
    barChartView->setRenderHint(QPainter::Antialiasing);

    // 5. --- Tableau détaillé ---
    QTableWidget *tableWidget = new QTableWidget(stats.size(), 3);
    tableWidget->setHorizontalHeaderLabels({ tr("Poste"), tr("Nombre"), tr("Pourcentage") });
    tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tableWidget->verticalHeader()->setVisible(false);

    int row = 0;
    for (auto it = stats.constBegin(); it != stats.constEnd(); ++it, ++row) {
        const QString &poste = it.key();
        int count = it.value();
        double percent = (double)count / totalEmployes * 100.0;

        tableWidget->setItem(row, 0, new QTableWidgetItem(poste));
        tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(count)));
        tableWidget->setItem(row, 2, new QTableWidgetItem(QString("%1 %").arg(QString::number(percent, 'f', 1))));
           }

        // 6. --- Assemblage dans une fenêtre modale ---
        QDialog *statsDialog = new QDialog(this);
        statsDialog->setWindowTitle(tr("Statistiques par poste"));
        statsDialog->resize(900, 600);

        // Layout principal
        QVBoxLayout *mainLayout = new QVBoxLayout(statsDialog);

        // Layout des graphiques côte à côte
        QHBoxLayout *chartsLayout = new QHBoxLayout();
        chartsLayout->addWidget(donutChartView, /*stretch=*/1);
        chartsLayout->addWidget(barChartView,   /*stretch=*/1);
        mainLayout->addLayout(chartsLayout, /*row=*/0);

        // Espace avant le tableau
        mainLayout->addSpacing(10);
        mainLayout->addWidget(tableWidget, /*stretch=*/0);

        statsDialog->setLayout(mainLayout);
        statsDialog->exec();

        // Note : Qt prendra en charge la destruction des widgets enfants du dialog
    }

    void gestion_employe::on_export_4_clicked()
    {
        this->hide();

        // Corriger le nom de la classe : badge au lieu de Badge 12222223 23 3B 18 02

        badge badgeDialog(this);  // <-- lowercase "b"

        badgeDialog.exec();

        this->show();
    }

