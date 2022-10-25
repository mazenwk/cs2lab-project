#include "studentdata.h"

StudentData::StudentData(QString n, QString p, QString id, double AB)
{
    setName(n);
    setPassword(p);
    setId(id);
    setAccountBalance(AB);

}

void StudentData::setName(QString n)
{
    Name = n;
}

void StudentData::setPassword(QString p)
{
    password = p;
}

void StudentData::setId(QString id)
{
    Id = id;
}

void StudentData::setAccountBalance(double AB)
{
    AccountBalance = AB;
}

QString StudentData::getName()
{
    return Name;
}

QString StudentData::getPassword()
{
    return password;
}

QString StudentData::getId()
{
    return Id;
}

double StudentData::getAB()
{
    return AccountBalance;
}
