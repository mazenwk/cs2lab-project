#ifndef PURCHASEDBOOKSDIALOG_H
#define PURCHASEDBOOKSDIALOG_H

#include <QDialog>

namespace Ui {
class PurchasedBooksDialog;
}

class PurchasedBooksDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PurchasedBooksDialog(QWidget *parent = nullptr);
    ~PurchasedBooksDialog();

private:
    Ui::PurchasedBooksDialog *ui;
};

#endif // PURCHASEDBOOKSDIALOG_H
