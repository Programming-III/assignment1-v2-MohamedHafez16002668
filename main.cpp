#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
#include <iostream>
#include <string>
using namespace std;
Person::Person(){
        name ="";
        id = 0;
    }
    
    Person::Person(string name, int id){
        this->name=name;
        this->id=id;
    }
    void Person::display(){
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
        
    Student::Student(){
        int yearLevel = 0;
        string major="";
    }
    Student::Student(int yearLevel,string major){
        this->yearLevel=yearLevel;
        this->major=major;
        
    }
    void Student::display(){
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"yearLevel:"<<yearLevel<<endl;
        cout<<"Major:"<<Major<<endl;
    }
    
    Instructor::Instructor(){
        department = "";
        experienceYears=0;
    }
    Instructor::Instructor(string department , int experienceYears){
        department->department=department;
        experienceYears->experienceYears=experienceYears;
    }
    void Instructor::display(){
        cout<<"department:"<<department<<endl;
        cout<<"experienceYears:"<<experienceYears<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        
    }
    Course::Course(){
        courseCode ="";
        courseName="";
        maxStudents=0;
        *students;
        currentStudents=0;
        
    }
    Course(string courseCode, string courseName, int maxStudents, Student &students){
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->maxStudents=maxStudents;
        this->students=students;
        
    }
    
    void Course::displayCourseInfo(){
        cout<<"courseCode:"<<courseCode<<endl;
        cout<<"courseName:"<<courseName<<endl;
        cout<<"maxStudents:"<<maxStudents<<endl;
        cout<<"students:"<<students<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        
    }
    
    
    
    
    
    
    
        
int main()
{
    
    
    
    
    
    }
    
    
    
    
    
    
    return 0;
}
