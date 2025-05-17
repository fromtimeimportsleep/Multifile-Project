#include "Person.h"
#include "Student.h"

int main() {
    Person p("Alice", 30);
    p.introduce();

    Student s("Bob", 20, "IIT Bombay");
    s.introduce();

    return 0;
}
