#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date date;
    cout << "Expected Date: 1/1/1900\n";
    cout << "Actual Date: " << date.formatNumeric() << "\n\n";

    int month, day, year;

    cout << "Enter month: ";
    cin >> month;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter year: ";
    cin >> year;

    date.setDate(month, day, year);

    cout << "\nYour date: " << date.formatNumeric() << endl;
    cout << "Long format: " << date.formatLong() << endl;
    cout << "European format: " << date.formatEuropean() << endl;

    return 0;
}
