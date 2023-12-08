#pragma once
#include "Person.h"

class Student : public Person {
public:
    Student(const std::string& name, const std::string& phone, const std::string& major);
    void displayDetails() const override;
    const std::string& getMajor() const;

private:
    std::string major;
};
