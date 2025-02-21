// date.cpp
#include <iostream>
#include <sstream>
#include "date.h"

Date::Date(){
    Date::dateString = "00/00/0000";
    Date::month = 0;
    Date::day = 0;
    Date::year = 0;
} // end constructor

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

    ss.clear();
    ss.str("");

    ss << sMonth << " " << sDay << " " << sYear;
    ss >> Date::month >> Date::day >> Date::year;

    if(ss.fail()){ // fail statement
        std::cout << "failed to initialize" << std::endl;
    } // end if

    ss.clear();
    ss.str("");
} // end init

void Date::printDate(){
    std::string MoY[] = {"NULL", "January", "February", "March", 
                            "April", "May", "June", 
                            "July", "August", "September",
                            "October", "November", "December"}; // Months of the Year
    std::cout << MoY[Date::month] << " " << Date::day << ", " << Date::year << std::endl;

} // end printDate