#include <iostream>
#include <math.h>

struct MathOperations {
    double a;
    double b;
    double c;

    // Метод для вычисления суммы a + b + c
    double sum() const {
        return a + b + c;
    }

    // Метод для вычисления произведения a * b * c
    double product() const {
        return a * b * c;
    }

    // Метод для вычисления частного a / b / c
    double division() const {
        if (b == 0 || c == 0) {
            std::cerr << "Ошибка: деление на ноль!" << std::endl;
            return 0.0;  // Возвращаем 0 в случае ошибки деления на ноль
        }
        return a / b / c;
    }

    // Метод для вычисления a**(b+c)
    double power() const {
        return std::pow(a, b + c);
    }
};

int main() {
    // Пример использования структуры и её методов
    MathOperations values;
    
    // Инициализация переменных
    values.a = 2.0;
    values.b = 3.0;
    values.c = 4.0;

    // Вычисление и вывод результатов
    std::cout << "Сумма a + b + c: " << values.sum() << std::endl;
    std::cout << "Произведение a * b * c: " << values.product() << std::endl;
    
    // Пример деления с проверкой на деление на ноль
    double resultDivision = values.division();
    if (resultDivision != 0.0) {
        std::cout << "Частное a / b / c: " << resultDivision << std::endl;
    }

    std::cout << "a**(b+c): " << values.power() << std::endl;

    return 0;
}
