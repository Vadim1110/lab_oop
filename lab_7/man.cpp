#include "Man.h"
#include <iostream>

using namespace std;

Man::Man(string name, int age, char gender, double weight) //konstruktor
    : name(name), age(age), gender(gender), weight(weight) {}

string Man::getName() const { return name; }
int Man::getAge() const { return age; }
char Man::getGender() const { return gender; }
double Man::getWeight() const { return weight; }

void Man::setName(string newName) { name = newName; }
void Man::setAge(int newAge) { age = newAge; }
void Man::setWeight(double newWeight) { weight = newWeight; }

void Man::displayInfo() const 
{
    cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << ", Weight: " << weight << endl;
}
