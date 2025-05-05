#include "forget.h"
#include "ui_forget.h"
#include <QMessageBox>
#include "Shareddata.h"
#include "confi.h"
#include <random> // Include for std::random_device and std::mt19937
#include <QSslSocket> // Include for QSslSocket and related classes

forget::forget(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::forget)
{
    ui->setupUi(this);
}

forget::~forget()
{
    delete ui;
}

std::string generateRandomString(int length) {
    const std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::string result;
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<> distribution(0, chars.size() - 1);

    for (int i = 0; i < length; ++i) {
        result += chars[distribution(generator)];
    }

    return result;
}

bool sendEmail(const QString &toAddress, const QString &subject, const QString &body) {
    const QString smtpServer = "smtp.gmail.com";
    const int smtpPort = 587;
    const QString smtpUser = "chedibenslima3@gmail.com";
    const QString smtpPassword = "odrm mhgh ngim omdw"; // Use an App Password

    QSslSocket socket;
    QString errorDetails;

    // 1. Configure SSL settings
    socket.setProtocol(QSsl::TlsV1_2OrLater);
    socket.setPeerVerifyMode(QSslSocket::VerifyPeer);

    // 2. Connect to SMTP server
    qDebug() << "Connecting to SMTP server...";
    socket.connectToHost(smtpServer, smtpPort);
    if (!socket.waitForConnected(5000)) {
        errorDetails = QString("Connection failed: %1").arg(socket.errorString());
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "Connection Error", errorDetails);
        return false;
    }

    // 3. Wait for server greeting
    if (!socket.waitForReadyRead(5000)) {
        errorDetails = "No greeting from server";
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
        return false;
    }
    qDebug() << "Server greeting:" << socket.readAll();

    // 4. Send EHLO command
    qDebug() << "Sending EHLO...";
    socket.write("EHLO localhost\r\n"); // Replace 'localhost' with your domain if needed
    if (!socket.waitForBytesWritten(5000)) {
        errorDetails = "Failed to send EHLO command";
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
        return false;
    }

    if (!socket.waitForReadyRead(5000)) {
        errorDetails = "No response to EHLO";
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
        return false;
    }

    QByteArray ehloResponse = socket.readAll();
    if (!ehloResponse.contains("250")) {
        errorDetails = "EHLO failed: " + QString(ehloResponse);
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
        return false;
    }
    qDebug() << "EHLO response:" << ehloResponse;

    // 5. Initiate TLS handshake
    qDebug() << "Starting TLS handshake...";
    socket.write("STARTTLS\r\n");
    if (!socket.waitForBytesWritten(5000)) {
        errorDetails = "Failed to send STARTTLS command";
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
        return false;
    }

    if (!socket.waitForReadyRead(5000)) {
        errorDetails = "No response to STARTTLS";
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
        return false;
    }

    QByteArray starttlsResponse = socket.readAll();
    if (!starttlsResponse.contains("220")) {
        errorDetails = "STARTTLS not supported by server: " + QString(starttlsResponse);
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
        return false;
    }

    // 6. Start encryption
    socket.startClientEncryption();
    if (!socket.waitForEncrypted(5000)) {
        QList<QSslError> sslErrors = socket.sslHandshakeErrors();
        QStringList errorMessages;
        for (const QSslError &error : sslErrors) {
            errorMessages << error.errorString();
        }
        errorDetails = QString("SSL Handshake failed:\n%1\nDetails:\n%2")
                           .arg(socket.errorString())
                           .arg(errorMessages.join("\n"));
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SSL Error", errorDetails);
        return false;
    }

    // 7. Send EHLO again after STARTTLS (required by some servers)
    qDebug() << "Sending EHLO after STARTTLS...";
    socket.write("EHLO localhost\r\n");
    if (!socket.waitForBytesWritten(5000) || !socket.waitForReadyRead(5000)) {
        errorDetails = "EHLO after STARTTLS failed";
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
        return false;
    }

    // 8. Authentication
    qDebug() << "Authenticating...";
    socket.write("AUTH LOGIN\r\n");
    if (!socket.waitForReadyRead(5000)) {
        errorDetails = "AUTH LOGIN failed";
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
        return false;
    }

    socket.write(QByteArray().append(smtpUser.toUtf8()).toBase64() + "\r\n");
    if (!socket.waitForBytesWritten(5000) || !socket.waitForReadyRead(5000)) {
        errorDetails = "Failed to send username";
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
        return false;
    }

    socket.write(QByteArray().append(smtpPassword.toUtf8()).toBase64() + "\r\n");
    if (!socket.waitForBytesWritten(5000) || !socket.waitForReadyRead(5000)) {
        errorDetails = "Authentication failed";
        qDebug() << errorDetails;
        QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
        return false;
    }

    // 9. Prepare and send email
    qDebug() << "Preparing email...";
    const QString from = smtpUser;

    const QStringList commands = {
        QString("MAIL FROM:<%1>\r\n").arg(from),
        QString("RCPT TO:<%1>\r\n").arg(toAddress),
        "DATA\r\n",
        QString("From: %1\r\nTo: %2\r\nSubject: %3\r\n\r\n%4\r\n.\r\n")
            .arg(from, toAddress, subject, body),
        "QUIT\r\n"
    };

    foreach(const QString &command, commands) {
        socket.write(command.toUtf8());
        if (!socket.waitForBytesWritten(5000) || !socket.waitForReadyRead(5000)) {
            errorDetails = QString("Command failed: %1").arg(command.trimmed());
            qDebug() << errorDetails;
            QMessageBox::critical(nullptr, "SMTP Error", errorDetails);
            return false;
        }
    }

    qDebug() << "Email sent successfully to" << toAddress;
    return true;
}

void forget::on_pushButton_2_clicked()
{
    QString Maill = ui->lineEdit->text();
    if (Maill.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please enter an email address.");
        return;
    }

    QString randomString = QString::fromStdString(generateRandomString(10));
    SharedData::instance().setRandomString(randomString);
    SharedData::instance().setmail(Maill);

    QString subject = "Your Verification Code";
    QString body = QString("Hi,\n\nYour verification code is: %1\n\nBest regards,\nYour Team").arg(randomString);

    if (sendEmail(Maill, subject, body)) {
        QMessageBox::information(this, "Success", "Email sent to " + Maill);

        this->hide();
        confi confiwindow;
        confiwindow.setModal(true);
        confiwindow.exec();
        this->show();
    } else {
        QMessageBox::warning(this, "Warning", "Failed to send email.");
    }
}
