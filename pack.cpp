#include "pack.h"
#include "ui_pack.h"
#include "mainwindow.h"
#include <QScrollBar>
#include <QFile>
#include <QFileInfo>
#include <QDebug>
#include <QSqlQuery>
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>
#include <QDate>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QTimer>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QGraphicsDropShadowEffect>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QSqlError>

pack::pack(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pack),
    m_jsonValidesFilePath("packs_valides.json")
{
    ui->setupUi(this);
    this->setWindowTitle("Gestion des Packs");

    // Vérification de la connexion à la base de données
    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Erreur", "Pas de connexion à la base de données!");
        this->close();
        return;
    }

    // Configuration de l'interface
    setupUI();

    // Initialisation des données
    initializeData();

    // Charger les packs validés existants
    chargerPacksValides();
}

pack::~pack()
{
    delete ui;
}

void pack::setupUI()
{
    // Configuration de la zone de défilement
    QWidget *grayZoneContainer = new QWidget(this);
    grayZoneContainer->setGeometry(170, 140, 1175, 600);
    grayZoneContainer->setStyleSheet("background: #f5f5f5; border-radius: 10px;");

    // Configuration du ScrollArea
    m_scrollArea = new QScrollArea(grayZoneContainer);
    m_scrollArea->setWidgetResizable(true);
    m_scrollArea->setGeometry(0, 0, grayZoneContainer->width(), grayZoneContainer->height());
    m_scrollArea->setStyleSheet("QScrollArea { border: none; }");

    // Contenu défilable
    m_scrollContent = new QWidget();
    m_scrollLayout = new QVBoxLayout(m_scrollContent);
    m_scrollLayout->setAlignment(Qt::AlignTop);
    m_scrollLayout->setSpacing(15);
    m_scrollLayout->setContentsMargins(15, 15, 15, 15);
    m_scrollArea->setWidget(m_scrollContent);
}

void pack::initializeData()
{
    // Initialisation des catégories
    QStringList categories;
    categories << "Mode & Accessoires" << "Électronique" << "Beauté & Cosmétiques"
               << "Maison & Décoration" << "Alimentation" << "Culture & Loisirs Créatifs";
    ui->comboBox_pack->addItems(categories);

    // Vérifier/Créer le fichier JSON
    QFile file(m_jsonValidesFilePath);
    if (!file.exists() && file.open(QIODevice::WriteOnly)) {
        file.write("[]");
        file.close();
    }
}

void pack::on_pushButton_acceuil_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

QJsonObject pack::packToJson(const QString &nomPack,
                             const QString &produitPlusVendu,
                             double prixPlusVendu,
                             const QString &produitMoinsVendu,
                             double prixMoinsVendu,
                             double prixPack,
                             int idPlusVendu,
                             int idMoinsVendu)
{
    QJsonObject packJson;
    packJson["nomPack"] = nomPack;
    packJson["produitPlusVendu"] = produitPlusVendu;
    packJson["prixPlusVendu"] = prixPlusVendu;
    packJson["produitMoinsVendu"] = produitMoinsVendu;
    packJson["prixMoinsVendu"] = prixMoinsVendu;
    packJson["prixPack"] = prixPack;
    packJson["idPlusVendu"] = idPlusVendu;
    packJson["idMoinsVendu"] = idMoinsVendu;
    packJson["dateCreation"] = QDate::currentDate().toString("dd/MM/yyyy");
    packJson["statut"] = "validé"; // Statut par défaut
    return packJson;
}

