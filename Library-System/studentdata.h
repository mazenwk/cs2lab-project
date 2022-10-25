#ifndef STUDENTDATA_H
#define STUDENTDATA_H

#include <QList>
#include <QString>

/**
 * @brief The StudentData class
 */
class StudentData
{
public:
    /**
     * @brief PurchasedBooks List
     */
    QList<QString> PurchasedBooks;

    /**
     * @brief Default parameterized constructor
     * @param _name The student name
     * @param _password The student password
     * @param _id The student ID
     * @param _accountBalance The student account balance
     */
    StudentData(QString _name, QString _password, QString _id, double _accountBalance);

    /**
     * @brief Sets the student name
     * @param _name The student name
     */
    void setName(QString _name);

    /**
     * @brief Sets the stuednt password
     * @param _password The student password
     */
    void setPassword(QString _password);

    /**
     * @brief Sets the stuednt ID
     * @param _id The stuednt ID
     */
    void setId(QString _id);

    /**
     * @brief Sets the stuednt account balance
     * @param _accountBalance The stuednt account balance
     */
    void setAccountBalance(double _accountBalance);

    /**
     * @brief Gets the student name
     * @return The student name
     */
    QString getName();

    /**
     * @brief Gets the student password
     * @return The student password
     */
    QString getPassword();

    /**
     * @brief Gets the student ID
     * @return The student ID
     */
    QString getId();

    /**
     * @brief Gets the student account balance
     * @return The student account balance
     */
    double getAaccountBalance();

private:
    /**
     * @brief Student name
     */
    QString name{};

    /**
     * @brief Student Password
     */
    QString password{};

    /**
     * @brief Student ID
     */
    QString id{};

    /**
     * @brief Student account balance
     */
    double accountBalance{};
};

#endif // STUDENTDATA_H
