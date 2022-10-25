#ifndef BOOKDATA_H
#define BOOKDATA_H

#include <QString>


class BookData
{
public:
    BookData(QString _name, double _price);
    void setName(QString _name);
    QString getName();
    void setPrice(double _price);
    double getPrice();

private:
    QString name{};
    double price{};
};

#endif // BOOKDATA_H
