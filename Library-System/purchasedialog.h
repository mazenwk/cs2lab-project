#ifndef PURCHASEDIALOG_H
#define PURCHASEDIALOG_H
#include "studentdata.h"
#include "bookdata.h"

#include <QList>
#include <QDialog>

namespace Ui {
class PurchaseDialog;
}

/**
 * @brief The PurchaseDialog class
 */
class PurchaseDialog : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Default parametrizied constructor
     * @param _data The currently signed in student
     * @param parent Parent widget
     */
    explicit PurchaseDialog(StudentData* _signedInStudent, QWidget *parent = nullptr);
    ~PurchaseDialog();

    /**
     * @brief The available books list to buy
     */
    QList<BookData *> books;

private slots:
    /**
     * @brief ComboBox Index Changes handler
     * Changes the book data in the window, such as price, as the choice changes
     * @param index The new selected index
     */
    void on_comboBoxBookOption_currentIndexChanged(int index);

    /**
     * @brief Buy Book handler
     *  Checks if the singed in student has enough balance to buy the selected book, then adds it to the
     *  student's purchased books list. Otherwise displays an error message
     */
    void on_pushButtonBuyBook_clicked();

    /**
     * @brief Recharch balance handler
     * Checks if the input value is positive and recharges the signed in student balance with that value,
     * otherwise displays an error message
     */
    void on_pushButton_Recharge_clicked();

    /**
     * @brief View purchased books handler
     * Views the purchased books of the currently signed in student in a new dialog
     */
    void on_pushButton_view_clicked();

private:
    Ui::PurchaseDialog *ui;

    /**
     * @brief The currently signed in student
     */
    StudentData* signedInStudent;
};

#endif // PURCHASEDIALOG_H
