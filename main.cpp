// main.cpp
#include "address.h"
#include "date.h"
#include "student.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

std::string menu();


int main() {
    bool isRunning = true;

    while (isRunning) {
        // Get the input from the menu
        std::string input = menu();

        // Perform actions based on the input
        if (input == "0") {
            isRunning = false;  // Exit the loop
        } // end if
        else if (input == "1") {
            std::cout << "You chose 1! Functionality is coming soon!" << std::endl;
        } // end if
        else if (input == "2") {
            std::cout << "You chose 2! Functionality is coming soon!!" << std::endl;
        } // end if
        else if (input == "3") {
            std::cout << "You chose 3! Functionality is coming soon!!!" << std::endl;
        } // end if
        else{
            std::cout << "The value chosen does not exist in the list of commands. Please try again!" << std::endl;
        } // end else
    } // end while

    return 0;
} // end main

std::string menu() {
    std::string input;
    std::cout << std::endl << "Welcome to the Student Database!" << std::endl
              << "0) Quit" << std::endl
              << "1) Print All" << std::endl
              << "2) Print Names" << std::endl
              << "3) Search Student" << std::endl
              << "Please Enter a Number (0-3): ";

    std::cin >> input;
    std::cout << std::endl;

    return input; 
} // end menu

 /* 
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
    
    delete student;
*/