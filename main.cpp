#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include <QMessageBox>
#include "menu.h"
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create and initialize the database connection
    connection c;
    bool test = c.createconnect();

    if (!test) {
        QMessageBox::critical(nullptr, QObject::tr("Erreur de connexion"),
                              QObject::tr("Échec de la connexion à la base de données."),
                              QMessageBox::Cancel);
        return -1; // Exit if connection fails
    }

    // Show login dialog
    login l;
    if (l.exec() == QDialog::Accepted) {
        // If login is successful, show the menu
        menu m;
        m.show();
        return a.exec();  // Start event loop
    }

    return 0;  // Exit if login was canceled or failed
}
