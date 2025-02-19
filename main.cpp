// main.cpp
#include "address.h"
#include <iostream>

int main(){
    std::cout << "test" << std::endl;
    Address a;
    a.init("Bartley Drive", "Noblesville", "Indiana", "46062");
    a.printAddress();
    return 0;
} // end main
