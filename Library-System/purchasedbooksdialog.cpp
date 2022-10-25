#include "purchasedbooksdialog.h"
#include "ui_purchasedbooksdialog.h"
#include <QList>
#include <QString>

PurchasedBooksDialog::PurchasedBooksDialog(QList<QString> purchasedBooks, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PurchasedBooksDialog)
{
    ui->setupUi(this);

    for (int i =0; i < purchasedBooks.count(); i++) {
        ui->label_Output_BooksBought->setText(ui->label_Output_BooksBought->text() + purchasedBooks[i] + '\n');
    }
}

PurchasedBooksDialog::~PurchasedBooksDialog()
{
    delete ui;
}
