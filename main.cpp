// main.cpp
#include "address.h"
#include "date.h"
#include <iostream>

int main(){
    std::cout << "test" << std::endl;
    Address a;
    a.init("Bartley Drive", "Noblesville", "Indiana", "46062");
    a.printAddress();
    
    Date b;
    b.init("09/26/2003");
    b.printDate();
    b.init("11/20/1995");
    b.printDate();
    return 0;
} // end main
