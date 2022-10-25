#ifndef BOOKDATA_H
#define BOOKDATA_H

#include <QString>


class BookData
{
public:
    BookData(QString _name, int _price);
    void setName(QString _name);
    QString getName();
    void setPrice(int _price);
    int getPrice();

private:
    QString name{};
    int price{};
};

#endif // BOOKDATA_H
