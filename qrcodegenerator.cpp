#include "qrcodegenerator.h"
#include <QImage>
#include <QPainter>

QPixmap QrCodeGenerator::generate(const QString &data, int size, int border) {
    using namespace qrcodegen;

    // Générer le QR Code
    QrCode qr = QrCode::encodeText(data.toUtf8().constData(), QrCode::Ecc::MEDIUM);

    int qrSize = qr.getSize();
    QImage image(qrSize + 2 * border, qrSize + 2 * border, QImage::Format_RGB32);
    image.fill(Qt::white);

    // Dessiner le QR Code
    for (int y = 0; y < qrSize; y++) {
        for (int x = 0; x < qrSize; x++) {
            if (qr.getModule(x, y)) {
                image.setPixel(x + border, y + border, qRgb(0, 0, 0));
            }
        }
    }

    return QPixmap::fromImage(image.scaled(size, size, Qt::KeepAspectRatio));
}
