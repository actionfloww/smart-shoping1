#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include <QMessageBox>
#include "menu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Création et initialisation de la connexion
    connection c;
    bool test = c.createconnect();

    if (!test) {
        QMessageBox::critical(nullptr, QObject::tr("Erreur de connexion"),
                              QObject::tr("Échec de la connexion à la base de données."),
                              QMessageBox::Cancel);
        return -1; // Quitter si la connexion échoue
    }

    menu w;
    w.show();

    return a.exec();
}
