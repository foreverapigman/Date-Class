#include "Date.h"
#include <iostream>

Date::Date(int m, int d, int y)
{
    setDate(m, d, y);
}

void Date::setDate(int m, int d, int y)
{
    if (m >= 1 && m <= 12 && y >= 0 && d >= 1 && d <= lastDay(m, y))
    {
        month = m;
        day = d;
        year = y;
    }
    else
    {
        std::cout << "Invalid Input\n";
    }
}

int Date::getMonth() const
{
	return month;
}

int Date::getDay() const
{
	return day;
}

int Date::getYear() const
{
	return year;
}

bool Date::isLeapYear() const
{
    return isLeapYear(year);
}

bool Date::isLeapYear(int year) const
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Date::lastDay() const
{
    return lastDay(month, year);
}

int Date::lastDay(int month, int year) const
{
    if (month == 2 && isLeapYear(year))
    {
        return 29;
    }
    else if (month == 2 && !isLeapYear(year))
    {
        return 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}

std::string Date::formatNumeric() const
{
    return (std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year));
}

std::string Date::formatLong() const
{
    const std::string months[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    return (months[month - 1] + " " + std::to_string(day) + ", " + std::to_string(year));
}

std::string Date::formatEuropean() const
{
    const std::string months[] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
    };
    return (std::to_string(day) + " " + months[month - 1] + " " + std::to_string(year));
}