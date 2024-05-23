#ifndef MAN_H
#define MAN_H

#include <string>

using namespace std;

class Man 
{
private:
    string name;
    int age;
    char gender;
    double weight;

public:

    Man(string name, int age, char gender, double weight); //konstruktor

    string getName() const;
    int getAge() const;
    char getGender() const;
    double getWeight() const;

    void setName(string newName);
    void setAge(int newAge);
    void setWeight(double newWeight);

    virtual void displayInfo() const;
};

#endif
