#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    std::string university;

public:
    Student(const std::string& name, int age, const std::string& university);
    void introduce() const; // Override
};

#endif
