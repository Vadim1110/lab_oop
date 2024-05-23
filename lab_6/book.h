#pragma once
#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book 
{
public:
    static int bookCount;
    string name; 
    string author;
    int pages;

    // konstruktor
    Book(string name, string author, int pages);

    // destruktor
    ~Book();

    void printInfo() const;
};

#endif
