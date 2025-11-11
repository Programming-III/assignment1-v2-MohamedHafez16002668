#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
Course class:public Student{
private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;
public:
Couese();
Course(string courseCode, string courseName, int maxStudents, Student &students);
~Course();
string addStudent(const Student& s);
void displayCourseInfo();


}









#endif
