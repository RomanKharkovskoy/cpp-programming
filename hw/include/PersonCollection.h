#pragma once
#include <vector>
#include "Person.h"

class PersonCollection {
public:
    void addPerson(Person* person);
    void saveToFile(const std::string& filename) const;
    void displayAll() const;

private:
    std::vector<Person*> people;
};
