#pragma once
#ifndef LOGGER_H
#define LOGGER_H

#include "Book.h"
#include <vector>
#include <string>

using namespace std;

class Logger 
{
private:
    struct LogRecord 
    {
        string name;
        string author;
        int pages;
        string timestamp;
    };

    vector<LogRecord> log;
    string getCurrentTimestamp();

public:
    void addRecord(const Book& book);
    void saveLog();
};

#endif
