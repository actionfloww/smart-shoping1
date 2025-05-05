#include "gestion_produit.h"
#include "ui_gestion_produit.h"


#include "gestion_produit.h"
#include "ui_gestion_produit.h"
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
#include <QOverload>
#include <QApplication>

gestion_produit::gestion_produit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gestion_produit)
    , produit(new Produit(this))
    , msgBox(nullptr)
{
    ui->setupUi(this);
    this->setWindowTitle("Accueil");
    // Initialiser l'instance de SerialManager arduino
    serialManager = new SerialManager(this);

    // Configuration des formats de date
    ui->dateEdit_date_limite->setDisplayFormat("yyyy-MM-dd");
    ui->dateEdit_saison_fin->setDisplayFormat("yyyy-MM-dd");

    // Initialisation du ComboBox des catégories
    QStringList categories;
    categories << "Mode & Accessoires" << "Électronique" << "Beauté & Cosmétiques"
               << "Maison & Décoration" << "Alimentation" << "Culture & Loisirs Créatifs";
    ui->comboBox_categorie->addItems(categories);

    // Dans le constructeur gestion_produit::gestion_produit(), remplacez :


    // Par :
    ui->comboBox_tri->addItem(""); // Item vide par défaut
    ui->comboBox_tri->addItems({"catégorie", "prix", "pack"});

    // Connexion des signaux
    connect(ui->comboBox_tri, &QComboBox::currentIndexChanged,
            this, &gestion_produit::on_comboBox_tri_currentIndexChanged);

    // Connecte le textChanged() du LineEdit à la recherche dynamique
    connect(ui->LineEdit_rechercher, &QLineEdit::textChanged,
            this, &gestion_produit::rechercherDynamiquement);

    // Connectez tous les champs modifiables
    connect(ui->lineEdit_nom, &QLineEdit::textChanged, this, &gestion_produit::checkModifications);
    connect(ui->comboBox_categorie, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &gestion_produit::checkModifications);
    connect(ui->lineEdit_prix_2, &QLineEdit::textChanged, this, &gestion_produit::checkModifications);
    connect(ui->lineEdit_description, &QLineEdit::textChanged, this, &gestion_produit::checkModifications);
    connect(ui->lineEdit_gamme_2, &QLineEdit::textChanged, this, &gestion_produit::checkModifications);
    connect(ui->dateEdit_date_limite, &QDateEdit::dateChanged, this, &gestion_produit::checkModifications);
    connect(ui->dateEdit_saison_fin, &QDateEdit::dateChanged, this, &gestion_produit::checkModifications);
    connect(ui->radioOui, &QRadioButton::toggled, this, &gestion_produit::checkModifications);
    connect(ui->radioNon, &QRadioButton::toggled, this, &gestion_produit::checkModifications);



    // Configuration par défaut des boutons radio
    ui->radioNon->setChecked(true);

    // Timer pour rafraîchissement automatique
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &gestion_produit::afficherProduits);
    timer->start(3600000); // Toutes les heures

    //connexion ll combo
    connect(ui->comboBox_categorie, &QComboBox::currentTextChanged,
            this, &gestion_produit::on_comboBox_categorie_currentTextChanged);
    // Appliquer le style CSS au tableau
    applyTableViewStyle();

    // Affichage initial des produits
    afficherProduits();
    // Appel initial pour configurer les champs selon la catégorie par défaut
    on_comboBox_categorie_currentTextChanged(ui->comboBox_categorie->currentText());
    // Connexion pour le remplissage du formulaire
    connect(ui->tableView_2->selectionModel(), &QItemSelectionModel::currentRowChanged,
            this, &gestion_produit::remplirFormulaireDepuisSelection);
    produit->afficherProduitsEnRemise(ui->tableViewRemise);
}

