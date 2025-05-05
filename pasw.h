#ifndef PASW_H
#define PASW_H

#include <QDialog>

namespace Ui {
class pasw;
}

class pasw : public QDialog
{
    Q_OBJECT

public:
    explicit pasw(QWidget *parent = nullptr);
    ~pasw();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::pasw *ui;
};

#endif // PASW_H
