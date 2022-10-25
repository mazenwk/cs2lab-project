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
    delete signedInStudent;
}


void MainWindow::on_pushButton_SignIn_clicked()
{
    bool signedIn = false;
    bool passWrong = false;

    for (int i = 0; i < SIZE; i++) {
        if (ui->lineEdit_Input_Name->text() == registeredUsernames[i]) {
            if (ui->lineEdit_Input_Pass->text() == registeredPasswords[i]) {
                ui->label_Output_ExistsOrNot->setText("Signed in successfully");
                signedInStudent = new StudentData(registeredUsernames[i], registeredPasswords[i], registeredIds[i], registeredBalances[i]);
                ui->label_Output_ID->setText(signedInStudent->getId());
                ui->label_Output_Balance->setText(QString::number(signedInStudent->getAaccountBalance()) + " LE");
                // Open window
                PurchaseDialog pd(signedInStudent);
                pd.setModal(true);
                pd.exec();
                signedIn = true;
                break;
            } else { passWrong = true;}
        }
    }

    if (!signedIn && passWrong) {
        ui->label_Output_ExistsOrNot->setText("Name is correct but passowrd does not exist");
    } else if (!signedIn && !passWrong) {
        ui->label_Output_ExistsOrNot->setText("Name does not exist");
    }
}