gestion_produit::~gestion_produit()
{
    delete ui;
    delete produit;
    if (msgBox) {
        msgBox->deleteLater();
    }
}
//arduino
void gestion_produit::handleIdChecked(const QString &id, bool exists, const QString &etage) {
    QString message;
    if (exists) {
        if (etage == "1" || etage == "2" || etage == "3") {
            message = QString("L'ID %1 existe dans la base de données ! Étage : %2").arg(id).arg(etage);
        } else {
            message = QString("L'ID %1 existe, mais l'étage (%2) est invalide. Doit être 1, 2 ou 3.").arg(id).arg(etage);
        }
    } else {
        message = QString("L'ID %1 n'existe pas dans la base de données.").arg(id);
    }
    QMessageBox::information(this, "Résultat de la vérification", message);
}
void gestion_produit::applyTableViewStyle()
{
    // Appliquer le style CSS avec séparateurs de colonnes
    QString style = R"(
        QTableView {
            background-color: #f8f9fa;
            border: 1px solid #dee2e6;
            border-radius: 10px;
            gridline-color: #1B2A49;
            padding: 2px;
            alternate-background-color: #E6F0FA;
            font-family: Georgia, "Times New Roman", serif;
        }
        QTableView QTableCornerButton::section {
            background-color: #A8B8A8;
            border: none;
            border-top-left-radius: 10px;
        }
        QHeaderView::section {
            background-color: #2B2F48;
            color: #F0F0F0;
            padding: 8px;
            border: none;
            border-right: 1px solid #F0F0F0;
            font-family: Georgia, "Times New Roman", serif;
            font-style: italic;
            font-size: 12px;
            font-weight: bold;
        }
        QHeaderView::section:last {
            border-right: none;
        }
        QTableView::item {
            padding: 6px;
            border-bottom: 1px  #2B2F48;
            border-right: 1px  #2B2F48;
        }
        QTableView::item:last {
            border-right: none;
        }
        QTableView::item:selected {
            background-color: #grey;
            color: #2B2F48;
        }
        QTableView::item:hover {
            background-color: #e0e0ff;
        }
    )";

    ui->tableView_2->setStyleSheet(style);

    // Configurations supplémentaires
    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView_2->setAlternatingRowColors(true);
    ui->tableView_2->verticalHeader()->setVisible(false);
    ui->tableView_2->horizontalHeader()->setHighlightSections(false);
    ui->tableView_2->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableView_2->setFont(QFont("Arial", 10));
}


void gestion_produit::afficherProduits() {
    // Sauvegarder la sélection actuelle
    QModelIndex currentIndex = ui->tableView_2->currentIndex();

    produit->afficherProduits(ui->tableView_2);
    produit->afficherProduitsEnRemise(ui->tableViewRemise);
    applyTableViewStyle();

    // Réappliquer la sélection si possible
    if (currentIndex.isValid()) {
        ui->tableView_2->setCurrentIndex(currentIndex);
    }

    // Gestion plus robuste de la connexion
    QItemSelectionModel *selectionModel = ui->tableView_2->selectionModel();
    disconnect(selectionModel, &QItemSelectionModel::currentRowChanged,
               this, &gestion_produit::remplirFormulaireDepuisSelection);
    connect(selectionModel, &QItemSelectionModel::currentRowChanged,
            this, &gestion_produit::remplirFormulaireDepuisSelection);

    // Forcer une émission du signal si une ligne est sélectionnée
    if (selectionModel->hasSelection()) {
        QModelIndex index = selectionModel->currentIndex();
        remplirFormulaireDepuisSelection(index);
    }
}



void gestion_produit::remplirFormulaireDepuisSelection(const QModelIndex &index) {
    if (!index.isValid()) return;
    ui->pushButton_Modifier->setEnabled(false);

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

    // Remplir les champs de formulaire
    ui->lineEdit_nom->setText(nom);
    ui->lineEdit_prix_2->setText(QString::number(prix, 'f', 2));
    ui->lineEdit_description->setText(description);
    ui->lineEdit_gamme_2->setText(gamme);

    // Afficher les dates mais les rendre non modifiables
    ui->dateEdit_date_limite->setDate(date_limite);
    ui->dateEdit_date_limite->setEnabled(false); // Désactiver le champ
    ui->dateEdit_saison_fin->setDate(saison_fin);
    ui->dateEdit_saison_fin->setEnabled(false); // Désactiver le champ
    ui->comboBox_categorie->setCurrentText(categorie);
    ui->comboBox_categorie->setEnabled(false);
    // Vérifier la valeur et cocher le bon bouton radio
    if (est_pack.toLower() == "oui") {
        ui->radioOui->setChecked(true);
    } else {
        ui->radioNon->setChecked(true);
    }
}

