#include "employer.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QPrinter>
#include <QPainter>
#include <QTextDocument>
#include <QDateTime>



Employer::Employer() {}

Employer::Employer(const QString& nom, const QString& prenom, const QString& email,
                   const QString& telephone, const QString& poste, const QString& statut,
                   const QString& motDePasse, const QString& cin)
    : nom(nom), prenom(prenom), email(email), telephone(telephone), poste(poste),
    statut(statut), motDePasse(motDePasse), cin(cin) {}

bool Employer::insertIntoDatabase() {
    QSqlQuery queryMaxId;
    queryMaxId.prepare("SELECT MAX(IDEMPLOYE) FROM EMPLOYES");
    if (queryMaxId.exec() && queryMaxId.next()) {
        int currentMaxId = queryMaxId.value(0).toInt();
        int newIdEmploye = (currentMaxId == -1) ? 1 : currentMaxId + 1;

        lastQuery.prepare("INSERT INTO EMPLOYES (IDEMPLOYE, NOM, PRENOM, EMAIL, TELEPHONE, POSTE, STATUT, MOT_DE_PASSE, CIN) "
                          "VALUES (:idEmploye, :nom, :prenom, :email, :tel, :poste, :statut, :mdp, :cin)");
        lastQuery.bindValue(":idEmploye", newIdEmploye);
        lastQuery.bindValue(":nom", nom);
        lastQuery.bindValue(":prenom", prenom);
        lastQuery.bindValue(":email", email);
        lastQuery.bindValue(":tel", telephone);
        lastQuery.bindValue(":poste", poste);
        lastQuery.bindValue(":statut", statut);
        lastQuery.bindValue(":mdp", motDePasse);
        lastQuery.bindValue(":cin", cin);

        return lastQuery.exec();
    } else {
        qDebug() << "Erreur lors de la récupération de l'ID maximal :" << queryMaxId.lastError().text();
        return false;
    }
}

QSqlQueryModel* Employer::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT IDEMPLOYE, NOM, PRENOM, EMAIL, TELEPHONE, POSTE, STATUT, CIN FROM EMPLOYES");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Employé"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Téléphone"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Poste"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Statut"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("CIN"));

    return model;
}

bool Employer::supprimer(int idE) {
    lastQuery.prepare("DELETE FROM EMPLOYES WHERE IDEMPLOYE = :idEmploye");
    lastQuery.bindValue(":idEmploye", idE);

    return lastQuery.exec();
}

bool Employer::modifier(int idEmploye) {
    lastQuery.prepare("UPDATE EMPLOYES SET "
                      "NOM = :nom, "
                      "PRENOM = :prenom, "
                      "EMAIL = :email, "
                      "TELEPHONE = :tel, "
                      "POSTE = :poste, "
                      "STATUT = :statut, "
                      "MOT_DE_PASSE = :mdp, "
                      "CIN = :cin "
                      "WHERE IDEMPLOYE = :idEmploye");

    lastQuery.bindValue(":nom", nom);
    lastQuery.bindValue(":prenom", prenom);
    lastQuery.bindValue(":email", email);
    lastQuery.bindValue(":tel", telephone);
    lastQuery.bindValue(":poste", poste);
    lastQuery.bindValue(":statut", statut);
    lastQuery.bindValue(":mdp", motDePasse);
    lastQuery.bindValue(":cin", cin);
    lastQuery.bindValue(":idEmploye", idEmploye);

    if (!lastQuery.exec()) {
        qDebug() << "Erreur lors de la mise à jour :" << lastQuery.lastError().text();
        return false;
    }

    return true;
}
bool Employer::modifierparemail(QString mm,QString mdp) {
    lastQuery.prepare("UPDATE EMPLOYES SET "
                      "MOT_DE_PASSE = :mdp "
                      "WHERE EMAIL = :mm");


    lastQuery.bindValue(":mdp", mdp);
    lastQuery.bindValue(":mm", mm);

    if (!lastQuery.exec()) {
        qDebug() << "Erreur lors de la mise à jour :" << lastQuery.lastError().text();
        return false;
    }

    return true;
}





