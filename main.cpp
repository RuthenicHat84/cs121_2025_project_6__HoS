// main.cpp
#include "address.h"
#include "date.h"
#include "student.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

std::string PrintMenu();
void LoadAll(std::vector<Student*>& students);
void DeleteAll(std::vector<Student*>& students);
void PrintAll(std::vector<Student*>& students);
void PrintByLastFirst(std::vector<Student*>& students);
void Search(std::vector<Student*>& students);

int main() {
    bool isRunning = true;
    std::vector<Student*> students;
    LoadAll(students);

    while (isRunning) {
        std::string input = PrintMenu();

        if (input == "0") {
            std::cout << "Thank You for Using the Student Database!" << "\n";
            isRunning = false;
        } // end if
        else if (input == "1") {
            PrintAll(students);
        } // end if
        else if (input == "2") {
            PrintByLastFirst(students);
        } // end if
        else if (input == "3") {
            Search(students);
        } // end if
        else {
            std::cout << "Invalid Input. Please Try Again!" << "\n";
        } // end else
    } // end while

    DeleteAll(students);
    return 0;
} // end Main

std::string PrintMenu() {
    std::string input;
    std::cout << "\n" << "Welcome to the Student Database!" << "\n"
              << "0) Quit" << "\n"
              << "1) Print All" << "\n"
              << "2) Print Names" << "\n"
              << "3) Search Student" << "\n"
              << "Please Enter a Number (0-3): ";

    std::cin >> input;
    std::cout << "\n";

    return input; 
} // end menu

void LoadAll(std::vector<Student*>& students){
    std::ifstream inFile;
    std::string currentLine;
    inFile.open("students.csv");

    while(getline(inFile, currentLine)){
        
        Student* student = new Student();
        student->init(currentLine);

        students.push_back(student);
    } // end while

    inFile.close();
} // end loadAll

void DeleteAll(std::vector<Student*>& students) {
    for (auto& item : students) {
        delete item;
    } // end for
    students.clear();
} // end DeleteAll

void PrintAll(std::vector<Student*>& students){
    for(auto& item: students){
        item->printStudent();
        std::cout << "\n";
    } // end for
} // end PrintAll

void PrintByLastFirst(std::vector<Student*>& students) {
    for (auto& item : students) {
        std::cout << item->getLastFirst() << "\n";
    } // end for
} // end PrintByLastFirst

void Search(std::vector<Student*>& students) {
    std::string search, lastName;
    std::stringstream ss;
    int count = 1;
    bool hasFound = false;

    std::cout << "Enter Last Name of Student: ";
    std::cin >> search;
    std::cout << "\n" << "Results for " << search << "\n";

    for (auto& item : students) {
        ss.clear();
        ss.str(item->getLastFirst());
        getline(ss, lastName, ',');

        if (lastName.find(search) != std::string::npos) {
            hasFound = true;
            std::cout << count << ">" << "\n";
            item->printStudent();
            count++;
            std::cout << "\n";
        } // end if
    } // end for

    if (!hasFound) {
        std::cout << "No Results Found for " << search << "\n";
    } // end if
} // end Search