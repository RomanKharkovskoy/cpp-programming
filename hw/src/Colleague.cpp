#include "Colleague.h"
#include <iostream>

Colleague::Colleague(const std::string& name, const std::string& phone, const std::string& organization)
    : Person(name, phone), organization(organization) {}

void Colleague::displayDetails() const {
    Person::displayDetails();
    std::cout << "Organization: " << organization << std::endl;
}

const std::string& Colleague::getOrganization() const {
    return organization;
}
