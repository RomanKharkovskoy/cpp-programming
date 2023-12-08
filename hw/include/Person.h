#pragma once
#include <string>

class Person {
public:
    Person(const std::string& name, const std::string& phone);
    virtual ~Person();

    virtual void displayDetails() const = 0;

    const std::string& getName() const;
    const std::string& getPhone() const;

private:
    std::string name;
    std::string phone;
};
