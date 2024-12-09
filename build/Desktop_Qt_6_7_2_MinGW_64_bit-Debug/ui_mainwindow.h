/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *MiseSousTension;
    QSlider *horizontalSlider;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QPushButton *EtatDemarrageLabel;
    QLabel *EtatTensionLabel;
    QLabel *EtatDroneabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MiseSousTension = new QPushButton(centralwidget);
        MiseSousTension->setObjectName("MiseSousTension");
        MiseSousTension->setGeometry(QRect(60, 20, 151, 41));
        MiseSousTension->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);"));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(60, 150, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(70, 180, 89, 20));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(70, 210, 76, 20));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(60, 110, 141, 31));
        EtatDemarrageLabel = new QPushButton(centralwidget);
        EtatDemarrageLabel->setObjectName("EtatDemarrageLabel");
        EtatDemarrageLabel->setGeometry(QRect(270, 20, 151, 41));
        EtatDemarrageLabel->setToolTipDuration(8);
        EtatDemarrageLabel->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);"));
        EtatTensionLabel = new QLabel(centralwidget);
        EtatTensionLabel->setObjectName("EtatTensionLabel");
        EtatTensionLabel->setGeometry(QRect(70, 70, 81, 31));
        EtatDroneabel = new QLabel(centralwidget);
        EtatDroneabel->setObjectName("EtatDroneabel");
        EtatDroneabel->setGeometry(QRect(280, 70, 71, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MiseSousTension->setText(QCoreApplication::translate("MainWindow", "Mise sous tension", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        EtatDemarrageLabel->setText(QCoreApplication::translate("MainWindow", "D\303\251marrage du drone", nullptr));
        EtatTensionLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        EtatDroneabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