void gestion_produit::on_pushButton_Ajouter_clicked() {
    // Récupérer les valeurs des champs
    QString nom = ui->lineEdit_nom->text();
    QString categorie = ui->comboBox_categorie->currentText();
    double prix = ui->lineEdit_prix_2->text().toDouble();
    QString description = ui->lineEdit_description->text();
    QString gamme = ui->lineEdit_gamme_2->text();
    QString prixText = ui->lineEdit_prix_2->text().trimmed();

    // Initialiser les dates comme NULL par défaut
    QDate dateLimite;
    QDate saisonFin;

    // Définir les dates seulement si le champ est activé
    if (ui->dateEdit_date_limite->isEnabled()) {
        dateLimite = ui->dateEdit_date_limite->date();
    }

    if (ui->dateEdit_saison_fin->isEnabled()) {
        saisonFin = ui->dateEdit_saison_fin->date();
    }


    QString est_pack = ui->radioOui->isChecked() ? "oui" : "non";



    // Vérifications des champs
    if (nom.isEmpty() || categorie.isEmpty() || description.isEmpty() || gamme.isEmpty()|| prixText.isEmpty()){
        QMessageBox::warning(this, "Erreur", "Tous les champs sont obligatoires.");
        return;
    }

    if (prix < 0) {
        QMessageBox::warning(this, "Erreur", "Le champ 'prix' doit être strictement positif.");
        return;
    }

    QDate currentDate = QDate::currentDate();

    if (dateLimite.isValid() && dateLimite == currentDate) {
        QMessageBox::warning(this, "Erreur", "La date limite ne peut pas être égale à la date actuelle.");
        return;
    }

    if (saisonFin.isValid() && saisonFin == currentDate) {
        QMessageBox::warning(this, "Erreur", "La date de fin de saison ne peut pas être égale à la date actuelle.");
        return;
    }

    // Ajouter le produit
    if (produit->ajouterProduit(nom, categorie, prix, description, gamme, dateLimite, saisonFin, est_pack)) {
        QMessageBox::information(this, "Succès", "Produit ajouté avec succès !");
        afficherProduits();

        viderFormulaire();
    }
}

void gestion_produit::on_pushButton_Modifier_clicked()
{
    // 1. Vérification de la sélection
    QModelIndexList selected = ui->tableView_2->selectionModel()->selectedRows();
    if(selected.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un produit à modifier !");
        return;
    }

    // 2. Récupération des données
    int row = selected.first().row();
    QAbstractItemModel *model = ui->tableView_2->model();
    int id = model->data(model->index(row, 0)).toInt();

    // 3. Récupération des nouvelles valeurs
    QString newNom = ui->lineEdit_nom->text().trimmed();
    QString newCategorie = ui->comboBox_categorie->currentText().trimmed();
    double newPrix = ui->lineEdit_prix_2->text().toDouble();
    QString newDescription = ui->lineEdit_description->text().trimmed();
    QString newGamme = ui->lineEdit_gamme_2->text().trimmed();
    QString newEstPack = ui->radioOui->isChecked() ? "oui" : "non";

    // Récupérer les dates originales
    QDate newDateLimite = QDate::fromString(model->data(model->index(row, 6)).toString(), Qt::ISODate);
    QDate newSaisonFin = QDate::fromString(model->data(model->index(row, 7)).toString(), Qt::ISODate);

    // 4. Vérification des modifications
    bool unchanged = true;
    unchanged &= (newNom == model->data(model->index(row, 1)).toString().trimmed());
    unchanged &= (newCategorie == model->data(model->index(row, 2)).toString().trimmed());
    unchanged &= (qFuzzyCompare(newPrix, model->data(model->index(row, 3)).toDouble()));
    unchanged &= (newDescription == model->data(model->index(row, 4)).toString().trimmed());
    unchanged &= (newGamme == model->data(model->index(row, 5)).toString().trimmed());
    unchanged &= (newEstPack == model->data(model->index(row, 8)).toString().toLower().trimmed());

    if(unchanged) {
        QMessageBox::warning(this, "Aucune modification",
                             "Vous n'avez modifié aucun champ!");
        return;
    }

    // 5. Confirmation
    QMessageBox::StandardButton reply = QMessageBox::question(
        this, "Confirmer",
        QString("Voulez-vous vraiment modifier le produit %1?").arg(newNom),
        QMessageBox::Yes|QMessageBox::No);

    if(reply == QMessageBox::No) return;

    // 6. Appel à modifierProduit (qui gérera le prix dynamique)
    if(produit->modifierProduit(
            id, newNom, newCategorie, newPrix, newDescription,
            newGamme, newDateLimite, newSaisonFin, newEstPack))
    {
        QMessageBox::information(this, "Succès", "Produit modifié avec succès!");
        afficherProduits();
        viderFormulaire();
        ui->pushButton_Modifier->setEnabled(false);
    }
    else {
        QMessageBox::critical(this, "Erreur", "La modification a échoué!");
    }
}


void gestion_produit::checkModifications()
{
    if(!ui->tableView_2->currentIndex().isValid()) {
        ui->pushButton_Modifier->setEnabled(false);
        return;
    }

    QAbstractItemModel *model = ui->tableView_2->model();
    int row = ui->tableView_2->currentIndex().row();

    bool hasChanged = false;

    hasChanged |= (ui->lineEdit_nom->text() != model->data(model->index(row, 1)).toString());
    hasChanged |= (ui->comboBox_categorie->currentText() != model->data(model->index(row, 2)).toString());
    hasChanged |= (ui->lineEdit_prix_2->text().toDouble() != model->data(model->index(row, 3)).toDouble());
    // ... continuer pour tous les champs

    ui->pushButton_Modifier->setEnabled(hasChanged);
}