void pack::chargerPacksValides()
{
    QFile file(m_jsonValidesFilePath);
    if (!file.open(QIODevice::ReadOnly)) {
        return;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (doc.isNull() || !doc.isArray()) {
        QMessageBox::warning(this, "Erreur", "Fichier de packs invalide.");
        return;
    }

    QJsonArray packsArray = doc.array();
    for (const QJsonValue &packValue : packsArray) {
        if (packValue.isObject()) {
            QJsonObject packObj = packValue.toObject();
            // Vérifier que le pack est bien validé
            if (packObj["statut"].toString() == "validé") {
                afficherPackDepuisJson(packObj);
            }
        }
    }
}

void pack::sauvegarderPackValide(const QJsonObject &packData)
{
    QFile file(m_jsonValidesFilePath);
    QJsonArray packsArray;

    // 1. Lire les données existantes
    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        QByteArray data = file.readAll();
        file.close();
        QJsonDocument doc = QJsonDocument::fromJson(data);
        if (!doc.isNull() && doc.isArray()) {
            packsArray = doc.array();
        }
    }

    // 2. Vérifier si le pack existe déjà
    bool packExisteDeja = false;
    for (int i = 0; i < packsArray.size(); ++i) {
        QJsonObject pack = packsArray[i].toObject();
        if (pack["idPlusVendu"] == packData["idPlusVendu"] &&
            pack["idMoinsVendu"] == packData["idMoinsVendu"]) {
            packsArray[i] = packData; // Mise à jour
            packExisteDeja = true;
            break;
        }
    }

    // 3. Ajout si nouveau pack
    if (!packExisteDeja) {
        packsArray.append(packData);
    }

    // 4. Sauvegarde dans le fichier
    if (file.open(QIODevice::WriteOnly)) {
        QJsonDocument doc(packsArray);
        file.write(doc.toJson());
        file.close();
    } else {
        QMessageBox::warning(this, "Erreur", "Impossible de sauvegarder le pack: " + file.errorString());
    }
}

void pack::afficherPackDepuisJson(const QJsonObject &packJson)
{
    creerCartePack(packJson["nomPack"].toString(),
                   packJson["produitPlusVendu"].toString(),
                   packJson["prixPlusVendu"].toDouble(),
                   packJson["produitMoinsVendu"].toString(),
                   packJson["prixMoinsVendu"].toDouble(),
                   packJson["prixPack"].toDouble(),
                   packJson["idPlusVendu"].toInt(),
                   packJson["idMoinsVendu"].toInt(),
                   packJson["statut"].toString() == "validé");
}

