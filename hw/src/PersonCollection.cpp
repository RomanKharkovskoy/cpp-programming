#include "PersonCollection.h"
#include <iostream>
#include <fstream>
#include "Student.h"
#include "Teacher.h"
#include "Colleague.h"

void PersonCollection::addPerson(Person* person) {
    people.push_back(person);
}

void PersonCollection::displayAll() const {
    for (const auto& person : people) {
        person->displayDetails();
        std::cout << "-------------------------" << std::endl;
    }
}
void PersonCollection::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto& person : people) {
            file << "Name: " << person->getName() << "\nPhone: " << person->getPhone() << std::endl;
            person->displayDetails();

            if (dynamic_cast<Student*>(person) != nullptr) {
                auto student = dynamic_cast<Student*>(person);
                file << "Type: Student\nMajor: " << student->getMajor() << std::endl;

            } else if (dynamic_cast<Teacher*>(person) != nullptr) {
                auto teacher = dynamic_cast<Teacher*>(person);
                file << "Type: Teacher\nSubject: " << teacher->getSubject() << std::endl;
                
            } else if (dynamic_cast<Colleague*>(person) != nullptr) {
                auto colleague = dynamic_cast<Colleague*>(person);
                file << "Type: Colleague\nOrganization: " << colleague->getOrganization() << std::endl;
            }

            file << "-------------------------\n";
        }
        file.close();
        std::cout << "Data saved to file: " << filename << std::endl;
    } else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
}
