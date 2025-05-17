#include <iostream>
#include "Person.h"

Person::Person(const std::string& name, int age)
    : name(name), age(age) {}

void Person::introduce() const {
    std::cout << "Hi, I'm " << name << " and I'm " << age << " years old." << std::endl;
}