void pack::on_pushButton_gererpack_clicked()
{
    QString gammeSelectionnee = ui->LineEdit_rechercher_2->text().trimmed();
    QString categorieSelectionnee = ui->comboBox_pack->currentText().trimmed();

    if (gammeSelectionnee.isEmpty() || categorieSelectionnee.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs !");
        return;
    }

    // Vérifier que les produits existent dans la gamme/catégorie
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM PRODUITS "
                  "WHERE UPPER(GAMME) = UPPER(:gamme) "
                  "AND UPPER(CATEGORIE) = UPPER(:categorie)");
    query.bindValue(":gamme", gammeSelectionnee);
    query.bindValue(":categorie", categorieSelectionnee);

    if (!query.exec() || !query.next() || query.value(0).toInt() == 0) {
        QMessageBox::warning(this, "Erreur", "Aucun produit trouvé pour cette gamme et catégorie !");
        return;
    }

    // Trouver le produit le plus vendu
    query.prepare("SELECT p.IDPRODUIT, p.NOM, p.PRIX, SUM(a.NOMBREACHAT) as total_achats "
                  "FROM PRODUITS p "
                  "JOIN ACHAT a ON p.IDPRODUIT = a.IDPRODUIT "
                  "WHERE UPPER(p.GAMME) = UPPER(:gamme) "
                  "AND UPPER(p.CATEGORIE) = UPPER(:categorie) "
                  "GROUP BY p.IDPRODUIT, p.NOM, p.PRIX "
                  "ORDER BY total_achats DESC");
    query.bindValue(":gamme", gammeSelectionnee);
    query.bindValue(":categorie", categorieSelectionnee);

    if (!query.exec() || !query.next()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la recherche du produit le plus vendu");
        return;
    }

    int idPlusVendu = query.value(0).toInt();
    QString nomPlusVendu = query.value(1).toString();
    double prixPlusVendu = query.value(2).toDouble();

    // Trouver le produit le moins vendu
    QSqlQuery queryMoinsVendu;
    queryMoinsVendu.prepare("SELECT p.IDPRODUIT, p.NOM, p.PRIX, SUM(a.NOMBREACHAT) as total_achats "
                            "FROM PRODUITS p "
                            "JOIN ACHAT a ON p.IDPRODUIT = a.IDPRODUIT "
                            "WHERE UPPER(p.GAMME) = UPPER(:gamme) "
                            "AND UPPER(p.CATEGORIE) = UPPER(:categorie) "
                            "GROUP BY p.IDPRODUIT, p.NOM, p.PRIX "
                            "ORDER BY total_achats ASC");
    queryMoinsVendu.bindValue(":gamme", gammeSelectionnee);
    queryMoinsVendu.bindValue(":categorie", categorieSelectionnee);

    if (!queryMoinsVendu.exec() || !queryMoinsVendu.next()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la recherche du produit le moins vendu");
        return;
    }

    int idMoinsVendu = queryMoinsVendu.value(0).toInt();
    QString nomMoinsVendu = queryMoinsVendu.value(1).toString();
    double prixMoinsVendu = queryMoinsVendu.value(2).toDouble();

    // Vérification que les produits sont différents
    if (idPlusVendu == idMoinsVendu && queryMoinsVendu.next()) {
        idMoinsVendu = queryMoinsVendu.value(0).toInt();
        nomMoinsVendu = queryMoinsVendu.value(1).toString();
        prixMoinsVendu = queryMoinsVendu.value(2).toDouble();
    }

    // Création du pack avec 10% de réduction
    double prixPack = (prixPlusVendu + prixMoinsVendu) * 0.9;
    creerCartePack(QString("Pack innovation  inspiré  de la gamme %1").arg(gammeSelectionnee),
                   nomPlusVendu, prixPlusVendu,
                   nomMoinsVendu, prixMoinsVendu,
                   prixPack,
                   idPlusVendu,
                   idMoinsVendu,
                   false); // false indique que c'est un nouveau pack non validé
}

