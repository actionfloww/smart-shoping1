#include "serialmanager.h"
#include <QDebug>
#include <QSerialPortInfo>
#include <QSqlQuery>

SerialManager::SerialManager(QObject *parent) : QObject(parent) {
    serial = new QSerialPort(this);

    // Lister les ports disponibles
    qDebug() << "Ports série disponibles :";
    for (const QSerialPortInfo &info : QSerialPortInfo::availablePorts()) {
        qDebug() << "Port :" << info.portName() << "Description :" << info.description();
    }

    serial->setPortName("COM3"); // À adapter selon ton port Arduino
    serial->setBaudRate(QSerialPort::Baud9600);

    qDebug() << "Tentative d'ouverture du port:" << serial->portName();
    qDebug() << "Port disponible ?" << serial->isOpen();

    if (serial->open(QIODevice::ReadWrite)) {
        qDebug() << "Port série ouvert avec succès !";
        connect(serial, &QSerialPort::readyRead, this, &SerialManager::readSerialData);
    } else {
        qDebug() << "Échec de l'ouverture du port:" << serial->errorString();
    }
}

void SerialManager::readSerialData() {
    static QByteArray buffer; //garder en memoire pour traiter ligne par ligne
    buffer += serial->readAll(); //lire tout et ajouter au buffer

    while (buffer.contains('\n')) {
        int newlinePos = buffer.indexOf('\n'); //chercher la position du saut de ligne
        QByteArray rawData = buffer.left(newlinePos);
        buffer.remove(0, newlinePos + 1);

        QString data = QString(rawData).trimmed(); //convertir les donnees en texte lisible et retirer les espaces
        qDebug() << "Données brutes reçues:" << rawData.toHex(); // afficher les donnees brutes
        qDebug() << "Données reçues (texte):" << data; //afficher les donnees en texte

        if (data == "QT_CONNECTION_CHECK") {
            qDebug() << "Reçu QT_CONNECTION_CHECK, envoi de QT_ACK...";
            serial->write("QT_ACK\n"); //envoyer un msg de reponse qtack suivi dun saut de ligne
            serial->flush(); //forcer lenvoi immediat des donnees
            qDebug() << "QT_ACK envoyé !"; //confirmation
        } else {
            // Vérifier si data est un nombre
            bool isNumber = false;
            data.toInt(&isNumber);
            if (isNumber) {
                checkIDInDatabase(data);
            } else {
                qDebug() << "Ignoré : données non numériques reçues :" << data;
            }
        }
    }
}

void SerialManager::checkIDInDatabase(const QString &id) {
    QSqlQuery query;
    query.prepare("SELECT ID_MAGASIN, ETAGE FROM MAGASINS WHERE ID_MAGASIN = :id");
    query.bindValue(":id", id);

    bool idExists = false;
    QString etage = "";
    if (query.exec() && query.next()) {
        idExists = true;
        etage = query.value("ETAGE").toString();
        qDebug() << "ID trouvé ! Étage :" << etage;

        // Vérifier si ETAGE est 1, 2 ou 3
        if (etage == "1" || etage == "2" || etage == "3") {
            qDebug() << "Étape valide :" << etage;
            serial->write(QString("EXISTE:%1\n").arg(etage).toUtf8()); // Envoie EXISTE:etage
        } else {
            qDebug() << "Étape invalide :" << etage;
            serial->write("ETAGE_INVALIDE\n");
        }
    } else {
        qDebug() << "ID non trouvé.";
        if (!query.exec()) {
            qDebug() << "Erreur SQL :" << query.lastError().text();
        }
        serial->write("N_EXISTE_PAS\n");
    }
    serial->flush();
    emit idChecked(id, idExists, etage);
}
