#ifndef SERIALMANAGER_H
#define SERIALMANAGER_H

#include <QObject>
#include <QSerialPort>
#include "connection.h"

class SerialManager : public QObject {
    Q_OBJECT
public:
    SerialManager(QObject *parent = nullptr);
    void checkIDInDatabase(const QString &id);

signals:
    void idChecked(const QString &id, bool exists, const QString &etage); // Ajoute etage
private slots:
    void readSerialData();

private:
    QSerialPort *serial;
    connection dbConn;
};

#endif // SERIALMANAGER_H
