#include "Student.h"
#include <iostream>

Student::Student(const std::string& name, const std::string& phone, const std::string& major)
    : Person(name, phone), major(major) {}

void Student::displayDetails() const {
    Person::displayDetails();
    std::cout << "Major: " << major << std::endl;
}

const std::string& Student::getMajor() const {
    return major;
}
