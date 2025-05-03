

#include "gestion_magasin.h"
#include "magasins.h"
#include "ui_gestion_magasin.h"
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextDocument>
#include<QPrinter>
#include <QFileDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QQuickWidget>
#include <QQuickItem>
#include <QHBoxLayout>
#include <QDebug>
#include <QGeoPositionInfoSource>
#include <QGeoServiceProvider>
#include <QRegularExpression>
#include <QPieSeries>
#include <QPieSlice>
#include <QChart>
#include <QChartView>
#include "email.h"




gestion_magasin::gestion_magasin(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::gestion_magasin)
{
    ui->setupUi(this);




    ui->tableView->setModel(magasin.afficher());
    ui->tableView->resizeColumnsToContents();




    ui->dateEdit_4->setDate(QDate::currentDate());  // Date d'ouverture
    ui->page_magasin->show();
    ui->page_magasin_stat->hide();
    stat_type();
    stat_etat();


    serialManager = new SerialManager(this); //arduino
}
gestion_magasin::~gestion_magasin()
{
    delete ui;
}
//arduino
void gestion_magasin::handleIdChecked(const QString &id, bool exists, const QString &etage) {
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
/*void gestion_magasin::actualiserTableau() {
    // Utiliser la méthode afficher() pour obtenir les données sous forme de modèle
    QSqlQueryModel *model = event->afficher();

    // Associer le modèle au tableau (tableView)
    ui->tableView->setModel(model);

    // Ajuster automatiquement la taille des colonnes
    ui->tableView->resizeColumnsToContents();

    // Mettre à jour l'affichage visuel
    ui->tableView->update();
}*/


void gestion_magasin::on_pushButton_clicked()
{
    // Récupération des données depuis les champs de l'interface
    QString etat = ui->lineEdit_7->currentText().trimmed();
    QString nomMagasin = ui->lineEdit_4->text().trimmed();
    QString emplacement = ui->textEdit_2->toPlainText().trimmed();
    QString type = ui->lineEdit_8->currentText().trimmed();
    QDate dateOuverture = ui->dateEdit_4->date();
    QString proprietaire = ui->lineEdit_6->text().trimmed();
    QString email=ui->email_prop->text().trimmed();
    int etage=ui->ETAGE->currentText().toInt();
    // Expressions régulières pour la validation
    QRegularExpression regexLettres("^[A-Za-zÀ-ÿ]+$"); // Seulement lettres et espaces
    QRegularExpression regexAlphanum("^[A-Za-zÀ-ÿ0-9]+$"); // Lettres, chiffres et espaces
    QRegularExpression regexEmail("^[\\w.-]+@[\\w.-]+\\.[A-Za-z]{2,}$");//aa@aa.aa

    // Vérification des champs
    if (!regexLettres.match(nomMagasin).hasMatch()) {
        QMessageBox::warning(this, "Validation", "Le nom du magasin doit contenir uniquement des lettres.");
        return;
    }
    if (!regexLettres.match(type).hasMatch()) {
        QMessageBox::warning(this, "Validation", "Le type doit contenir uniquement des lettres.");
        return;
    }
    if (!regexLettres.match(proprietaire).hasMatch()) {
        QMessageBox::warning(this, "Validation", "Le propriétaire doit contenir uniquement des lettres.");
        return;
    }
    if (!regexLettres.match(etat).hasMatch()) {
        QMessageBox::warning(this, "Validation", "L'état doit contenir uniquement des lettres.");
        return;
    }

    if (!regexEmail.match(email).hasMatch()) {
        QMessageBox::warning(this, "Validation", "L'email doit etre sous format de mail ");
        return;
    }

    bool test= magasin.ajouter(nomMagasin,emplacement,type,proprietaire,dateOuverture,etat,email,etage);
    // Exécution et vérification de la requête
    if (test) {
        QMessageBox::information(this, "Succès", "Magasin ajouté avec succès !");
        //affichage table
        ui->tableView->setModel(magasin.afficher());
        stat_type();
        stat_etat();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout du magasin !");
    }
}
void gestion_magasin::on_tab_affichage_clicked(const QModelIndex &index)
{
    if (!index.isValid()) {
        return;
    }

    // Récupérer les données de la ligne sélectionnée depuis QTableView
    QString nomMagasin = ui->tableView->model()->data(index.sibling(index.row(), 0)).toString();
    QString emplacement = ui->tableView->model()->data(index.sibling(index.row(), 1)).toString();
    QString type = ui->tableView->model()->data(index.sibling(index.row(), 2)).toString();
    QString proprietaire = ui->tableView->model()->data(index.sibling(index.row(), 3)).toString();
    QString dateOuverture = ui->tableView->model()->data(index.sibling(index.row(), 4)).toString();
    QString etat = ui->tableView->model()->data(index.sibling(index.row(), 5)).toString();
    QString etage = ui->tableView->model()->data(index.sibling(index.row(), 6)).toString();

    // Remplir les champs du formulaire avec les données sélectionnées
    ui->lineEdit_4->setText(nomMagasin);       // Nom du magasin
    ui->textEdit_2->setText(emplacement);      // Emplacement
    ui->lineEdit_8->setCurrentText(type);      // Type du magasin
    ui->lineEdit_6->setText(proprietaire);     // Propriétaire

    // Gestion du champ DATE_OUVERTURE (conversion en QDate)
    QDate date = QDate::fromString(dateOuverture, "yyyy-MM-dd");
    if (date.isValid()) {
        ui->dateEdit_4->setDate(date);
    } else {
        ui->dateEdit_4->clear(); // Si la date est invalide, on efface le champ
    }

    ui->lineEdit_7->setCurrentText(etat);      // État du magasin
    ui->ETAGE->setCurrentText(etage);      // État du magasin

}

void gestion_magasin::on_sup_clicked()
{
    QItemSelectionModel *selection = ui->tableView->selectionModel();

    if (!selection->hasSelection()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner une ligne à supprimer.");
        return;
    }

    QModelIndex index = selection->currentIndex();

    // Récupérer la valeur d'une colonne visible (par exemple, NOM_MAGASIN)
    QString nomMagasin = ui->tableView->model()->data(index.sibling(index.row(),0)).toString();  // Colonne 1 = NOM_MAGASIN

    if (nomMagasin.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Nom du magasin invalide. Veuillez sélectionner une ligne valide.");
        return;
    }

    // Recherche de l'ID du magasin à partir du nom
    QSqlQuery query;
    query.prepare("SELECT ID_MAGASIN FROM MAGASINS WHERE NOM_MAGASIN = :nomMagasin");
    query.bindValue(":nomMagasin", nomMagasin);
    query.exec();

    if (query.next()) {
        int magasinID = query.value(0).toInt();

        if (magasinID <= 0) {
            QMessageBox::warning(this, "Erreur", "ID invalide. Impossible de trouver l'ID pour ce magasin.");
            return;
        }

        // Demande de confirmation
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment supprimer ce magasin ?",
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            // Créez un objet Magasin pour supprimer l'entrée avec l'ID trouvé
            bool test = magasin.supprimer(magasinID);  // Appel à la méthode de suppression avec la méthode correcte

            if (test) {
                QMessageBox::information(this, "Succès", "Suppression effectuée.");
                ui->tableView->setModel(magasin.afficher());  // Rafraîchir l'affichage
                stat_type();
                stat_etat();
                viderFormulaire();
            } else {
                QMessageBox::critical(this, "Erreur", "Suppression non effectuée. Vérifiez l'ID.");
            }
        }
    }
}




