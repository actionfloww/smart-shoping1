#include "dialog.h"
#include "ui_dialog.h"
#include <QSqlQuery>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QLineSeries>
#include <QDebug>
#include <QSqlError>
#include <QVBoxLayout>
#include <QMessageBox>
#include "pack.h"
#include "menu.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog),

    chart(new QChart()),
    chartView(new QChartView(chart)),
    pieChart(new QChart()),
    pieChartView(new QChartView(pieChart)),
    lineChart(new QChart()),
    lineChartView(new QChartView(lineChart)),
    top3Chart(new QChart()),
    top3ChartView(new QChartView(top3Chart))
{
    ui->setupUi(this);
    this->setWindowTitle("Statistiques");

    // Premier conteneur pour le diagramme en barres
    QVBoxLayout *layout1 = new QVBoxLayout(ui->widgetConteneur);
    layout1->setContentsMargins(0, 0, 0, 0);
    creerDiagrammeBarres();
    layout1->addWidget(chartView);

    // Second conteneur pour le diagramme circulaire
    QVBoxLayout *layout2 = new QVBoxLayout(ui->widgetConteneur2);
    layout2->setContentsMargins(0, 0, 0, 0);
    creerDiagrammeCirculaire();
    layout2->addWidget(pieChartView);

    // Troisième conteneur pour la courbe du chiffre d'affaire
    QVBoxLayout *layout3 = new QVBoxLayout(ui->courbe);
    layout3->setContentsMargins(0, 0, 0, 0);
    creerCourbeCA();
    layout3->addWidget(lineChartView);

    // Quatrième conteneur pour le Top 3 des produits
    QVBoxLayout *layout4 = new QVBoxLayout(ui->widgetTop3);
    layout4->setContentsMargins(0, 0, 0, 0);
    creerTop3Produits();
    layout4->addWidget(top3ChartView);
}


void Dialog::creerTop3Produits()
{
    // 1. Vérification connexion BD
    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Erreur", "Pas de connexion à la base !");
        return;
    }

    // 2. Requête SQL avec SUM et GROUP BY (version corrigée)
    QSqlQuery query;
    QString requete =
        "SELECT * FROM ("
        "  SELECT P.NOM, SUM(A.NOMBREACHAT) as TOTAL_ACHATS "
        "  FROM PRODUITS P, ACHAT A "
        "  WHERE P.IDPRODUIT = A.IDPRODUIT "
        "  GROUP BY P.NOM "
        "  ORDER BY TOTAL_ACHATS DESC "
        ") WHERE ROWNUM <= 3";

    if (!query.exec(requete)) {
        QMessageBox::critical(this, "Erreur", "Échec requête:\n" + query.lastError().text());
        return;
    }

    // 3. Récupération données
    QStringList nomsProduits;
    QList<double> valeurs;
    while (query.next()) {
        nomsProduits << query.value(0).toString();
        valeurs << query.value(1).toDouble();
    }

    if (nomsProduits.isEmpty()) {
        QMessageBox::information(this, "Info", "Aucun produit trouvé");
        return;
    }

    // 4. Nettoyage préalable
    if (ui->widgetTop3->layout()) {
        QLayoutItem* child;
        while ((child = ui->widgetTop3->layout()->takeAt(0)) != nullptr) {
            delete child->widget();
            delete child;
        }
    }

    // 5. Création du graphique (style original)
    top3Chart = new QChart();
    top3ChartView = new QChartView(top3Chart);
    top3ChartView->setRenderHint(QPainter::Antialiasing);

    // 6. Création des séries (une par barre comme dans votre version)
    for (int i = 0; i < nomsProduits.size(); ++i) {
        QHorizontalBarSeries *series = new QHorizontalBarSeries();
        QBarSet *set = new QBarSet(nomsProduits[i]);
        *set << valeurs[i];

        // Couleurs originales
        if (i == 0) set->setColor(Qt::green);
        else if (i == 1) set->setColor(Qt::yellow);
        else if (i == 2) set->setColor(Qt::red);

        series->append(set);
        top3Chart->addSeries(series);
    }

    // 7. Configuration des axes (style original)
    QBarCategoryAxis *axisY = new QBarCategoryAxis();
    QStringList categories;
    for (int i = 0; i < nomsProduits.size(); ++i) {
        categories << ""; // Espacement comme dans votre version
    }
    axisY->append(categories);
    top3Chart->addAxis(axisY, Qt::AlignLeft);

    QValueAxis *axisX = new QValueAxis();
    axisX->setTitleText("Nombre d'achats");
    axisX->setLabelFormat("%.0f"); // Format numérique sans décimales
    axisX->setRange(0, valeurs.first() * 1.1); // Marge de 10%
    top3Chart->addAxis(axisX, Qt::AlignBottom);

    // Lien des séries aux axes
    for (auto series : top3Chart->series()) {
        series->attachAxis(axisY);
        series->attachAxis(axisX);
    }

    // 8. Configuration du style (votre style original)
    top3Chart->setTitle("Top 3 des produits les plus vendus");
    top3Chart->legend()->setVisible(true);
    top3Chart->legend()->setAlignment(Qt::AlignBottom);
    top3Chart->setAnimationOptions(QChart::SeriesAnimations);

    QFont titleFont;
    titleFont.setFamily("Georgia");
    titleFont.setPointSize(12);
    titleFont.setWeight(QFont::Bold);
    top3Chart->setTitleFont(titleFont);
    top3Chart->setTitleBrush(QBrush(QColor(0, 0, 128)));

    // 9. Ajustement du conteneur
    ui->widgetTop3->setLayout(new QVBoxLayout());
    ui->widgetTop3->layout()->setContentsMargins(0, 0, 0, 0);
    ui->widgetTop3->layout()->addWidget(top3ChartView);

    // 10. Forcer le redimensionnement
    top3ChartView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    top3Chart->layout()->setContentsMargins(0, 0, 0, 0);
}









