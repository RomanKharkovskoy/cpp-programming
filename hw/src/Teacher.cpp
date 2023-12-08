#include "Teacher.h"
#include <iostream>

Teacher::Teacher(const std::string& name, const std::string& phone, const std::string& subject)
    : Person(name, phone), subject(subject) {}

void Teacher::displayDetails() const {
    Person::displayDetails();
    std::cout << "Subject: " << subject << std::endl;
}

const std::string& Teacher::getSubject() const {
    return subject;
}
