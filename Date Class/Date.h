#ifndef DATE_H
#define DATE_H
#include <string>

class Date
{
private:
    int month = 1; //must be between 1 and 12
    int day = 1; //must be between 1 and 31, 30, 29, or 28, depending on month
    int year = 1900;

public:
    Date(int m = 1, int d = 1, int y = 1900);
    void setDate(int m, int d, int y);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    bool isLeapYear() const;
    bool isLeapYear(int year) const;
    int lastDay() const;
    int lastDay(int month, int year) const;
    std::string formatNumeric() const;
    std::string formatLong() const;
    std::string formatEuropean() const;
};

#endif