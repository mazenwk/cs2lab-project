#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include "StudentData.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    static const int SIZE = 3;
    QString registeredUsernames[SIZE] = {"Andrew", "Mazen", "Habiba"};
    QString registeredPasswords[SIZE] = {"andrew1", "mazen2", "habiba3"};
    QString registeredIds[SIZE] = {"001", "002", "003"};
    double registeredBalances[SIZE] = {100, 50, 76};

    StudentData* signedInStudent;

private slots:
    void on_pushButton_SignIn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
