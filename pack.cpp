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
#include "mainwindow.h"
#include "dialog.h"

pack::pack(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pack),
    m_jsonValidesFilePath("packs_validef.json")
{
    ui->setupUi(this);
    this->setWindowTitle("Gestion des Packs");

    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Erreur", "Pas de connexion à la base de données!");
        this->close();
        return;
    }

    setupUI();
    initializeData();
    chargerPacksValides();
}

pack::~pack()
{
    delete ui;
}

void pack::setupUI()
{
    QWidget *grayZoneContainer = new QWidget(this);
    grayZoneContainer->setGeometry(170, 140, 1175, 600);
    grayZoneContainer->setStyleSheet("background: #f5f5f5; border-radius: 10px;");

    m_scrollArea = new QScrollArea(grayZoneContainer);
    m_scrollArea->setWidgetResizable(true);
    m_scrollArea->setGeometry(0, 0, grayZoneContainer->width(), grayZoneContainer->height());
    m_scrollArea->setStyleSheet("QScrollArea { border: none; }");

    m_scrollContent = new QWidget();
    m_scrollLayout = new QVBoxLayout(m_scrollContent);
    m_scrollLayout->setAlignment(Qt::AlignTop);
    m_scrollLayout->setSpacing(15);
    m_scrollLayout->setContentsMargins(15, 15, 15, 15);
    m_scrollArea->setWidget(m_scrollContent);
}

void pack::initializeData()
{
    QStringList categories;
    categories << "Mode & Accessoires" << "Électronique" << "Beauté & Cosmétiques"
               << "Maison & Décoration" << "Alimentation" << "Culture & Loisirs Créatifs";
    ui->comboBox_pack->addItems(categories);

    QFile file(m_jsonValidesFilePath);
    if (!file.exists() && file.open(QIODevice::WriteOnly)) {
        file.write("[]");
        file.close();
    }
}

QJsonObject pack::packToJson(const QString &nomPack,
                             const QString &produitPlusVendu,
                             double prixPlusVendu,
                             const QString &produitMoinsVendu,
                             double prixMoinsVendu,
                             double prixPack,
                             int idPlusVendu,
                             int idMoinsVendu,
                             int pourcentageRemise)
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
    packJson["pourcentageRemise"] = pourcentageRemise;
    packJson["dateCreation"] = QDate::currentDate().toString("dd/MM/yyyy");
    packJson["statut"] = "validé";
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

    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        QByteArray data = file.readAll();
        file.close();
        QJsonDocument doc = QJsonDocument::fromJson(data);
        if (!doc.isNull() && doc.isArray()) {
            packsArray = doc.array();
        }
    }

    bool packExisteDeja = false;
    for (int i = 0; i < packsArray.size(); ++i) {
        QJsonObject pack = packsArray[i].toObject();
        if (pack["idPlusVendu"] == packData["idPlusVendu"] &&
            pack["idMoinsVendu"] == packData["idMoinsVendu"]) {
            packsArray[i] = packData;
            packExisteDeja = true;
            break;
        }
    }

    if (!packExisteDeja) {
        packsArray.append(packData);
    }

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
                   packJson["statut"].toString() == "validé",
                   packJson["pourcentageRemise"].toInt());
}

void pack::on_pushButton_gererpack_clicked()
{
    QString gammeSelectionnee = ui->LineEdit_rechercher_2->text().trimmed();
    QString categorieSelectionnee = ui->comboBox_pack->currentText().trimmed();

    if (gammeSelectionnee.isEmpty() || categorieSelectionnee.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs !");
        return;
    }

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

    if (idPlusVendu == idMoinsVendu && queryMoinsVendu.next()) {
        idMoinsVendu = queryMoinsVendu.value(0).toInt();
        nomMoinsVendu = queryMoinsVendu.value(1).toString();
        prixMoinsVendu = queryMoinsVendu.value(2).toDouble();
    }

    int pourcentageRemise = 10;
    double prixPack = (prixPlusVendu + prixMoinsVendu) * (1 - pourcentageRemise/100.0);
    creerCartePack(QString("Pack innovation inspiré de la gamme %1").arg(gammeSelectionnee),
                   nomPlusVendu, prixPlusVendu,
                   nomMoinsVendu, prixMoinsVendu,
                   prixPack,
                   idPlusVendu,
                   idMoinsVendu,
                   false,
                   pourcentageRemise);
}

