#include "student.h"
#include <string>
#include <iostream>

void student::setName(std::string first, std::string last)
{
        //student=firstName+" "+lastName;
        firstName = first;
        lastName = last;
}
std::string student::fullName()
{
        std::string studentName;
        studentName = firstName+" "+lastName;
        
        return studentName;
}
