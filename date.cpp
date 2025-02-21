//date.cpp
#include <iostream>
#include <string>
#include <sstream>
#include "date.h"

Date::Date(){
    Date::dateString = "";
    Date::month = 0;
    Date::day = 0;
    Date::year = 0;
} // end of Constructor

void Date::init(std::string dateString){
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
    ss >> Date::month >> Date::day >> Date::year;

    Date::month = month;

    ss.clear();
    ss.str("");
} // end init Constructor

void Date::printDate(){
    std::string MoY[13] = {NULL, "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; // Months of Year
    std::cout << MoY[Date::month] << " " << Date::day << ", " << Date::year << std::endl;
} // end printDate