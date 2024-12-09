/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
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
    QTextEdit *EtatTension;
    QPushButton *Demarragedudrone;
    QTextEdit *textEdit_3;
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
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(70, 180, 89, 20));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(70, 210, 76, 20));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(60, 110, 141, 31));
        EtatTension = new QTextEdit(centralwidget);
        EtatTension->setObjectName("EtatTension");
        EtatTension->setGeometry(QRect(60, 70, 101, 31));
        EtatTension->setReadOnly(true);
        Demarragedudrone = new QPushButton(centralwidget);
        Demarragedudrone->setObjectName("Demarragedudrone");
        Demarragedudrone->setGeometry(QRect(270, 20, 151, 41));
        Demarragedudrone->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);"));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(280, 70, 101, 31));
        textEdit_3->setReadOnly(true);
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
        Demarragedudrone->setText(QCoreApplication::translate("MainWindow", "D\303\251marrage du drone", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
