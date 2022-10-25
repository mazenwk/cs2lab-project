#ifndef PURCHASEDIALOG_H
#define PURCHASEDIALOG_H
#include "studentdata.h"
#include "bookdata.h"

#include <QList>
#include <QDialog>

namespace Ui {
class PurchaseDialog;
}

class PurchaseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PurchaseDialog(StudentData* _data, QWidget *parent = nullptr);
    ~PurchaseDialog();

    QList<BookData *> books;

private slots:
    void on_comboBoxBookOption_currentIndexChanged(int index);

    void on_pushButtonBuyBook_clicked();

    void on_pushButton_Recharge_clicked();

    void on_pushButton_view_clicked();

private:
    Ui::PurchaseDialog *ui;
    StudentData* data;
};

#endif // PURCHASEDIALOG_H
