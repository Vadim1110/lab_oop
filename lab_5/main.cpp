#include "date.h"
#include <iostream>

using namespace std;

Date::Date() : day(1), month(1), year(2000) {}

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

// destruktor
Date::~Date() 
{
    cout << "Object destroyed" << endl;
}

int& Date::operator[](int index) 
{
    switch(index) 
    {
        case 0: return day;
        case 1: return month;
        case 2: return year;
        default: throw out_of_range("Index out of range");
    }
}

// relout
void Date::operator()() 
{
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}

istream& operator>>(istream& input, Date& date) 
{
    input >> date.day >> date.month >> date.year;
    return input;
}

ostream& operator<<(ostream& output, const Date& date) 
{
    output << date.day << "/" << date.month << "/" << date.year;
    return output;
}

int main() 
{
    Date date1;
    
    cout << "Enter a date (day month year): ";
    cin >> date1;

    cout << "Date entered: " << date1 << endl;
    cout << "Date components: ";
    cout << date1[0] << " (day), " << date1[1] << " (month), " << date1[2] << " (year)" << endl;

    date1();

    return 0;
}
