#include "Logger.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

string Logger::getCurrentTimestamp() 
{
    time_t now = time(0);
    tm ltm;
    localtime_s(&ltm, &now);
    stringstream ss;
    ss << 1900 + ltm.tm_year << "."
        << 1 + ltm.tm_mon << "."
        << ltm.tm_mday << " "
        << ltm.tm_hour << ":"
        << ltm.tm_min << ":"
        << ltm.tm_sec;
    return ss.str();
}

void Logger::addRecord(const Book& book) 
{
    LogRecord record;
    record.name = book.name;
    record.author = book.author;
    record.pages = book.pages;
    record.timestamp = getCurrentTimestamp();
    log.push_back(record);
}

void Logger::saveLog() 
{
    ofstream file;
    string filename = "log_" + getCurrentTimestamp() + ".txt";
    file.open(filename);

    if (file.is_open()) 
    {
        file << "ClassName: Book\n";
        file << "numberOfEntities: " << Book::bookCount << "\n";

        for (const auto& record : log)
        {
            file << "time: " << record.timestamp << "\n";
            file << "objectName: " << record.name << "\n";
            file << "\tauthor: " << record.author << "\n";
            file << "\tpages: " << record.pages << "\n";
        }

        file.close();
        cout << "Log saved to " << filename << endl;
    }
    else 
    {
        cerr << "Unable to open log file for writing." << endl;
    }
}
