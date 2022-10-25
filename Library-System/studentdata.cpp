#include "studentdata.h"

StudentData::StudentData(QString _name, QString _password, QString _id, double _accountBalance)
{
    setName(_name);
    setPassword(_password);
    setId(_id);
    setAccountBalance(_accountBalance);

}

void StudentData::setName(QString _name)
{
    name = _name;
}

void StudentData::setPassword(QString _password)
{
    password = _password;
}

void StudentData::setId(QString _id)
{
    id = _id;
}

void StudentData::setAccountBalance(double _accountBalance)
{
    accountBalance = _accountBalance;
}

QString StudentData::getName()
{
    return name;
}

QString StudentData::getPassword()
{
    return password;
}

QString StudentData::getId()
{
    return id;
}

double StudentData::getAaccountBalance()
{
    return accountBalance;
}
