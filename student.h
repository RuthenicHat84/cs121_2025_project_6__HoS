// student.h
#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include "address.h"
#include "date.h"


class Student{
    protected:
        std::string studentString;
        std::string firstName;
        std::string lastName;
        int credits;

        Date* birthday;
        Date* gradDate;
        Address* address;

    public:
        Student();
        ~Student();
        void init(std::string studentString);
        void printStudent();
        std::string getLastFirst();
        std::string getFirst();
        std::string getLast();
        int getCredits();
}; // end of Student Class

#endif