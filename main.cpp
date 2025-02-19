// main.cpp
#include "address.h"
#include <iostream>

main(){
    std::cout << "test" << endl;
    Address a;
    a.init(Bartley Drive, Noblesville, Indiana, 46062);
    a.printAddress();
} // end main