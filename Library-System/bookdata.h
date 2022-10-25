#ifndef BOOKDATA_H
#define BOOKDATA_H

#include <QString>

/**
 * @brief The BookData class
 */
class BookData
{
public:
    /**
     * @brief Default Parameterized Constructor
     * @param _name The name of the book
     * @param _price The price of the book
     */
    BookData(QString _name, double _price);

    /**
     * @brief Sets the name of the book
     * @param _name The name of the book
     */
    void setName(QString _name);

    /**
     * @brief Gets the name of the book
     * @return The name of the book
     */
    QString getName();

    /**
     * @brief Sets the price of the book
     * @param _price The price of the book
     */
    void setPrice(double _price);

    /**
     * @brief Gets the price of the book
     * @return The price of the book
     */
    double getPrice();

private:
    /**
     * @brief Book name
     */
    QString name{};

    /**
     * @brief Book price
     */
    double price{};
};

#endif // BOOKDATA_H