void pack::creerCartePack(const QString &nomPack,
                          const QString &produitPlusVendu,
                          double prixPlusVendu,
                          const QString &produitMoinsVendu,
                          double prixMoinsVendu,
                          double prixPack,
                          int idPlusVendu,
                          int idMoinsVendu,
                          bool estValide,
                          int pourcentageRemise)
{
    struct PackData {
        QJsonObject jsonData;
        bool modificationsValidees = false;
    };
    auto *packData = new PackData();
    packData->jsonData = packToJson(nomPack, produitPlusVendu, prixPlusVendu,
                                    produitMoinsVendu, prixMoinsVendu, prixPack,
                                    idPlusVendu, idMoinsVendu, pourcentageRemise);

    QGroupBox *carte = new QGroupBox();
    carte->setStyleSheet(
        "QGroupBox {"
        "   background-color: white;"
       "   border: 2px solid #000080;"
        "   border-radius: 10px;"
        "   padding: 20px;"
        "   margin-bottom: 15px;"
        "   box-shadow: 0 4px 12px rgba(0, 0, 50, 0.3);"
        "}"
        );

    QVBoxLayout *layout = new QVBoxLayout(carte);
    layout->setSpacing(8);

    // Titre du pack
    QLabel *titre = new QLabel( nomPack);
    titre->setStyleSheet(
        "font-size: 22px;"
        "font-weight: 600;"
        "color: #d00d27;"
        "font-family: 'Georgia', 'Times New Roman', serif;"
        "margin-bottom: 15px;"
        "text-decoration: underline;"
        "font-style: italic;"
        "background: transparent;"
        );
    layout->addWidget(titre);

    // Produit le plus vendu
    QLabel *labelPlusVendu = new QLabel(
        QString("<span style='color:#000080; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>"
                "👍️ Produit le plus vendu de la gamme:</span> "
                "<span style='color:black; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>%1</span>"
                " - "
                "<span style='color:black;'>%2 TND</span>")
            .arg(produitPlusVendu)
            .arg(prixPlusVendu, 0, 'f', 2)
        );
    labelPlusVendu->setStyleSheet(
        "font-size: 17px;"
        "font-weight: 600;"
        "margin: 8px 0;"
        "background: transparent;"
        );
    labelPlusVendu->setTextFormat(Qt::RichText);
    layout->addWidget(labelPlusVendu);

    // Produit le moins vendu
    QLabel *labelMoinsVendu = new QLabel(
        QString("<span style='color:#000080; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>"
                "👎️ Produit le moin vendu de la gamme: </span> "
                "<span style='color:black ;font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>%1</span>"
                " - "
                "<span style='color:black;'>%2 TND</span>")
            .arg(produitMoinsVendu)
            .arg(prixMoinsVendu, 0, 'f', 2));
    labelMoinsVendu->setStyleSheet(
        "font-size: 16px;"
        "font-family: 'Segoe UI', 'Arial', sans-serif;"
        "margin: 8px 0;"
        "background: transparent;"
        );
    labelMoinsVendu->setTextFormat(Qt::RichText);
    layout->addWidget(labelMoinsVendu);

    // Pourcentage de remise
    QLabel *labelRemise = new QLabel(QString("<span style='color:#000080; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>"
                                             "🎯 Pourcentage de remise: </span>"));
    labelRemise->setStyleSheet(
        "font-size: 16px;"
        "margin: 8px 0;"
        "background: transparent;"
        );
    labelRemise->setTextFormat(Qt::RichText);
    layout->addWidget(labelRemise);

    QSpinBox *spinBoxRemise = new QSpinBox();
    spinBoxRemise->setRange(1, 50);
    spinBoxRemise->setValue(pourcentageRemise);
    spinBoxRemise->setSuffix("%");
    spinBoxRemise->setFixedWidth(110); // Largeur réduite
    spinBoxRemise->setFixedHeight(28); // Hauteur réduite
    if (estValide) {
        spinBoxRemise->setEnabled(false);
        spinBoxRemise->setStyleSheet(
            "QSpinBox {"
            "   font-size: 18px;"
            "   padding: 5px 12px;"
            "   border: 1px solid #cccccc;"
            "   border-radius: 6px;"
            "   background-color: #f5f5f5;"
            "   min-width: 57px;"
            "   color: #666666;"
            "}"
            "QSpinBox::up-button, QSpinBox::down-button {"
            "   width: 25px;"
            "   border-left: 1px solid #000080;"
            "   background: #f0f0f0;"
            "}"
            "QSpinBox::up-button {"
            "   subcontrol-position: top right;"
            "   border-bottom: 1px solid #cccccc;"
            "}"
            "QSpinBox::down-button {"
            "   subcontrol-position: bottom right;"
            "}"
            "QSpinBox::up-button:hover, QSpinBox::down-button:hover {"
            "   background: #e0e0e0;"
            "}"
            "QSpinBox::up-arrow {"
            "   top: 2px;"
            "}"
            "QSpinBox::down-arrow {"
            "   bottom: 2px;"
            "}"

            );
    } else {
        spinBoxRemise->setStyleSheet(
            "QSpinBox {"
            "   font-size: 14px;"
            "   padding: 2px 5px;"
            "   border: 1px solid #000080;"
            "   border-radius: 4px;"
            "   background-color: white;"
            "   color: black;"
            "}"
            "QSpinBox::up-button, QSpinBox::down-button {"
            "   width: 18px;"
            "   border-left: 1px solid #000080;"
            "   background: #f0f0f0;"
            "}"
            "QSpinBox::up-button {"
            "   subcontrol-position: top right;"
            "   border-bottom: 1px solid #000080;"
            "}"
            "QSpinBox::down-button {"
            "   subcontrol-position: bottom right;"
            "}"
            "QSpinBox::up-button:hover, QSpinBox::down-button:hover {"
            "   background: #e0e0e0;"
            "}"
            "QSpinBox::up-arrow {"
            "   top: 1px;"
            "}"
            "QSpinBox::down-arrow {"
            "   bottom: 1px;"
            "}"


            );
    }
    layout->addWidget(spinBoxRemise);

    // Prix total du pack
    QLabel *labelPrixPack = new QLabel(QString("<span style='color:#000080; font-family:\"Georgio\",\"Times New Roman\",serif; font-style:italic;'>"
                                               "🔥 Prix total du pack : </span>"
                                               "<span style='color:black;'>%1 TND</span>"
                                               " - "
                                               "(<span style='color:black;'>%2%</span> de remise)</span>")
            .arg(prixPack, 0, 'f', 2)
            .arg(pourcentageRemise));
    labelPrixPack->setStyleSheet(
        "font-size: 16px;"
        "color: #000000;"
        "font-family: 'Segoe UI', 'Arial', sans-serif;"
        "margin: 8px 0;"
        "background: transparent;"
        );
    labelPrixPack->setTextFormat(Qt::RichText);
    layout->addWidget(labelPrixPack);

    // Date de création
    QLabel *labelDate = new QLabel(
        QString("<span style='color:#000080; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>"
                "⏰️ Date de création du pack:</span> "
                "<span style='color:black; font-family:\"Georgia\",\"Times New Roman\",serif; font-style:italic;'>%1</span>")
            .arg(QDate::currentDate().toString("dd/MM/yyyy")));
    labelDate->setStyleSheet(
        "font-size: 16px;"
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
        "font-size: 16px;"
        "margin: 8px 0;"
        "background: transparent;"
        );
    statut->setTextFormat(Qt::RichText);
    layout->addWidget(statut);

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

        QPushButton *btnRejeter = new QPushButton("❌ Rejeter");
        btnRejeter->setStyleSheet(
            "QPushButton {"
            "   background-color: #dc3545;"
            "   color: white;"
            "   padding: 5px 10px;"
            "   border-radius: 3px;"
            "}"
            "QPushButton:hover { background-color: #c82333; }");

        QPushButton *btnModifier = new QPushButton("🔄 Modifier");

        btnModifier->setStyleSheet(
            "QPushButton {"
            "   background-color: #17a2b8;"
            "   color: white;"
            "   padding: 5px 10px;"
            "   border-radius: 3px;"
            "}"
            "QPushButton:hover { background-color: #138496; }");

        // Connexions
        connect(btnValider, &QPushButton::clicked, [this, idPlusVendu, idMoinsVendu, carte, statut, packData, spinBoxRemise]() {
            if (spinBoxRemise->value() != packData->jsonData["pourcentageRemise"].toInt() && !packData->modificationsValidees) {
                QMessageBox::warning(this, "Attention", "Cliquez sur 'Modifier' avant de valider !");
                return;
            }
            validerPack(idPlusVendu, idMoinsVendu, carte, packData->jsonData);
            statut->setText("✅ Statut: Validé");
            statut->setStyleSheet("color: #28a745;");
            delete packData;
        });

        connect(btnModifier, &QPushButton::clicked, [this, packData, spinBoxRemise, labelPrixPack, prixPlusVendu, prixMoinsVendu, statut]() {
            packData->jsonData["pourcentageRemise"] = spinBoxRemise->value();
            packData->jsonData["prixPack"] = (prixPlusVendu + prixMoinsVendu) * (1 - spinBoxRemise->value()/100.0);
            packData->modificationsValidees = true;

            labelPrixPack->setText(
                QString("<span style='color:#000080; font-family:\"Georgio\",\"Times New Roman\",serif; font-style:italic; '>"
                        "🔥 Prix total du pack : </span>"
                        "<span style='color:black;'>%1 TND</span>"
                        " - "
                        "(<span style='color:#d00d27;'>%2%</span> de remise)</span>")

                    .arg(QString::number(packData->jsonData["prixPack"].toDouble(), 'f', 2))
                    .arg(spinBoxRemise->value())
                );
statut->setText("🔄 Statut: Modifications enregistrées");
            QMessageBox::information(this, "Succès", "Modifications sauvegardées !");
        });

        connect(btnRejeter, &QPushButton::clicked, [this, carte, packData]() {
            rejeterPack(carte);
            delete packData;
        });

        connect(spinBoxRemise, QOverload<int>::of(&QSpinBox::valueChanged), [labelPrixPack, prixPlusVendu, prixMoinsVendu](int value) {
            double nouveauPrix = (prixPlusVendu + prixMoinsVendu) * (1 - value/100.0);
            labelPrixPack->setText(
                QString("<span style='color:#000080; font-family:\"Georgio\",\"Times New Roman\",serif; font-style:italic;'>"
                        "🔥 Prix total du pack : </span>"
                        "<span style='color:black;'>%1 TND</span>"
                        " - "
                        "(<span style='color:#d00d27;'>%2%</span> de remise)</span>")
                    .arg(QString::number(nouveauPrix, 'f', 2))
                    .arg(value)
                );
        });

        btnLayout->addWidget(btnValider);
        btnLayout->addWidget(btnRejeter);
        btnLayout->addWidget(btnModifier);
        layout->addLayout(btnLayout);
    }

    // Ajouter la carte en bas de la liste existante
    m_scrollLayout->addWidget(carte);

    // Animation pour les nouveaux packs non validés
    if (!estValide) {
        QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect(carte);
        carte->setGraphicsEffect(effect);

        QPropertyAnimation *anim = new QPropertyAnimation(effect, "opacity");
        anim->setDuration(300);
        anim->setStartValue(0);
        anim->setEndValue(1);
        anim->start(QAbstractAnimation::DeleteWhenStopped);

        // Défilement vers le bas
        QTimer::singleShot(300, [this]() {
            m_scrollArea->verticalScrollBar()->setValue(m_scrollArea->verticalScrollBar()->maximum());
        });
    }
}

