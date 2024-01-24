#include <iostream>

// Функция для вычисления наибольшего общего делителя (НОД) двух чисел
int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Ввод двух целых чисел с клавиатуры
    std::cout << "Введите первое целое число: ";
    std::cin >> num1;
    std::cout << "Введите второе целое число: ";
    std::cin >> num2;

    // Вызов функции для вычисления НОД и вывод результата
    int result = nod(num1, num2);
    std::cout << "Наибольший общий делитель: " << result << std::endl;

    return 0;
}
