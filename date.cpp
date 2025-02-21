// date.cpp
#include <iostream>
#include <sstream>
#include "date.h"

Date::Date(){
    Date::dateString = "0/0/0000"
    Date::month = 0
    Date::day = 0
    Date::year = 0
} // end constructor

void init(std::string dateString){
    Date::dateString = dateString;
    std::stringstream ss;
    std::string sMonth;
    std::string sDay;
    std::string sYear;

    ss.clear();
    ss.str(dateString);

    getline(ss, sMonth, '/');
    getline(ss, sDay, '/');
    getline(ss, sYear);

    ss << sMonth << " " << sDay << " " << sYear;
    
} // end init