void gestion_magasin::on_update_clicked()
{


    // Récupération des données depuis les champs de l'interface
    QString etat = ui->lineEdit_7->currentText().trimmed();
    QString nomMagasin = ui->lineEdit_4->text().trimmed();
    QString emplacement = ui->textEdit_2->toPlainText().trimmed();
    QString type = ui->lineEdit_8->currentText().trimmed();
    QDate dateOuverture = ui->dateEdit_4->date();
    QString proprietaire = ui->lineEdit_6->text().trimmed();
    QString email=ui->email_prop->text().trimmed();
    int etage=ui->ETAGE->currentText().toInt();

    // Expressions régulières pour la validation
    if (nomMagasin.isEmpty() || type.isEmpty() || proprietaire.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs obligatoires.");
        return;
    }
    // Expressions régulières pour la validation
    QRegularExpression regexLettres("^[A-Za-zÀ-ÿ]+$"); // Seulement lettres et espaces
    QRegularExpression regexAlphanum("^[A-Za-zÀ-ÿ0-9]+$"); // Lettres, chiffres et espaces
    QRegularExpression regexEmail("^[\\w.-]+@[\\w.-]+\\.[A-Za-z]{2,}$");//aa@aa.aa

    // Vérification des champs
    if (!regexLettres.match(nomMagasin).hasMatch()) {
        QMessageBox::warning(this, "Validation", "Le nom du magasin doit contenir uniquement des lettres.");
        return;
    }
    if (!regexLettres.match(type).hasMatch()) {
        QMessageBox::warning(this, "Validation", "Le type doit contenir uniquement des lettres.");
        return;
    }
    if (!regexLettres.match(proprietaire).hasMatch()) {
        QMessageBox::warning(this, "Validation", "Le propriétaire doit contenir uniquement des lettres.");
        return;
    }
    if (!regexLettres.match(etat).hasMatch()) {
        QMessageBox::warning(this, "Validation", "L'état doit contenir uniquement des lettres.");
        return;
    }

    if (!regexEmail.match(email).hasMatch()) {
        QMessageBox::warning(this, "Validation", "L'email doit etre sous format de mail ");
        return;
    }

    Magasin magasin; // Déclare un objet Magasin (pas un pointeur)


    Magasin   m(ID_Magasin, nomMagasin,emplacement, type, proprietaire,dateOuverture, etat,email,etage);
    // Appeler la méthode de mise à jour
    bool result = m.modifier();

    if (result) {
        QMessageBox::information(this, "Succès", "Magasin modifié avec succès !");
        stat_type();
        stat_etat();
        viderFormulaire();
        ui->tableView->setModel(magasin.afficher()); // Rafraîchir l'affichage
    } else {
        QMessageBox::critical(this, "Erreur", "La modification a échoué.");
    }
}

