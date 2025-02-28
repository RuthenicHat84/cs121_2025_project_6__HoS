// student.cpp
#include <iostream>
#include <sstream>
#include "student.h"

Student::Student(){
	Student::studentString = "";
	Student::firstName = "";
	Student::lastName = "";
	Student::birthday = new Date();
	Student::gradDate = new Date();
	Student::address = new Address();
	Student::credits = 0;
} // end constructor

Student::~Student(){
	delete birthday;
	delete gradDate;
	delete address;
} // end deconstructor

void Student::init(std::string studentString){

	Student::studentString = studentString;
	std::stringstream ss;
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string sBday;
	std::string sGrad;
	std::string sCredits;
	
	ss.clear();
	ss.str(studentString);

	getline(ss, Student::firstName, ',');
	getline(ss, Student::lastName, ',');
	getline(ss, street, ',');
	getline(ss, city, ',');
	getline(ss, state, ',');
	getline(ss, zip, ',');
	getline(ss, sBday, ',');
	getline(ss, sGrad, ',');
	getline(ss, sCredits);

	ss.clear();
	ss.str("");
	
	Student::address->init(street, city, state, zip);
	
	Student::birthday->init(sBday);
	Student::gradDate->init(sGrad);

    ss << sCredits;
	ss >> Student::credits;

} // end init

void Student::printStudent(){
	std::cout << Student::firstName << " " << Student::lastName << "\n";
	address->printAddress();
	std::cout << "Date of Birth: ";
	birthday->printDate();
	std::cout << "Expected Graduation Date: ";
	gradDate->printDate();
	std::cout << "Credit Hours: " << Student::credits << "\n";
} // end printStudent

/*
    Getters:
*/

std::string Student::getLastFirst(){
	std::stringstream ss;
	ss.clear();
	ss << Student::lastName << ", " << Student::firstName;
	return ss.str();
} // end getLastFirst

std::string Student::getFirst(){
	return Student::firstName;
} // end getFirst

std::string Student::getLast(){
	return Student::lastName;
} // end getLast

int Student::getCredits(){
	return Student::credits;
} // end getCredits