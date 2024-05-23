#include <iostream>
#include "Book.h"
#include "Logger.h"

using namespace std;

int main() 
{
    Logger logger;

    Book book1("first", "J. Frasko", 228);
    Book book2("2005", "George Orwell", 52);
    Book book3("To Kill", "Harper Lee", 281);

    logger.addRecord(book1);
    logger.addRecord(book2);
    logger.addRecord(book3);

    book1.printInfo();
    book2.printInfo();
    book3.printInfo();

    logger.saveLog();

    return 0;
}
