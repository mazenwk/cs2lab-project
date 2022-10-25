#ifndef PURCHASEDBOOKSDIALOG_H
#define PURCHASEDBOOKSDIALOG_H

#include <QList>
#include <QString>
#include <QDialog>

namespace Ui {
class PurchasedBooksDialog;
}

class PurchasedBooksDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PurchasedBooksDialog(QList<QString> purcahsedBooks, QWidget *parent = nullptr);
    ~PurchasedBooksDialog();

private:
    Ui::PurchasedBooksDialog *ui;
};

#endif // PURCHASEDBOOKSDIALOG_H