void pack::validerPack(int idPlusVendu, int idMoinsVendu, QGroupBox* carte, const QJsonObject &packData)
{
    QSqlQuery query;
    query.prepare("UPDATE PRODUITS SET EST_PACK = 'oui' WHERE IDPRODUIT = :id");

    query.bindValue(":id", idPlusVendu);
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur DB (plus vendu): " + query.lastError().text());
        return;
    }

    query.bindValue(":id", idMoinsVendu);
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur DB (moins vendu): " + query.lastError().text());
        return;
    }

    QJsonObject packJson = packData;
    packJson["statut"] = "validé";
    packJson["dateCreation"] = QDate::currentDate().toString("dd/MM/yyyy");

    sauvegarderPackValide(packJson);

    m_scrollLayout->removeWidget(carte);
    carte->deleteLater();

    afficherPackDepuisJson(packJson);

    QMessageBox::information(this, "Succès", "Pack validé et sauvegardé !");
}

void pack::rejeterPack(QGroupBox* carte)
{
    if (carte) {
        QPropertyAnimation *anim = new QPropertyAnimation(carte, "geometry");
        anim->setDuration(300);
        anim->setEasingCurve(QEasingCurve::InBack);
        anim->setEndValue(QRect(carte->x(), -carte->height(), carte->width(), carte->height()));
        anim->start(QAbstractAnimation::DeleteWhenStopped);

        connect(anim, &QPropertyAnimation::finished, [this, carte]() {
            m_scrollLayout->removeWidget(carte);
            carte->deleteLater();
            QMessageBox::information(this, "Info", "Pack rejeté et non sauvegardé.");
        });
    }
}

void pack::on_pushButton_acceuil_2_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    configureTransition(mainWindow, "Accueil Principal");
    this->close();
}

void pack::on_pushButton_statistique_clicked()
{
    Dialog *statsDialog = new Dialog();
    configureTransition(statsDialog, "Statistiques");
    this->close();
}

void pack::configureTransition(QWidget *window, const QString &title)
{
    window->setWindowTitle(title);
    window->setAttribute(Qt::WA_DeleteOnClose);

    QPropertyAnimation *animation = new QPropertyAnimation(window, "windowOpacity");
    animation->setDuration(250);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start(QPropertyAnimation::DeleteWhenStopped);

    window->show();
}