void Dialog::creerCourbeCA() {
    // 1. Initialisation du graphique
    if (lineChartView) {
        delete lineChartView;
        lineChartView = nullptr;
    }
    lineChart = new QChart();
    lineChartView = new QChartView(lineChart);
    lineChartView->setRenderHint(QPainter::Antialiasing);

    // 2. Création de la série
    QLineSeries *series = new QLineSeries();
    series->setName("Chiffre d'affaire (TND)");
    series->setPointsVisible(true);
    series->setPointLabelsVisible(true);
    series->setPointLabelsFormat("@yPoint TND");

    // 3. Requête SQL simplifiée pour le format DD-MM-YY
    QSqlQuery query;
    QString requete =
        "SELECT "
        "TO_CHAR(TO_DATE(DATEACHAT, 'DD-MM-YY'), 'YYYY-MM') as mois, "
        "SUM(NOMBREACHAT * PRIX) as ca "
        "FROM ACHAT a "
        "JOIN PRODUITS p ON a.IDPRODUIT = p.IDPRODUIT "
        "GROUP BY TO_CHAR(TO_DATE(DATEACHAT, 'DD-MM-YY'), 'YYYY-MM') "
        "ORDER BY mois";

    qDebug() << "Requête Oracle:" << requete;

    // 4. Exécution de la requête
    if (!query.exec(requete)) {
        QString error = "Erreur Oracle: " + query.lastError().text();
        qDebug() << error;
        QMessageBox::critical(this, "Erreur", error);
        return;
    }

    // 5. Traitement des résultats
    QMap<QString, double> monthlyData;
    bool hasData = false;

    while (query.next()) {
        QString mois = query.value(0).toString();
        double ca = query.value(1).toDouble();
        monthlyData[mois] = ca;
        hasData = true;
        qDebug() << "Mois:" << mois << "CA:" << ca;
    }

    // 6. Vérification des données
    if (!hasData) {
        QMessageBox::information(this, "Information",
                                 "Aucune donnée trouvée. Vérifiez les données d'achat.");
        return;
    }

    // 7. Préparation des données pour le graphique
    QStringList categories;
    QList<double> values;

    // Trier les mois chronologiquement
    QList<QString> sortedMonths = monthlyData.keys();
    std::sort(sortedMonths.begin(), sortedMonths.end());

    // Tableau des noms de mois en français
    QMap<QString, QString> monthNames = {
        {"01", "Janvier"}, {"02", "Février"}, {"03", "Mars"},
        {"04", "Avril"}, {"05", "Mai"}, {"06", "Juin"},
        {"07", "Juillet"}, {"08", "Août"}, {"09", "Septembre"},
        {"10", "Octobre"}, {"11", "Novembre"}, {"12", "Décembre"}
    };

    for (const QString &monthYear : sortedMonths) {
        // Extraire le mois et l'année (format YYYY-MM)
        QStringList parts = monthYear.split('-');
        if (parts.size() == 2) {
            QString year = parts[0];
            QString month = parts[1];
            QString monthName = monthNames.value(month, month);
            categories << monthName + " " + year;
        } else {
            categories << monthYear;
        }
        values << monthlyData[monthYear];
    }

    // Ajout des points à la série
    for (int i = 0; i < categories.size(); ++i) {
        series->append(i, values[i]);
    }

    // 8. Configuration du graphique
    lineChart->addSeries(series);

    // Axe X
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setTitleText("MOIS");
    axisX->setLabelsAngle(-45); // Inclinaison pour meilleure lisibilité
    lineChart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Axe Y
    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("MONTANT (TND)");
    axisY->setLabelFormat("%.2f");
    lineChart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Style
    series->setColor(QColor(65, 105, 225)); // Bleu royal
    lineChart->setTitle("CHIFFRE D'AFFAIRE MENSUEL DE 2025");
    lineChart->legend()->setVisible(true);
    lineChart->legend()->setAlignment(Qt::AlignBottom);
    QFont titleFont;
    titleFont.setFamily("Georgia");
    titleFont.setPointSize(12);       // Taille identique à votre diagramme circulaire
    titleFont.setWeight(QFont::Bold); // Gras
    top3Chart->setTitleFont(titleFont);
    top3Chart->setTitleBrush(QBrush(QColor(0, 0, 128))); // Bleu navy (RGB: 0,0,128)


    // 9. Intégration dans l'interface
    if (ui->courbe->layout()) {
        QLayoutItem* item;
        while ((item = ui->courbe->layout()->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
    } else {
        ui->courbe->setLayout(new QVBoxLayout());
    }
    ui->courbe->layout()->addWidget(lineChartView);
    lineChart->setTitle("Chiffre d'affaire mensuel");


}

void Dialog::creerDiagrammeBarres()
{
    QStringList categories = {
        "Mode & Accessoires",
        "Électronique",
        "Beauté & Cosmétiques",
        "Maison & Décoration",
        "Alimentation",
        "Culture & Loisirs Créatifs"
    };

    QList<QColor> couleurs = {
        QColor("#1F77B4"),  // Bleu navy
        QColor("#FF7F0E"),  // Orange
        QColor("#2CA02C"),  // Vert
        QColor("#D62728"),  // Rouge
        QColor("#9467BD"),  // Violet
        QColor("#8C564B")   // Marron
    };

    QBarSeries *series = new QBarSeries();
    series->setBarWidth(1);

    QSqlQuery query;

    for (int i = 0; i < categories.size(); ++i) {
        QBarSet *barSet = new QBarSet(categories[i]);

        query.prepare("SELECT COUNT(*) FROM PRODUITS WHERE CATEGORIE = ?");
        query.addBindValue(categories[i]);

        int count = 0;
        if (query.exec() && query.next()) {
            count = query.value(0).toInt();
        } else {
            qDebug() << "Erreur SQL pour" << categories[i] << ":" << query.lastError().text();
        }

        for (int j = 0; j < categories.size(); ++j) {
            if (i == j)
                *barSet << count;
            else
                *barSet << 0;
        }

        barSet->setColor(couleurs[i]);
        series->append(barSet);
    }

    chart->addSeries(series);

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setTitleText("Catégories");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Nombre de produits");
    axisY->setMin(0);
    axisY->applyNiceNumbers();
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);
    chart->setTitle("Repartition des produits par catégorie");
    QFont titleFont;
    titleFont.setFamily("Georgia");
    titleFont.setPointSize(12);       // Taille identique à votre diagramme circulaire
    titleFont.setWeight(QFont::Bold); // Gras
    top3Chart->setTitleFont(titleFont);
    top3Chart->setTitleBrush(QBrush(QColor(0, 0, 128))); // Bleu navy (RGB: 0,0,128)

}

void Dialog::creerDiagrammeCirculaire()
{
    QSqlQuery query;
    int packCount = 0;
    int nonPackCount = 0;

    query.prepare("SELECT COUNT(*) FROM PRODUITS WHERE est_pack = 'oui'");
    if (query.exec() && query.next()) {
        packCount = query.value(0).toInt();
    }

    query.prepare("SELECT COUNT(*) FROM PRODUITS WHERE est_pack = 'non'");
    if (query.exec() && query.next()) {
        nonPackCount = query.value(0).toInt();
    }

    // Création de la série
    QPieSeries *series = new QPieSeries();

    // Ajout des tranches avec libellés simples
    QPieSlice *packSlice = series->append("oui", packCount);
    packSlice->setColor(QColor("#1F3A93")); // Bleu foncé

    QPieSlice *nonPackSlice = series->append("non", nonPackCount);
    nonPackSlice->setColor(QColor("#95A5A6")); // Gris clair

    // Configuration des étiquettes - juste "oui" et "non"
    packSlice->setLabel("oui");
    nonPackSlice->setLabel("non");

    // Style des étiquettes
    QFont labelFont;
    labelFont.setFamily("Georgia");
    labelFont.setPointSize(8);
    labelFont.setBold(true);

    packSlice->setLabelFont(labelFont);
    nonPackSlice->setLabelFont(labelFont);
    packSlice->setLabelVisible(true);
    nonPackSlice->setLabelVisible(true);
    packSlice->setLabelArmLengthFactor(0.1);
    nonPackSlice->setLabelArmLengthFactor(0.1);

    series->setLabelsPosition(QPieSlice::LabelOutside);
    series->setLabelsVisible(true);

    // Configuration du graphique
    pieChart->addSeries(series);
    pieChart->setTitle("Produits packagés vs non-packagés");

    // Style du titre
    QFont titleFont;
    titleFont.setFamily("Georgia");
    titleFont.setPointSize(12);
    titleFont.setWeight(QFont::Bold);
    pieChart->setTitleFont(titleFont);
    pieChart->setTitleBrush(QBrush(QColor(0, 0, 128))); // Navy blue

    // Configuration de la légende pour afficher les pourcentages
    pieChart->legend()->setVisible(true);
    pieChart->legend()->setAlignment(Qt::AlignRight);

    QString packLegend = QString("%1%").arg(100 * packSlice->percentage(), 0, 'f', 1);
    QString nonPackLegend = QString("%1%").arg(100 * nonPackSlice->percentage(), 0, 'f', 1);
    pieChart->legend()->markers(series)[0]->setLabel(packLegend);
    pieChart->legend()->markers(series)[1]->setLabel(nonPackLegend);

    QFont legendFont;
    legendFont.setFamily("Georgia");
    legendFont.setPointSize(10);
    pieChart->legend()->setFont(legendFont);

    // Animation et taille
    pieChart->setAnimationOptions(QChart::SeriesAnimations);
    series->setPieSize(0.7);

    // Explosion légère des tranches
    packSlice->setExploded(true);
    packSlice->setExplodeDistanceFactor(0.05);
    nonPackSlice->setExploded(true);
    nonPackSlice->setExplodeDistanceFactor(0.05);
}

Dialog::~Dialog()
{
    delete ui;
}





void Dialog::on_ACCEUIL_clicked()
{
    menu *menu1 = new menu();
    configureTransition(menu1, "");
    this->close();
}


void Dialog::on_pushButton_pack_2_clicked()
{
    pack *packDialog = new pack();
    configureTransition(packDialog, "Gestion des Packs");
    this->close();
}

// Fonction mirrorée de MainWindow::configureDialog()
void Dialog::configureTransition(QWidget *window, const QString &title)
{
    window->setWindowTitle(title);
    window->setAttribute(Qt::WA_DeleteOnClose);

    // Animation identique (250ms comme dans MainWindow)
    QPropertyAnimation *animation = new QPropertyAnimation(window, "windowOpacity");
    animation->setDuration(250); // Même durée que configureDialog
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start(QPropertyAnimation::DeleteWhenStopped);

    window->show();
}

void Dialog::on_pushButton_5_clicked()
{
    menu *menu1 = new menu();
    configureTransition(menu1, "");
    this->close();
}


void Dialog::on_pushButton_2_clicked()
{
    menu *menu1 = new menu();
    configureTransition(menu1, "");
    this->close();
}


void Dialog::on_pushButton_4_clicked()
{
    menu *menu1 = new menu();
    configureTransition(menu1, "");
    this->close();
}


void Dialog::on_pushButton_3_clicked()
{
    menu *menu1 = new menu();
    configureTransition(menu1, "");
    this->close();
}


void Dialog::on_pushButton_7_clicked()
{
    menu *menu1 = new menu();
    configureTransition(menu1, "");
    this->close();
}


void Dialog::on_pushButton_6_clicked()
{
    menu *menu1 = new menu();
    configureTransition(menu1, "");
    this->close();
}


void Dialog::on_pushButton_8_clicked()
{
    menu *menu1 = new menu();
    configureTransition(menu1, "");
    this->close();
}

