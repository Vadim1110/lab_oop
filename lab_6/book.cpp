#include "Book.h"
#include <iostream>

using namespace std;

// statichne
int Book::bookCount = 0;

// konstruktor
Book::Book(string name, string author, int pages)
    : name(name), author(author), pages(pages) 
{
    bookCount++;
}

// destruktor
Book::~Book() 
{
    bookCount--;
}

void Book::printInfo() const 
{
    cout << "Book Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: " << pages << endl;
}
