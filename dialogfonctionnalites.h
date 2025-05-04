#ifndef DIALOGFONCTIONNALITES_H
#define DIALOGFONCTIONNALITES_H

#include <QDialog>

namespace Ui {
class DialogFonctionnalites;
}

class DialogFonctionnalites : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFonctionnalites(QWidget *parent = nullptr);
    ~DialogFonctionnalites();

private:
    Ui::DialogFonctionnalites *ui;
};

#endif // DIALOGFONCTIONNALITES_H
