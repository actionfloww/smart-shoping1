#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include <QMessageBox>
#include <QDebug>
#include <stdexcept>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    // Création et initialisation de la connexion
    Connection c;
    bool test = c.createconnect();

    if (!test) {
        QMessageBox::critical(nullptr, QObject::tr("Erreur de connexion"),
                              QObject::tr("Échec de la connexion à la base de données."),
                              QMessageBox::Cancel);
        return -1; // Quitter si la connexion échoue
    }

    try {
        MainWindow w;
        w.show();
        return a.exec();
    }

catch (const std::exception& e) {
    QMessageBox::critical(nullptr, "Erreur Critique",
                          QString("Exception non gérée : %1").arg(e.what()));
    return -1;
}
catch (...) {
    QMessageBox::critical(nullptr, "Erreur Critique",
                          "Exception inconnue");
    return -1;
}
}
