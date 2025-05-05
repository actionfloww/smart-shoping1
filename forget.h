#ifndef FORGET_H
#define FORGET_H

#include <QDialog>

namespace Ui {
class forget;
}

class forget : public QDialog
{
    Q_OBJECT  // <-- Critical for Qt signals/slots

public:
    explicit forget(QWidget *parent = nullptr);
    ~forget();  // Destructor declared

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::forget *ui;
};

#endif // FORGET_H
