#include "purchasedialog.h"
#include "ui_purchasedialog.h"
#include "purchasedbooksdialog.h"
#include <QString>

PurchaseDialog::PurchaseDialog(StudentData* _data, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PurchaseDialog)
{
    books.append(new BookData("C++", 180));
    books.append(new BookData("Calculus", 80));
    books.append(new BookData("Physics", 280));

    ui->setupUi(this);
    data = _data;
    ui->comboBoxBookOption->addItem(books[0]->getName());
    ui->labelBookPrice->setText(QString::number(books[0]->getPrice()));
    ui->comboBoxBookOption->addItem(books[1]->getName());
    ui->comboBoxBookOption->addItem(books[2]->getName());

    ui->IDNumber->setText(_data->getId());
    ui->BalanceNumber->setText(QString::number(data->getAB()));
}

PurchaseDialog::~PurchaseDialog()
{
    delete ui;
}

void PurchaseDialog::on_comboBoxBookOption_currentIndexChanged(int index)
{
    ui->labelBookPrice->setText(QString::number(books[index]->getPrice()));
}


void PurchaseDialog::on_pushButtonBuyBook_clicked()
{
    if (data->getAB() < ui->labelBookPrice->text().toDouble()) {
        ui->labelMessage->setText("Recharge your balance first");
    } else {
        data->setAccountBalance(data->getAB() - ui->labelBookPrice->text().toDouble());
        ui->BalanceNumber->setText(QString::number(data->getAB()));
        ui->labelMessage->setText("Bought successfully");
        data->PurchasedBooks.append(books[ui->comboBoxBookOption->currentIndex()]->getName());
    }
}


void PurchaseDialog::on_pushButton_Recharge_clicked()
{
    if (ui->lineEdit_value->text().toDouble() < 0) {
        ui->lineEdit_value->setText("Can't enter -ve value");
    } else {
        data->setAccountBalance(data->getAB() + ui->lineEdit_value->text().toDouble());
        ui->BalanceNumber->setText(QString::number(data->getAB()));
    }
}


void PurchaseDialog::on_pushButton_view_clicked()
{
    PurchasedBooksDialog pbd(data->PurchasedBooks);
    pbd.setModal(true);
    pbd.exec();
}

