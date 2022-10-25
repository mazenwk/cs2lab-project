#ifndef STUDENTDATA_H
#define STUDENTDATA_H
#include <QString>
#include "bookdata.h"
#include <QList>

class StudentData
{
private:
    QString Name = " ";
    QString password = " ";
    QString Id = " ";
    double AccountBalance = 0;


public:
    QList<QString> PurchasedBooks;

    StudentData(QString n, QString p, QString id, double AB);
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
