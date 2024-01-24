#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
    float height;
};

int main() {
    Person person1;
    person1.name = "John Doe";
    person1.age = 30;
    person1.height = 175.5;

    std::cout << "Person: " << person1.name << ", Age: " << person1.age << ", Height: " << person1.height << " cm\n";

    return 0;
}
