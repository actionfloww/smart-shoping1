#ifndef BADGE_H
// Garde d'inclusion pour éviter les inclusions multiples du fichier d'en-tête
#define BADGE_H

#include <QDialog>      // Inclusion pour utiliser la classe QDialog
#include <QDebug>       // Inclusion pour utiliser les fonctions de débogage Qt
#include <QMap>         // Inclusion pour utiliser les conteneurs de type map
#include <QStringList>  // Inclusion pour utiliser les listes de chaînes
#include <QSqlDatabase> // Inclusion pour utiliser les bases de données SQL
#include "arduino.h"    // Inclusion de la classe Arduino personnalisée

QT_BEGIN_NAMESPACE      // Début de l'espace de noms Qt
namespace Ui { class badge; } // Déclaration anticipée de la classe UI
QT_END_NAMESPACE        // Fin de l'espace de noms Qt

class badge : public QDialog
// Définition de la classe badge qui hérite de QDialog
{
    Q_OBJECT            // Macro pour les fonctionnalités de signaux et slots

public:
    // Constructeur avec paramètre parent par défaut à nullptr
    explicit badge(QWidget *parent = nullptr);
    // Destructeur
    ~badge();

private slots:
    // Slot appelé lorsque des données sont disponibles depuis l'Arduino
    void update_label();
    // Slot appelé lorsque le bouton d'enregistrement est cliqué
    void on_enregistrer_clicked();
    // Fonction pour enregistrer les accès dans les logs
    void logAccess(bool authorized, const QString& uid, const QString& cin);

    void on_quitter_clicked();
    void configureTransition(QWidget *window, const QString &title);

signals:
    // Signal émis lorsqu'un UID est traité
    void uidProcessed(QString uid, bool authorized);

private:
    Ui::badge *ui;      // Pointeur vers l'interface utilisateur
    Arduino A;          // Instance de la classe Arduino
    QByteArray data;    // Stockage des données reçues
    QSqlDatabase db;    // Connexion à la base de données

    // Fonction pour envoyer un message à l'écran LCD via Arduino
    void sendToLCD(const QString &message);
    // Vérifie si un CIN existe dans la base de données
    bool checkCinExists(int cin);
    // Vérifie si un UID correspond à un CIN spécifique
    bool checkUidMatchesCin(const QString &uid, int cin);
    // Affiche le nom de l'employé sur l'écran LCD
    void displayEmployeeName(int cin);
    // Vérifie si un UID existe dans la base et récupère le CIN associé
    bool verifyUidInDatabase(const QString &uid, QString &cin);
};

#endif // BADGE_H
