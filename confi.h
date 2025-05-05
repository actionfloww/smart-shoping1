#ifndef CONFI_H
#define CONFI_H

#include <QDialog>

namespace Ui {
class confi;
}

class confi : public QDialog
{
    Q_OBJECT

public:
    explicit confi(QWidget *parent = nullptr);
    ~confi();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::confi *ui;
};

#endif // CONFI_H
