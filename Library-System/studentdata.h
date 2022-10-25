#ifndef STUDENTDATA_H
#define STUDENTDATA_H
#include <QString>
#include "bookdata.h"

class StudentData
{
private:
    QString Name = " ";
    QString password = " ";
    QString Id = " ";
    BookData *PurchasedBooks;
    double AccountBalance = 0;


public:
    StudentData();
    void setName(QString n);
    void setPassword(QString p);
    void setId(QString id);
    void setAccountBalance(double AB);
    QString getName();
    QString getPassword();
    QString getId();
    double getAB();
};

#endif // STUDENTDATA_H
