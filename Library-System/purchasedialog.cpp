#include "purchasedialog.h"
#include "ui_purchasedialog.h"
#include "purchasedbooksdialog.h"

#include <QString>

PurchaseDialog::PurchaseDialog(StudentData* _signedInStudent, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PurchaseDialog)
{
    ui->setupUi(this);

    // Create database of books
    books.append(new BookData("C++", 180));
    books.append(new BookData("Calculus", 80));
    books.append(new BookData("Physics", 280));

    // Update dialog window with database values
    ui->comboBoxBookOption->addItem(books[0]->getName());
    ui->labelBookPrice->setText(QString::number(books[0]->getPrice()));
    ui->comboBoxBookOption->addItem(books[1]->getName());
    ui->comboBoxBookOption->addItem(books[2]->getName());

    // Assign the currently signed in student & update dialog window
    signedInStudent = _signedInStudent;
    ui->IDNumber->setText(signedInStudent->getId());
    ui->BalanceNumber->setText(QString::number(signedInStudent->getAaccountBalance()));
}

PurchaseDialog::~PurchaseDialog()
{
    delete ui;
}

void PurchaseDialog::on_comboBoxBookOption_currentIndexChanged(int index)
{
    // Update price to match selection
    ui->labelBookPrice->setText(QString::number(books[index]->getPrice()));
}


void PurchaseDialog::on_pushButtonBuyBook_clicked()
{
    // Validation
    if (signedInStudent->getAaccountBalance() < ui->labelBookPrice->text().toDouble()) {
        ui->labelMessage->setText("Recharge your balance first");
    } else {
        // Update signed in student balance & dialog window
        signedInStudent->setAccountBalance(signedInStudent->getAaccountBalance() - ui->labelBookPrice->text().toDouble());
        ui->BalanceNumber->setText(QString::number(signedInStudent->getAaccountBalance()));

        // Add the purchased book to the signed in student
        signedInStudent->PurchasedBooks.append(books[ui->comboBoxBookOption->currentIndex()]->getName());
        ui->labelMessage->setText("Bought successfully");
    }
}


void PurchaseDialog::on_pushButton_Recharge_clicked()
{
    // Validation
    if (ui->lineEdit_value->text().toDouble() < 0) {
        ui->lineEdit_value->setText("Can't enter -ve value");
    } else {
        // Recharge & update dialog window
        signedInStudent->setAccountBalance(signedInStudent->getAaccountBalance() + ui->lineEdit_value->text().toDouble());
        ui->BalanceNumber->setText(QString::number(signedInStudent->getAaccountBalance()));
    }
}


void PurchaseDialog::on_pushButton_view_clicked()
{
    // Open purchased books dialog
    PurchasedBooksDialog pbd(signedInStudent->PurchasedBooks);
    pbd.setModal(true);
    pbd.exec();
}

