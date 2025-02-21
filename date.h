//start date.h
#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <iostream>
#include <sstream>
class Date{
    protected: 
        std::string dateString;
        int month;
        int day;
        int year;
    public:
        Date();
        void init(std::string dateString);
        void printDate();



}; // end of Date Class

#endif // end date.h