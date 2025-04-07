#ifndef QRCODEGENERATOR_H
#define QRCODEGENERATOR_H

#include <QPixmap>
#include <QString>
#include "qrcodegen.hpp"

class QrCodeGenerator {
public:
    static QPixmap generate(const QString &data, int size = 150, int border = 2);
};

#endif // QRCODEGENERATOR_H
