#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "purchasedialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

    // Delete currently signed in student pointer
    delete signedInStudent;
}


void MainWindow::on_pushButton_SignIn_clicked()
{
    bool signedIn = false;
    bool passWrong = false;

    // Loop on database
    for (int i = 0; i < SIZE; i++) {

        // Check username and password
        if (ui->lineEdit_Input_Name->text() == registeredUsernames[i]) {
            if (ui->lineEdit_Input_Pass->text() == registeredPasswords[i]) {

                // Sign in the new student
                ui->label_Output_ExistsOrNot->setText("Signed in successfully");
                signedInStudent = new StudentData(
                            registeredUsernames[i], registeredPasswords[i], registeredIds[i], registeredBalances[i]);

                ui->label_Output_ID->setText(signedInStudent->getId());
                ui->label_Output_Balance->setText(QString::number(signedInStudent->getAaccountBalance()) + " LE");
                signedIn = true;

                // Purchase dialog
                PurchaseDialog pd(signedInStudent);
                pd.setModal(true);
                pd.exec();

                break;
            } else {
                // For correct error message
                passWrong = true;
            }
        }
    }

    // Error message
    if (!signedIn && passWrong) {
        ui->label_Output_ExistsOrNot->setText("Name is correct but passowrd does not exist");
    } else if (!signedIn && !passWrong) {
        ui->label_Output_ExistsOrNot->setText("Name does not exist");
    }
}