void gestion_magasin::viderFormulaire()
{
    ui->lineEdit_4->clear();  // Nom du magasin
    ui->textEdit_2->clear();  // Emplacement du magasin
    ui->lineEdit_6->clear();  // Type du magasin
    ui->lineEdit_7->setCurrentIndex(0);  // Propriétaire du magasin
    ui->lineEdit_8->setCurrentIndex(0);  // État du magasin (ajouté)
    ui->dateEdit_4->setDate(QDate::currentDate());  // Date d'ouverture
    ui->email_prop->clear();
    ui->ETAGE->setCurrentIndex(0);
}


void gestion_magasin::on_tableView_clicked(const QModelIndex &index)
{
    if (!index.isValid()) {
        return;
    }

    // Récupérer les données de la ligne sélectionnée depuis QTableView
    QString nomMagasin = ui->tableView->model()->data(index.sibling(index.row(), 0)).toString();
    QString emplacement = ui->tableView->model()->data(index.sibling(index.row(), 1)).toString();
    QString type = ui->tableView->model()->data(index.sibling(index.row(), 2)).toString();
    QString proprietaire = ui->tableView->model()->data(index.sibling(index.row(), 3)).toString();
    QString dateOuverture = ui->tableView->model()->data(index.sibling(index.row(), 4)).toString();
    QString etat = ui->tableView->model()->data(index.sibling(index.row(), 5)).toString();
    QString email = ui->tableView->model()->data(index.sibling(index.row(), 6)).toString();
    QString etage = ui->tableView->model()->data(index.sibling(index.row(), 7)).toString();

    // Remplir les champs du formulaire avec les données sélectionnées
    ui->lineEdit_4->setText(nomMagasin);       // Nom du magasin
    ui->textEdit_2->setText(emplacement);      // Emplacement
    ui->lineEdit_8->setCurrentText(type);      // Type du magasin
    ui->lineEdit_6->setText(proprietaire);     // Propriétaire

    // Gestion du champ DATE_OUVERTURE (conversion en QDate)
    QDate date = QDate::fromString(dateOuverture, "yyyy-MM-dd");
    if (date.isValid()) {
        ui->dateEdit_4->setDate(date);
    } else {
        ui->dateEdit_4->clear(); // Si la date est invalide, on efface le champ
    }

    ui->lineEdit_7->setCurrentText(etat);      // État du magasin
    ui->ETAGE->setCurrentText(etage);      // État du magasin

    ui->email_prop->setText(email);
    ID_Magasin = magasin.ChercherIDByNom(nomMagasin, emplacement);
}

