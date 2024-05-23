#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(string name, int age, char gender, double weight, string position, double salary) //konstruktor
    : Man(name, age, gender, weight), position(position), salary(salary) {}

string Employee::getPosition() const 
{
    return position;
}

double Employee::getSalary() const 
{
    return salary;
}

void Employee::setPosition(string newPosition) 
{
    position = newPosition;
}

void Employee::setSalary(double newSalary) 
{
    salary = newSalary;
}

void Employee::displayInfo() const 
{
    Man::displayInfo();
    cout << "Position: " << position << ", Salary: " << salary << endl;
}
