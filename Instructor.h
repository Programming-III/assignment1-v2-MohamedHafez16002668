#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
Instructor class():public person{
    private:
    string department;
    int experienceYears;
    public:
    Instructor();
    Instructor(string department,int experienceYears);
    ~Instructor();
    void display();
}












#endif
