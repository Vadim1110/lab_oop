#include <iostream>

using namespace std;

class Date 
{
private:
    int day;
    int month;
    int year;

public:
    Date();

    Date(int d, int m, int y);

    ~Date();

    int& operator[](int index);

    void operator()();

    friend istream& operator>>(istream& input, Date& date);

    friend ostream& operator<<(ostream& output, const Date& date);
};