void pack::creerCartePack(const QString &nomPack,
                          const QString &produitPlusVendu,
                          double prixPlusVendu,
                          const QString &produitMoinsVendu,
                          double prixMoinsVendu,
                          double prixPack,
                          int idPlusVendu,
                          int idMoinsVendu,
                          bool estValide)
{
    // Créer l'objet JSON (sans sauvegarde immédiate)
    QJsonObject packJson = packToJson(nomPack, produitPlusVendu, prixPlusVendu,
                                      produitMoinsVendu, prixMoinsVendu, prixPack,
                                      idPlusVendu, idMoinsVendu);

    QGroupBox *carte = new QGroupBox();
    QString style = estValide ?
                        "border: 2px solid #28a745;" :  // Vert pour validé
                        "border: 2px solid #000080;";   // Bleu pour non validé

    carte->setStyleSheet(
        "QGroupBox {"
        "   background-color: white;"
        "   border: 2px solid #000080;"  // Bordure bleu marine plus épaisse (2px)
        "   border-radius: 10px;"
        "   padding: 20px;"
        "   margin-bottom: 15px;"
        "   box-shadow: 0 4px 12px rgba(0, 0, 50, 0.3);"  // Ombre plus forte (bleutée)

        "}"
        );

    QVBoxLayout *layout = new QVBoxLayout(carte);
    layout->setSpacing(8);

    // Titre du pack
    QLabel *titre = new QLabel(nomPack);
    titre->setStyleSheet(
        "font-size: 22px;"
        "font-weight: 600;"
        "color:  #d00d27;"
        "font-family: 'Georgia', 'Times New Roman', serif;"
        "text-align: center;"
        "margin-bottom: 15px;"
        "text-decoration: underline;"
        "font-style: italic;"
        "background: transparent;"
        );
    layout->addWidget(titre);


    // Produit star
    QLabel *labelPlusVendu = new QLabel(
        QString("<span style='color:#000080; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>"
                "👍️ Produit le plus vendu de la gamme:</span> "
                "<span style='color:black; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>%1</span>"
                " - "
                "<span style='color:black;'>%2 TND</span>")
            .arg(produitPlusVendu)
            .arg(prixPlusVendu)
        );
    labelPlusVendu->setStyleSheet(
        "font-size: 17px;"
        "font-weight: 600;"
        "margin: 8px 0;"
        "background: transparent;"
        );
    labelPlusVendu->setTextFormat(Qt::RichText);
    layout->addWidget(labelPlusVendu);




    // Produit à découvrir
    QLabel *labelMoinsVendu = new QLabel(QString("<span style='color:#000080; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>"
                                                 "👎️ Produit le moin vendu de la gamme: </span> "
                                                 "<span style='color:black ;font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>%1</span>"
                                                 " - "
                                                 "<span style='color:black;'>%2 TND</span>")
                                             .arg(produitMoinsVendu).arg(prixMoinsVendu));
    labelMoinsVendu->setStyleSheet(
        "font-size: 17px;"
        "font-weight: 600;"
        "color: #000000;"
        "font-family: 'Segoe UI', 'Arial', sans-serif;"
        "margin: 8px 0;"
        "background: transparent;"
        );
    labelMoinsVendu->setTextFormat(Qt::RichText);
    layout->addWidget(labelMoinsVendu);





    // Prix du pack
    QLabel *labelPrixPack = new QLabel(QString("<span style='color:#000080; font-family:\"Georgio\",\"Times New Roman\",serif; font-style:italic;'>"
                                               "🔥 Prix total du pack : </span>"
                                               "<span style='color:black;'>%1 TND</span>"
                                               "(10%) </span>")
                                           .arg(prixPack));
    labelPrixPack->setStyleSheet(
        "font-size: 17px;"
        "font-weight: 600;"
        "color: #000000;"
        "font-family: 'Segoe UI', 'Arial', sans-serif;"
        "margin: 12px 0;"
        "background: transparent;"
        );
    labelPrixPack->setTextFormat(Qt::RichText);
    layout->addWidget(labelPrixPack);




    QLabel *labelDate = new QLabel(
        QString("<span style='color:#000080; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>"
                "⏰️ Date de création du pack:</span> "
                "<span style='color:black; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>%1</span>")
            .arg(QDate::currentDate().toString("dd/MM/yyyy"))
        );
    labelDate->setStyleSheet(
        "font-size: 17px;"
        "font-weight: 600;"
        "margin: 8px 0;"
        "background: transparent;"
        );
    labelDate->setTextFormat(Qt::RichText);
    layout->addWidget(labelDate);



    // Statut
    QString statutText = estValide ? "✅ Validé" : "🔄 En attente";
    QString statutColor = estValide ? "#28a745" : "#000080";

    QLabel *statut = new QLabel(
        QString("<span style='color:%1; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>"
                "📌 Statut:</span> "
                "<span style='color:%1; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>%2</span>")
            .arg(statutColor, statutText));
    statut->setStyleSheet(
        "font-size: 17px;"
        "font-weight: 600;"
        "margin: 8px 0;"
        "background: transparent;");
    layout->addWidget(statut);

    // Boutons Valider/Rejeter (seulement si pas déjà validé)
    if (!estValide) {
        QHBoxLayout *btnLayout = new QHBoxLayout();
        btnLayout->setSpacing(10);

        QPushButton *btnValider = new QPushButton("✅ Valider");
        btnValider->setStyleSheet(
            "QPushButton {"
            "   background-color: #28a745;"
            "   color: white;"
            "   padding: 5px 10px;"
            "   border-radius: 3px;"
            "}"
            "QPushButton:hover { background-color: #218838; }");
        connect(btnValider, &QPushButton::clicked, [this, idPlusVendu, idMoinsVendu, carte, statut, packJson]() {
            validerPack(idPlusVendu, idMoinsVendu, carte, packJson);
            statut->setText("✅ Statut: Validé");
            statut->setStyleSheet("color: #28a745;");
        });

        QPushButton *btnRejeter = new QPushButton("❌ Rejeter");
        btnRejeter->setStyleSheet(
            "QPushButton {"
            "   background-color: #dc3545;"
            "   color: white;"
            "   padding: 5px 10px;"
            "   border-radius: 3px;"
            "}"
            "QPushButton:hover { background-color: #c82333; }");
        connect(btnRejeter, &QPushButton::clicked, [this, carte]() {
            rejeterPack(carte);
        });

        btnLayout->addWidget(btnValider);
        btnLayout->addWidget(btnRejeter);
        layout->addLayout(btnLayout);
    }

    // Animation
    m_scrollLayout->addWidget(carte);
    carte->show();
    qApp->processEvents();

    if (!estValide) {
        QPropertyAnimation *anim = new QPropertyAnimation(carte, "geometry");
        anim->setDuration(350);
        anim->setEasingCurve(QEasingCurve::OutBack);
        QRect startPos = carte->geometry();
        startPos.moveTop(-carte->height());
        anim->setStartValue(startPos);
        anim->setEndValue(carte->geometry());
        anim->start(QAbstractAnimation::DeleteWhenStopped);

        QTimer::singleShot(400, [this]() {
            m_scrollArea->verticalScrollBar()->setValue(m_scrollArea->verticalScrollBar()->maximum());
        });
    }
}

