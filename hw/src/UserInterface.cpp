#include "UserInterface.h"
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Colleague.h"

UserInterface::UserInterface(PersonCollection& collection) : collection(collection) {}

void UserInterface::start() {
    int choice;
    do {
        std::cout << "1. Add person\n2. Display all\n3. Save to file\n0. Exit\n";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1: {
                std::string name, phone, specialization;
                int personType;
                
                std::cout << "Enter name: ";
                std::getline(std::cin, name);
                
                std::cout << "Enter phone: ";
                std::cin >> phone;
                
                std::cout << "Choose person type:\n1. Student\n2. Teacher\n3. Colleague\n";
                std::cin >> personType;

                Person* person = nullptr;
                switch (personType) {
                    case 1: {
                        std::cout << "Enter major: ";
                        std::cin.ignore(); 
                        std::getline(std::cin, specialization);
                        person = new Student(name, phone, specialization);
                        break;
                    }
                    case 2: {
                        std::cout << "Enter subject: ";
                        std::cin.ignore();
                        std::getline(std::cin, specialization);
                        person = new Teacher(name, phone, specialization);
                        break;
                    }
                    case 3: {
                        std::cout << "Enter organization: ";
                        std::cin.ignore();
                        std::getline(std::cin, specialization);
                        person = new Colleague(name, phone, specialization);
                        break;
                    }
                    default:
                        std::cerr << "Invalid person type!\n";
                        continue;
                }

                collection.addPerson(person);
                break;
            }
            case 2:
                collection.displayAll();
                break;
            case 3: {
                std::string filename;
                std::cout << "Enter filename to save: ";
                std::cin >> filename;
                collection.saveToFile(filename);
                break;
            }
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cerr << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);
}