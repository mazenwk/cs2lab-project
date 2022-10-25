#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "studentdata.h"

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief The MainWindow (Sign in) class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    /**
     * @brief The currently signed in student
     */
    StudentData* signedInStudent;

    /**
     * @brief The size of the arrays that hold the database data
     */
    static const int SIZE = 3;

    /**
     * @brief The registered usernames database
     */
    const QString registeredUsernames[SIZE] = {"Andrew", "Mazen", "Habiba"};

    /**
     * @brief The registered passwords database
     */
    const QString registeredPasswords[SIZE] = {"andrew1", "mazen2", "habiba3"};

    /**
     * @brief The registered IDs database
     */
    const QString registeredIds[SIZE] = {"001", "002", "003"};

    /**
     * @brief The registered balances database
     */
    const double registeredBalances[SIZE] = {100, 50, 76};

private slots:
    /**
     * @brief Sign in event handler.
     * Checks if the username matches any of the usernames in the database, if yes then it checks if the password matches
     * any of the passwords in the database. If both match the user is signed in and a new dialog pops up. If either are wrong
     * an error message is displayed indicating which input is wrong.
     */
    void on_pushButton_SignIn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
