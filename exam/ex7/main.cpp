#include <iostream>
#include <string>

class Person {
public:
    // Публичные методы для установки и получения значений полей
    void setFullName(const std::string& firstName, const std::string& middleName, const std::string& lastName) {
        this->firstName = firstName;
        this->middleName = middleName;
        this->lastName = lastName;
    }

    std::string getFullName() const {
        return firstName + " " + middleName + " " + lastName;
    }

private:
    // Приватные поля класса
    std::string firstName;
    std::string middleName;
    std::string lastName;
};

int main() {
    // Создаем объекты класса Person
    Person person1, person2;

    // Вводим с клавиатуры данные для первого объекта
    std::string firstName1, middleName1, lastName1;
    std::cout << "Введите имя, отчество и фамилию для первого человека:" << std::endl;
    std::cin >> firstName1 >> middleName1 >> lastName1;

    // Устанавливаем значения для первого объекта
    person1.setFullName(firstName1, middleName1, lastName1);

    // Вводим с клавиатуры данные для второго объекта
    std::string firstName2, middleName2, lastName2;
    std::cout << "Введите имя, отчество и фамилию для второго человека:" << std::endl;
    std::cin >> firstName2 >> middleName2 >> lastName2;

    // Устанавливаем значения для второго объекта
    person2.setFullName(firstName2, middleName2, lastName2);

    // Выводим данные о двух созданных людях
    std::cout << "Данные о первом человеке: " << person1.getFullName() << std::endl;
    std::cout << "Данные о втором человеке: " << person2.getFullName() << std::endl;

    return 0;
}
