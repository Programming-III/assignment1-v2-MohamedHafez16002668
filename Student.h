#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;
Student class():public Person{
    private:
    int yearLevel;
    string major;
    public:
    Student();
    Student(int yearLevel,string major);
    ~Student();
    void display();
    
    
    
    
    
}












#endif
