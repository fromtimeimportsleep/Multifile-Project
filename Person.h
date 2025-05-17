#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age);
    void introduce() const;
};

#endif