QSqlQueryModel* Employer::rechercher(const QString& searchTerm, const QString& field) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QString queryStr = "SELECT * FROM EMPLOYES WHERE ";

    if(field == "NOM") queryStr += "NOM";
    else if(field == "PRENOM") queryStr += "PRENOM";
    else if(field == "POSTE") queryStr += "POSTE";
    else if(field == "STATUT") queryStr += "STATUT";
    else queryStr += "(NOM LIKE ? OR PRENOM LIKE ? OR POSTE LIKE ? OR STATUT LIKE ?)";

    if(field != "ALL") queryStr += " LIKE ?";

    QSqlQuery query;
    query.prepare(queryStr);

    if(field == "ALL") {
        QString pattern = "%" + searchTerm + "%";
        query.addBindValue(pattern);
        query.addBindValue(pattern);
        query.addBindValue(pattern);
        query.addBindValue(pattern);
    } else {
        query.addBindValue("%" + searchTerm + "%");
    }

    if(query.exec()) {
        model->setQuery(query);
        // Définir les en-têtes comme dans votre méthode afficher()Nom
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
        // ... Ajouter les autres en-têtes
    }
    return model;
}




QSqlQueryModel* Employer::tri(const QString& field, const QString& order) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QString queryStr = "SELECT IDEMPLOYE, NOM, PRENOM, EMAIL, TELEPHONE, POSTE, STATUT, CIN FROM EMPLOYES ORDER BY ";

    // Determine which field to sort by
    if (field == "ID") {
        queryStr += "IDEMPLOYE ";
    } else if (field == "NOM") {
        queryStr += "NOM ";
    } else if (field == "POSTE") {
        queryStr += "POSTE ";
    } else if (field == "STATUT") {
        queryStr += "STATUT ";
    } else {
        // Default to ID if invalid field is provided
        queryStr += "IDEMPLOYE ";
    }

    // Determine sort order
    if (order == "DESC") {
        queryStr += "DESC";
    } else {
        queryStr += "ASC";
    }

    model->setQuery(queryStr);

    // Set header data
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Employé"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Téléphone"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Poste"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Statut"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("CIN"));

    return model;
}


bool Employer::exporterPDF(const QString& fileName, QAbstractItemModel* model) {
    if (!model) {
        return false;
    }

    // Créer un objet QPrinter pour générer le PDF
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    printer.setPageOrientation(QPageLayout::Landscape); // Format paysage pour un tableau large

    // Préparer un document HTML pour contenir le tableau
    QTextDocument doc;
    QString html = "<html><head><style>"
                   "table { border-collapse: collapse; width: 100%; }"
                   "th, td { border: 1px solid black; padding: 8px; text-align: left; }"
                   "th { background-color: #f2f2f2; }"
                   "h1 { text-align: center; }"
                   "</style></head><body>";

    html += "<h1>Liste des Employés</h1>";
    html += "<table><tr>";

    // Ajouter les en-têtes du tableau
    for (int column = 0; column < model->columnCount(); ++column) {
        html += "<th>" + model->headerData(column, Qt::Horizontal).toString() + "</th>";
    }
    html += "</tr>";

    // Ajouter les données du tableau
    for (int row = 0; row < model->rowCount(); ++row) {
        html += "<tr>";
        for (int column = 0; column < model->columnCount(); ++column) {
            QModelIndex index = model->index(row, column);
            html += "<td>" + model->data(index).toString() + "</td>";
        }
        html += "</tr>";
    }

    html += "</table></body></html>";
    doc.setHtml(html);

    // Générer le PDF
    doc.print(&printer);

    return true;
}


QMap<QString, int> Employer::getStatistiquesParPoste() {
    QMap<QString, int> statistiques;

    QSqlQuery query;
    query.prepare("SELECT POSTE, COUNT(*) as NOMBRE FROM EMPLOYES GROUP BY POSTE");

    if (query.exec()) {
        while (query.next()) {
            QString poste = query.value("POSTE").toString();
            int nombre = query.value("NOMBRE").toInt();
            statistiques.insert(poste, nombre);
        }
    } else {
        qDebug() << "Erreur lors de la récupération des statistiques par poste :" << query.lastError().text();
    }

    return statistiques;
}


