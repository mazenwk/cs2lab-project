#include "purchasedbooksdialog.h"
#include "ui_purchasedbooksdialog.h"

PurchasedBooksDialog::PurchasedBooksDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PurchasedBooksDialog)
{
    ui->setupUi(this);
}

PurchasedBooksDialog::~PurchasedBooksDialog()
{
    delete ui;
}
