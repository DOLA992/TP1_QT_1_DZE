#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_MiseSousTension_clicked();


    void on_EtatDrone_clicked();

    void on_label_linkActivated(const QString &link);

    void on_EtatTensionLabel_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    bool clickTension  ;
    bool clickDrone;
};
#endif // MAINWINDOW_H
