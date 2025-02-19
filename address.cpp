// address.cpp
#include <iostream>
#include <string>
#include "address.h"

Address::Address(){
    Address::street = "";
    Address::city = "";
    Address::state = "";
    Address::zip = "";
} // end constructor

void Address::init(std::string street, std::city city, std::state state, std::zip zip){
    Address::street = street;
    Address::city = city;
    Address::state = state;
    Address::zip = zip;
} // end init constructor

void Address::printAddress(){
    std::cout << street << std::endl;
    std::cout << city << std::endl;
    std::cout << state << std::endl;
    std::cout << zip << std::endl;
} // end printAddress