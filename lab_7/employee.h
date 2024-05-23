#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Man.h"
#include <string>

using namespace std;

class Employee : public Man 
{
private:
    string position;
    double salary;

public:

    Employee(string name, int age, char gender, double weight, string position, double salary); //konstruktor

    string getPosition() const;
    double getSalary() const;

    void setPosition(string newPosition);
    void setSalary(double newSalary);

    void displayInfo() const override;
};

#endif 
