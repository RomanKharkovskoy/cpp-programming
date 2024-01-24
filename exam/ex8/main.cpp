#include <iostream>

int reverseNumber(int num) {
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed;
}

int main() {
    int inputNumber;

    // Ввод целого числа с клавиатуры
    std::cout << "Введите целое число: ";
    std::cin >> inputNumber;

    // Вызов функции для обращения порядка цифр
    int reversedNumber = reverseNumber(inputNumber);

    // Вывод результата
    std::cout << "Число с обратным порядком цифр: " << reversedNumber << std::endl;

    return 0;
}
