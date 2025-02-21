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

void Address::init(std::string street, std::string city, std::string state, std::string zip){
    Address::street = street;
    Address::city = city;
    Address::state = state;
    Address::zip = zip;
} // end init constructor

void Address::printAddress(){
    std::cout << "Street: " << street << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "State: " << state << std::endl;
    std::cout << "Zip: " << zip << std::endl;
} // end printAddress