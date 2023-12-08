#pragma once
#include "Person.h"

class Teacher : public Person {
public:
    Teacher(const std::string& name, const std::string& phone, const std::string& subject);
    void displayDetails() const override;
    const std::string& getSubject() const; 

private:
    std::string subject;
};
