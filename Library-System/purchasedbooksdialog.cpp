#include "purchasedbooksdialog.h"
#include "ui_purchasedbooksdialog.h"
#include <QList>
#include <QString>

PurchasedBooksDialog::PurchasedBooksDialog(QList<QString> purchasedBooks, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PurchasedBooksDialog)
{
    ui->setupUi(this);

    ui->textEdit_Output_BooksBought->setReadOnly(true);

    for (int i =0; i < purchasedBooks.count(); i++) {
        ui->textEdit_Output_BooksBought->append(purchasedBooks[i]);
    }
}

PurchasedBooksDialog::~PurchasedBooksDialog()
{
    delete ui;
}
