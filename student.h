// start student.h
#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <iostream>
#include address.h 
#include date.h 


class Student{
    protected:
        std::string studentString;
        std::string firstName;
        std::string firstName;
        int credits;

        Date::* dob;
        Date::* gradDate;
        Address::* Address;

    public:
        Student();
        ~Student();
        void init(studentString);
        void printStudent();
        std::string getLastFirst();
}; // end of Student Class

#endif // end student.h