//date.cpp
#include <iostream>
#include <string>
#include <sstream>
#include "date.h"

Date::Date(){
    Date::dateString = ""
    Date::month = 0;
    Date::day = 0;
    Date::year = 0;
} // end of Constructor

Date::init(std::string dateString){
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

    ss.clear();
    ss.str("");
    ss << sMonth << " " << sDay << " " << sYear;
    ss >> Date::month >> Date::day >> Date::year
} // end init Constructor

Date::printDate(){
    std::string counter[] = (NULL, "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December")
    std::cout << counter[Date::month] << " " << Date::day << ", " << Date::year << std::endl:
} // end printDate