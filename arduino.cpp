#include "arduino.h"
#include <QDebug>
#include <QSerialPortInfo>
Arduino::Arduino(QObject *parent) : QObject(parent) {
    serial = new QSerialPort;
    arduino_is_available = false;
    arduino_port_name = "";
}

Arduino::~Arduino() {
    serial->close();
}

int Arduino::connect_arduino() {
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        if (info.hasVendorIdentifier() && info.hasProductIdentifier()) {
            if (info.vendorIdentifier() == arduino_uno_vendor_id && info.productIdentifier() == arduino_uno_pro_product_id) {
                arduino_is_available = true;
                arduino_port_name = info.portName();
                serial->setPortName(info.portName());
                serial->open(QIODevice::ReadWrite);
                serial->setBaudRate(QSerialPort::Baud9600);
                serial->setDataBits(QSerialPort::Data8);
                serial->setParity(QSerialPort::NoParity);
                serial->setStopBits(QSerialPort::OneStop);
                serial->setFlowControl(QSerialPort::NoFlowControl);
                return 0;
            }
        }
    }
    return -1;
}

int Arduino::close_arduino() {
    serial->close();
    return 1;
}

QByteArray Arduino::read_from_arduino() {
    if (serial->isReadable()) {
        return serial->readAll();
    } else {
        qDebug() << "Erreur de lecture depuis Arduino";
        return "";
    }
}

int Arduino::write_to_arduino(const QByteArray &command) {
    if (serial->isWritable()) {
        serial->write(command);
        return 1;
    } else {
        qDebug() << "Erreur d'écriture vers Arduino";
        return 0;
    }
}

QString Arduino::getarduino_port_name() {
    return arduino_port_name;
}

QSerialPort* Arduino::getserial() {
    return serial;
}
