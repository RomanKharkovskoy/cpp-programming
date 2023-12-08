#include "Person.h"
#include <iostream>

Person::Person(const std::string& name, const std::string& phone) : name(name), phone(phone) {}

Person::~Person() {}

void Person::displayDetails() const {
    std::cout << "Name: " << name << "\nPhone: " << phone << std::endl;
}

const std::string& Person::getName() const {
    return name;
}

const std::string& Person::getPhone() const {
    return phone;
}