void gestion_magasin::on_lineEdit_3_textChanged(const QString &text)
{
    QString choix=ui->choix->currentText();
    ui->tableView->setModel(magasin.chercher(choix,text));
}


void gestion_magasin::on_filter_clicked()
{
    QString choix=ui->choix->currentText();
    QString ordre=ui->ordre->currentText();
    ui->tableView->setModel(magasin.tri(choix,ordre));

}




void gestion_magasin::on_PDF_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tableView->model()->rowCount();
    const int columnCount = ui->tableView->model()->columnCount();

    out << "<html>\n"
           "<head>\n"
           "<meta Content=\"Text/html; charset=Windows-1251\">\n"
           "<title>%1</title>\n"
           "<style>\n"
           "table {\n"
           " width: 100%;\n"
           " border-collapse: collapse;\n"
           "}\n"
           "th, td {\n"
           " padding: 8px;\n"
           " text-align: left;\n"
           " border-bottom: 1px solid #ddd;\n"
           "}\n"
           "tr:nth-child(even) {\n"
           " background-color: #f2f2f2;\n"
           "}\n"
           "</style>\n"
           "</head>\n"
           "<body bgcolor=#ffffff link=#5000A0>\n"
           "<center> <H1>Liste des Magasins</H1></center><br/><br/>\n"
           "<img src=\"/Users/ranim/Desktop/projet/logo.png\" alt=\"Description of image\" style=\"max-width: 100%; height: auto;\">\n"
           "<table>\n";

    // headers
    out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
    for (int column = 0; column < columnCount; column++)
    {
        if (!ui->tableView->isColumnHidden(column))
        {
            out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
        }
    }
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++)
    {
        out << "<tr> <td>" << row + 1 << "</td>";
        for (int column = 0; column < columnCount; column++)
        {
            if (!ui->tableView->isColumnHidden(column))
            {
                QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
                out << QString("<td>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }



    QString fileName = QFileDialog::getSaveFileName((QWidget *)0, "Sauvegarder en PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty())
    {
        fileName.append(".pdf");
    }

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPageSize(QPageSize::A4);
    printer.setOutputFileName(fileName);

    QTextDocument doc;
    doc.setHtml(strStream);
    doc.print(&printer);

}

void gestion_magasin::on_pushButton_Map_clicked()
{
    qDebug() << "Bouton Map cliqué";

    // Créer une boîte de dialogue pour la carte
    QDialog *mapDialog = new QDialog(this);
    mapDialog->setWindowTitle("Carte des Magasins");
    mapDialog->setMinimumSize(800, 600);

    // Créer un layout vertical pour la boîte de dialogue
    QVBoxLayout *layout = new QVBoxLayout(mapDialog);

    // Initialiser la carte dans la boîte de dialogue
    QQuickWidget *dialogMapWidget = new QQuickWidget(mapDialog);
    dialogMapWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);

    // Activer le débogage QML
    QQmlEngine *engine = dialogMapWidget->engine();
    engine->rootContext()->setContextProperty("debug", true);

    // Charger les événements depuis la base de données
    QSqlQuery query;
    query.prepare("SELECT ID_MAGASIN, NOM_MAGASIN, TYPE, EMPLACEMENT FROM MAGASINS");

    QVariantList events;
    if (query.exec()) {
        while (query.next()) {
            QString lieu = query.value("EMPLACEMENT").toString();
            qDebug() << "Lieu trouvé:" << lieu;
            // Extraire les coordonnées du format "Latitude: X, Longitude: Y"
            QRegularExpression regex("Latitude: (-?\\d+\\.?\\d*), Longitude: (-?\\d+\\.?\\d*)");
            QRegularExpressionMatch match = regex.match(lieu);
            if (match.hasMatch()) {
                double latitude = match.captured(1).toDouble();
                double longitude = match.captured(2).toDouble();

                QVariantMap event;
                event["id"] = query.value("ID_MAGASIN").toString();
                event["nom"] = query.value("NOM_MAGASIN").toString();
                event["type"] = query.value("TYPE").toString();
                event["latitude"] = latitude;
                event["longitude"] = longitude;
                events.append(event);
                qDebug() << "Événement ajouté:" << event;
            }
        }
    } else {
        qDebug() << "Erreur de requête:";
    }

    qDebug() << "Nombre d'événements trouvés:" << events.size();

    // Définir la source QML
    QUrl sourceUrl = QUrl("/Users/ranim/Desktop/Projet qT/map.qml");
    qDebug() << "URL de la source QML:" << sourceUrl;

    // Passer les événements au contexte QML avant de charger le fichier
    engine->rootContext()->setContextProperty("initialEvents", events);

    // Charger le fichier QML
    dialogMapWidget->setSource(sourceUrl);

    // Vérifier les erreurs de chargement
    if (dialogMapWidget->status() == QQuickWidget::Error) {
        QString errors;
        for (const QQmlError &error : dialogMapWidget->errors()) {
            errors += error.toString() + "\n";
            qDebug() << "Erreur QML:" << error.toString();
        }
        QMessageBox::critical(this, "Erreur", "Erreur lors du chargement de la carte:\n" + errors);
        delete mapDialog;
        return;
    }

    // Passer les événements au QML
    QQuickItem *rootObject = dialogMapWidget->rootObject();
    if (rootObject) {
        rootObject->setProperty("events", events);
        connect(rootObject, SIGNAL(locationSelected(double,double)),
                this, SLOT(onLocationSelected(double,double)));
        qDebug() << "Signaux de la carte connectés avec succès";
    } else {
        qDebug() << "Erreur: Impossible de récupérer l'objet racine QML";
        QMessageBox::warning(this, "Avertissement", "Impossible de connecter les signaux de la carte");
    }



    layout->addWidget(dialogMapWidget);

    // Ajouter des boutons
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    QPushButton *okButton = new QPushButton("OK", mapDialog);
    QPushButton *cancelButton = new QPushButton("Annuler", mapDialog);

    buttonLayout->addWidget(okButton);
    buttonLayout->addWidget(cancelButton);
    layout->addLayout(buttonLayout);

    // Connecter les boutons
    connect(okButton, &QPushButton::clicked, mapDialog, &QDialog::accept);
    connect(cancelButton, &QPushButton::clicked, mapDialog, &QDialog::reject);

    // Afficher la boîte de dialogue

    mapDialog->exec();

    // Nettoyer
    delete mapDialog; // Cela détruira aussi dialogMapWidget car il est enfant de mapDialog
}
void gestion_magasin::onLocationSelected(double latitude, double longitude)
{
    qDebug() << "Location sélectionnée:" << latitude << longitude;
    QString location = QString("Latitude: %1, Longitude: %2").arg(latitude).arg(longitude);
    ui->textEdit_2->setText(location);
}

void gestion_magasin::on_pushButton_2_clicked()
{
    ui->page_magasin->show();
    ui->page_magasin_stat->hide();
}


void gestion_magasin::on_pushButton_4_clicked()
{
    ui->page_magasin->hide();
    ui->page_magasin_stat->show();
}




void gestion_magasin::stat_etat()
{
    QList<QWidget*> childWidgets = ui->label_stat_etat->findChildren<QWidget*>();
    for (QWidget* childWidget : childWidgets) {
        childWidget->deleteLater();

    }
    //the clear didnt work, but my goal is when i second click this button it deleted old chart and renders a new one
    ui->label_stat_etat->clear();
    ui->label_stat_etat->hide();

    int s0, s1;

    s0 = magasin.countEtat("Ouvert");
    s1 = magasin.countEtat("Ferme");





    int total = s0 + s1   ;
    // Calculate percentages
    float x = (total != 0) ? (s0 * 100.0f) / total : 0.0f;
    float x1 = (total != 0) ? (s1 * 100.0f) / total : 0.0f;


    // Adjust the percentages to ensure they sum up to 100%
    float totalPercentage = x + x1  ;
    if (totalPercentage != 100.0f && total != 0) {
        float correction = 100.0f - totalPercentage;
        x += correction;  // Apply correction to one of the slices (usually the largest one)
    }



    //qDebug() <<  x <<endl;
    //Ouvert 50.00%
    QString ch1 = QString("Ouvert %1%").arg(QString::number(x, 'f', 2));
    QString ch2 = QString("Ferme %2%").arg(QString::number(x1, 'f', 2));






    QPieSeries *series=new QPieSeries();
    series->setHoleSize(0.35);

    QPieSlice *slice= series->append(ch1,x);
    slice->setLabelVisible();
    slice->setLabelColor(QColor(Qt::black));
    slice->setBrush(QColor(Qt::red));//changer

    QPieSlice *slice1= series->append(ch2,x1);
    slice1->setLabelVisible();
    slice1->setLabelColor(QColor(Qt::black));
    slice1->setBrush(QColor(Qt::blue));//changer


    QChart *chart=new QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QBrush backgroundBrush(QColor(187,93,87,0));
    chart->setBackgroundBrush(backgroundBrush);
    QChartView *chartview=new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);
    chartview->setFixedSize(ui->label_stat_etat->size());
    chartview->setParent(ui->label_stat_etat);
    ui->label_stat_etat->setStyleSheet("background:transparent; color:white; ");
    ui->label_stat_etat->show();

}

void gestion_magasin::stat_type()
{
    QList<QWidget*> childWidgets = ui->label_stat_type->findChildren<QWidget*>();
    for (QWidget* childWidget : childWidgets) {
        childWidget->deleteLater();

    }
    //the clear didnt work, but my goal is when i second click this button it deleted old chart and renders a new one
    ui->label_stat_type->clear();
    ui->label_stat_type->hide();

    int s0, s1,s2,s3,s4,s5;

    s0 = magasin.countType("Vetement");
    s1 = magasin.countType("Chaussures");
    s2 = magasin.countType("Electronique");
    s3 = magasin.countType("Alimentation");
    s4 = magasin.countType("Sante & Beaute");
    s5 = magasin.countType("Restauration");
    qDebug()<<s0;
    qDebug()<<s1;
    qDebug()<<s2;
    qDebug()<<s3;

    int total = s0 + s1 +s2+s3+s4+s5  ;
    // Calculate percentages
    float x = (total != 0) ? (s0 * 100.0f) / total : 0.0f;
    float x1 = (total != 0) ? (s1 * 100.0f) / total : 0.0f;
    float x2 = (total != 0) ? (s2 * 100.0f) / total : 0.0f;
    float x3 = (total != 0) ? (s3 * 100.0f) / total : 0.0f;
    float x4 = (total != 0) ? (s4 * 100.0f) / total : 0.0f;
    float x5 = (total != 0) ? (s5 * 100.0f) / total : 0.0f;


    // Adjust the percentages to ensure they sum up to 100%
    float totalPercentage = x + x1 +x2+x3+x4+x5 ;
    if (totalPercentage != 100.0f && total != 0) {
        float correction = 100.0f - totalPercentage;
        x += correction;  // Apply correction to one of the slices (usually the largest one)
    }



    //qDebug() <<  x <<endl;
    //Ouvert 50.00%
    QString ch1 = QString("Vetement %1%").arg(QString::number(x, 'f', 2));
    QString ch2 = QString("Chaussures %2%").arg(QString::number(x1, 'f', 2));
    QString ch3 = QString("Electronique %2%").arg(QString::number(x2, 'f', 2));
    QString ch4 = QString("Alimentation %2%").arg(QString::number(x3, 'f', 2));
    QString ch5 = QString("Sante & Beaute %2%").arg(QString::number(x4, 'f', 2));
    QString ch6 = QString("Restauration %2%").arg(QString::number(x5, 'f', 2));






    QPieSeries *series=new QPieSeries();
    series->setHoleSize(0.35);

    QPieSlice *slice= series->append(ch1,x);
    slice->setLabelVisible();
    slice->setLabelColor(QColor(Qt::black));
    slice->setBrush(QColor(Qt::red));//changer

    QPieSlice *slice1= series->append(ch2,x1);
    slice1->setLabelVisible();
    slice1->setLabelColor(QColor(Qt::black));
    slice1->setBrush(QColor(Qt::blue));//changer

    QPieSlice *slice2= series->append(ch3,x2);
    slice2->setLabelVisible();
    slice2->setLabelColor(QColor(Qt::black));
    slice2->setBrush(QColor(Qt::yellow));//changer

    QPieSlice *slice3= series->append(ch4,x3);
    slice3->setLabelVisible();
    slice3->setLabelColor(QColor(Qt::black));
    slice3->setBrush(QColor(Qt::green));//changer

    QPieSlice *slice4= series->append(ch5,x4);
    slice4->setLabelVisible();
    slice4->setLabelColor(QColor(Qt::black));
    slice4->setBrush(QColor(Qt::black));//changer

    QPieSlice *slice5= series->append(ch6,x5);
    slice5->setLabelVisible();
    slice5->setLabelColor(QColor(Qt::black));
    slice5->setBrush(QColor(Qt::black));//changer



    QChart *chart=new QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QBrush backgroundBrush(QColor(187,93,87,0));
    chart->setBackgroundBrush(backgroundBrush);
    QChartView *chartview=new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);
    chartview->setFixedSize(ui->label_stat_type->size());
    chartview->setParent(ui->label_stat_type);
    ui->label_stat_type->setStyleSheet("background:transparent; color:white; ");
    ui->label_stat_type->show();

}

void gestion_magasin::on_Meilleur_clicked()
{
    Magasin m;
    m= magasin.MeilleurMagasin();
    QString  nom= m.getNomMagasin();
    QString  emplacement=m.getEmplacement();
    QString type=m.getType();
    QString etat=m.getEtat();
    QString proprietaire=m.getProprietaire();
    QString email=m.getEmail();
    QDate dateOuverture=m.getDateOuverture();

    QString message = "Cher/Chère " + proprietaire + ",\n\n"
                                                     "Nous vous informons que votre magasin \"" + nom + "\" situé à \"" + emplacement + "\", de type \"" + type + "\", "
                                                                                        "a été distingué pour sa performance remarquable durant ce mois.\n\n"
                                                                                        "En raison de cette performance pertinente, vous bénéficierez d'une récompense sous forme de réduction sur le loyer.\n\n"
                                                                                        "Informations du magasin :\n"
                                                                                        "- Date d'ouverture : " + dateOuverture.toString("dd/MM/yyyy") + "\n"
                                                               "- État actuel : " + etat + "\n"
                               "- Email de contact : " + email + "\n\n"
                                "Nous vous félicitons chaleureusement.\n\n"
                                "Cordialement,\n"
                                "La Direction de Monova Mall";

    qDebug()<<email;
    mailer::sendEmail(email,"Meilleur magasin",message);
    QMessageBox::information(this, "Succès", "EMAIL envoyé avec succés !");

}


void gestion_magasin::on_bt_go_tostat_clicked()
{
    ui->page_magasin->hide();
    ui->page_magasin_stat->show();
}


void gestion_magasin::on_bt_acceuil_clicked()
{
    ui->page_magasin_stat->hide();
    ui->page_magasin->show();
}





void gestion_magasin::on_lineEdit_5_textChanged(const QString &text)
{
    QString choix=ui->choix->currentText();
    ui->tableView->setModel(magasin.chercher(choix,text));
}

