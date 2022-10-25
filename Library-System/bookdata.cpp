#include "bookdata.h"

BookData::BookData(QString _name, int _price)
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

void BookData::setPrice(int _price)
{
    price = _price;
}

int BookData::getPrice()
{
    return price;
}
