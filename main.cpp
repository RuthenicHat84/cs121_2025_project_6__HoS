// main.cpp
#include "address.h"
#include "date.h"
#include "student.h"
#include <iostream>


int main(){
    std::cout << std::endl;
    std::cout << "Test Address:" << std::endl << "~~~~~~~~~~~~~~~" << std::endl;
    Address a;
    a.init("123 Adoline Rd.", "Bumbletown", "USA", "753402");
    a.printAddress();
    
    std::cout << std::endl << "Test Date: " << std::endl << "~~~~~~~~~~~~~~~" << std::endl;
    Date b;
    b.init("09/26/2003");
    b.printDate();

    std::cout << std::endl << "Test Student:" << std::endl << "~~~~~~~~~~~~~~~" << std::endl;
    std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
    Student* student = new Student();
    student->init(studentString);
    student->printStudent();

    /*
    std::cout << std::endl << "Test Student Getters:" << std::endl << "~~~~~~~~~~~~~~~" << std::endl;
    std::cout << std::endl;
    student->getLastFirst();
    std::cout << std::endl;
    student->getFirst();
    std::cout << std::endl;
    student->getLast();
    std::cout << std::endl;
    student->getCredits();
    std::cout << std::endl;
    */
    delete student;

    return 0;
} // end main