void pack::validerPack(int idPlusVendu, int idMoinsVendu, QGroupBox* carte, const QJsonObject &packData)
{
    // 1. Mise à jour de la base de données
    QSqlQuery query;
    query.prepare("UPDATE PRODUITS SET EST_PACK = 'oui' WHERE IDPRODUIT = :id");

    // Produit le plus vendu
    query.bindValue(":id", idPlusVendu);
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur DB (plus vendu): " + query.lastError().text());
        return;
    }

    // Produit le moins vendu
    query.bindValue(":id", idMoinsVendu);
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur DB (moins vendu): " + query.lastError().text());
        return;
    }

    // 2. Préparation des données JSON
    QJsonObject packJson = packData;
    packJson["statut"] = "validé";
    packJson["dateCreation"] = QDate::currentDate().toString("dd/MM/yyyy");

    // 3. Sauvegarde dans le fichier JSON
    sauvegarderPackValide(packJson);

    // 4. Suppression de l'ancienne carte
    m_scrollLayout->removeWidget(carte);
    carte->deleteLater();

    // 5. Recréation de la carte avec le nouveau statut
    afficherPackDepuisJson(packJson);

    // 6. Message de confirmation
    QMessageBox::information(this, "Succès", "Pack validé et sauvegardé !");
}

void pack::rejeterPack(QGroupBox* carte)
{
    if (carte) {
        // Animation de disparition
        QPropertyAnimation *anim = new QPropertyAnimation(carte, "geometry");
        anim->setDuration(300);
        anim->setEasingCurve(QEasingCurve::InBack);
        anim->setEndValue(QRect(carte->x(), -carte->height(), carte->width(), carte->height()));
        anim->start(QAbstractAnimation::DeleteWhenStopped);

        // Suppression après l'animation
        connect(anim, &QPropertyAnimation::finished, [this, carte]() {
            m_scrollLayout->removeWidget(carte);
            carte->deleteLater();
            QMessageBox::information(this, "Info", "Pack rejeté et non sauvegardé.");
        });
    }
}
