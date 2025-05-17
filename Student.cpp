#include <iostream>
#include "Student.h"

Student::Student(const std::string& name, int age, const std::string& university)
    : Person(name, age), university(university) {}

void Student::introduce() const {
    std::cout << "Hi, I'm " << name << ", " << age 
              << " years old, and I study at " << university << "." << std::endl;
}
