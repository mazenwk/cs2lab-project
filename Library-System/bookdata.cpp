#include "bookdata.h"

BookData::BookData(QString _name, double _price)
{
    setName(_name);
    setPrice(_price);
}

void BookData::setName(QString _name)
{
    name = _name;
}

QString BookData::getName()
{
    return name;
}

void BookData::setPrice(double _price)
{
    price = _price;
}

double BookData::getPrice()
{
    return price;
}
