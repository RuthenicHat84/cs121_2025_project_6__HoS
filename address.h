//address.h

#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <iostream>

class Address{
    protected:
        std::string street;
        std::string city;
        std::string state;
        std::string zip;

    public:
        Address();
        void init(street, city, state, zip);
        void printAddress();
}; // end of Address Class

#endif // end address.h