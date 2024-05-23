#include "Man.h"
#include "Employee.h"

using namespace std;

void showManInfo(const Man& man) 
{
    man.displayInfo();
}

int main() 
{
    Man man("Oleksandr Simple", 52, 'M', 75.5);
    showManInfo(man);

    Employee employee("Jack Fresco", 38, 'F', 62.0, "Software Engineer", 52000.0);
    showManInfo(employee);

    return 0;
}