void gestion_produit::on_pushButton_Supprimer_clicked() {
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
        viderFormulaire();

    }
}

void gestion_produit::viderFormulaire() {
    ui->lineEdit_nom->clear();
    ui->comboBox_categorie->setCurrentIndex(0);
    ui->lineEdit_prix_2->clear();
    ui->lineEdit_description->clear();
    ui->lineEdit_gamme_2->clear();
    ui->dateEdit_date_limite->clear();
    ui->dateEdit_saison_fin->clear();
    ui->radioNon->setChecked(true);
    ui->pushButton_Modifier->setEnabled(false);

    // Réactiver les champs date pour la création d'un nouveau produit
    ui->dateEdit_date_limite->setEnabled(true);
    ui->dateEdit_saison_fin->setEnabled(true);
    ui->comboBox_categorie->setEnabled(true);
    // Appeler la méthode pour configurer les champs selon la catégorie
    on_comboBox_categorie_currentTextChanged(ui->comboBox_categorie->currentText());
}

void gestion_produit::on_comboBox_tri_currentIndexChanged(int index)
{
    qDebug() << "Tri sélectionné, index:" << index;

    if (!produit || !ui->tableView_2) {
        qDebug() << "Erreur: Objets non initialisés";
        return;
    }

    QString critere = ui->comboBox_tri->currentText();
    qDebug() << "Critère de tri:" << critere;

    // Si critère vide, réinitialiser l'affichage normal
    if (critere.isEmpty()) {
        afficherProduits();
        return;
    }

    try {
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

void gestion_produit::rechercherDynamiquement(const QString &text) {
    QString motCle = text.trimmed();
    qDebug() << "Recherche dynamique lancée pour:" << motCle;

    if (!produit) {
        qDebug() << "Erreur: Objet Produit non initialisé !";
        return;
    }

    // Désactiver temporairement les signaux pour éviter des boucles
    ui->tableView_2->blockSignals(true);

    // Appel de la recherche
    produit->rechercherProduits(motCle, ui->tableView_2);

    // Forcer un rafraîchissement visuel
    ui->tableView_2->viewport()->update();
    ui->tableView_2->blockSignals(false);

    // Réactiver la connexion du signal (méthode robuste)
    QTimer::singleShot(0, this, [this]() {
        disconnect(ui->tableView_2->selectionModel(), &QItemSelectionModel::currentRowChanged,
                   this, &gestion_produit::remplirFormulaireDepuisSelection);
        connect(ui->tableView_2->selectionModel(), &QItemSelectionModel::currentRowChanged,
                this, &gestion_produit::remplirFormulaireDepuisSelection);
    });
}





void gestion_produit::on_pushButton_exporter_clicked()
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








void gestion_produit::on_pushButton_fonctionalite_clicked()
{
    // Ouvre le dialogue des statistiques (dialog.*)
    Dialog *statsDialog = new Dialog(this);
    configureDialog(statsDialog, "Statistiques");

}


void gestion_produit::on_pushButton_pack_clicked()
{
    pack *packDialog = new pack(this);
    configureDialog(packDialog, "Gestion des Packs");

}
// Fonction helper pour configurer les dialogues
void gestion_produit::configureDialog(QWidget *dialog, const QString &title)
{
    dialog->setWindowTitle(title);
    dialog->setAttribute(Qt::WA_DeleteOnClose);

    // Animation de fondu
    QPropertyAnimation *animation = new QPropertyAnimation(dialog, "windowOpacity");
    animation->setDuration(250);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start(QPropertyAnimation::DeleteWhenStopped);

    dialog->show();
}

// fonction ll formulaire controle de saisie date
void gestion_produit::on_comboBox_categorie_currentTextChanged(const QString &categorie)
{
    // Désactiver tous les champs de date d'abord
    ui->dateEdit_date_limite->setEnabled(false);
    ui->dateEdit_saison_fin->setEnabled(false);

    // Effacer les valeurs
    ui->dateEdit_date_limite->setDate(QDate());
    ui->dateEdit_saison_fin->setDate(QDate());

    // Activer les champs appropriés selon la catégorie
    if (categorie == "Mode & Accessoires" || categorie == "Maison & Décoration") {
        ui->dateEdit_saison_fin->setEnabled(true);
    }
    else if (categorie == "Alimentation" || categorie == "Beauté & Cosmétiques") {
        ui->dateEdit_date_limite->setEnabled(true);
    }
    // Pour "Électronique" et "Culture & Loisirs Créatifs", les deux champs restent désactivés
}
