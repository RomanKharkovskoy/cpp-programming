#include <iostream>
#include <math.h>

using namespace std;

// Функция для вычисления факториала числа
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Функция для определения четности числа
bool isEven(int n) {
    return (n % 2 == 0);
}

// Функция для вычисления квадратного корня числа
double squareRoot(int n) {
    return sqrt(n);
}

// Функция для вычисления суммы всех целых чисел в диапазоне от 0 до заданного числа
int sumUpTo(int n) {
    int sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    // Пример использования функций
    int number = 5;

    cout << "Факториал числа " << number << ": " << factorial(number) << endl;
    cout << "Число " << number << " " << (isEven(number) ? "четное" : "нечетное") << endl;
    cout << "Квадратный корень из числа " << number << ": " << squareRoot(number) << endl;
    cout << "Сумма всех целых чисел от 0 до " << number << ": " << sumUpTo(number) << endl;

    return 0;
}
