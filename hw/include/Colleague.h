#pragma once
#include "Person.h"

class Colleague : public Person {
public:
    Colleague(const std::string& name, const std::string& phone, const std::string& organization);
    void displayDetails() const override;
    const std::string& getOrganization() const;     

private:
    std::string organization;
};
