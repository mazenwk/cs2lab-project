#ifndef PURCHASEDBOOKSDIALOG_H
#define PURCHASEDBOOKSDIALOG_H

#include <QDialog>
#include <QList>
#include <QString>

namespace Ui {
class PurchasedBooksDialog;
}

/**
 * @brief The PurchasedBooksDialog class
 */
class PurchasedBooksDialog : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Default parameterized constructor
     * @param purcahsedBooks The list of purchased books
     * @param parent The parent widget
     */
    explicit PurchasedBooksDialog(QList<QString> purcahsedBooks, QWidget *parent = nullptr);
    ~PurchasedBooksDialog();

private:
    Ui::PurchasedBooksDialog *ui;
};

#endif // PURCHASEDBOOKSDIALOG_H
