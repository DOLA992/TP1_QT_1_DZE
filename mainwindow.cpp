#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->EtatTensionLabel->setText("Hors Tension");  // Utilisation de QLabel pour afficher le texte
    ui->EtatTensionLabel->setEnabled(true);          // Le QLabel reste actif
    ui->MiseSousTension->setText("Mise sous tension");
    ui->MiseSousTension->setEnabled(true);
    ui->EtatDemarrageLabel->setText("Désactivé");
    ui->EtatDemarrageLabel->setDisabled(true);       // Le QLabel pour l'état de démarrage est désactivé
    clickTension = false;
    clickDrone = false;
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_MiseSousTension_clicked()
{
    if (clickTension == false) {
        ui->EtatTensionLabel->setText("En Tension");  // Utilisation du QLabel pour afficher "En Tension"
        ui->EtatTensionLabel->setDisabled(true);       // Désactivation du QLabel
        clickTension = true;

        // Activation du QLabel pour l'état de démarrage du drone
        ui->EtatDemarrageLabel->setEnabled(true);
    } else {
        ui->EtatTensionLabel->setText("A l'arrêt");  // Affiche "A l'arrêt"
        ui->EtatTensionLabel->setEnabled(true);      // Réactive le QLabel
        clickTension = false;
    }
}

void MainWindow::on_EtatDrone_clicked()
{
    ui->EtatDemarrageLabel->setText("Drone démarré");
}
