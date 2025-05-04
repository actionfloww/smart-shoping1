#include "dialogfonctionnalites.h"
#include "ui_dialogfonctionnalites.h"

DialogFonctionnalites::DialogFonctionnalites(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFonctionnalites)
{
    ui->setupUi(this);
    setWindowTitle("Fonctionnalités Avancées");

    // Configuration de base de la fenêtre
    setFixedSize(400, 300);
}

DialogFonctionnalites::~DialogFonctionnalites()
{
    delete ui;
}
