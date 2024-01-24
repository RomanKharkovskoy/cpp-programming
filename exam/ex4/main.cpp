#include <iostream>
#include <math.h>

using namespace std;

int main() {
    // Задача 1: sin(x) в диапазоне 0 до π с шагом π/4, используя цикл с предусловием
    cout << "Задача 1:" << endl;
    double x1 = 0.0;
    while (x1 <= M_PI) {
        cout << "sin(" << x1 << ") = " << sin(x1) << endl;
        x1 += M_PI / 4;
    }

    // Задача 2: sin(x) в диапазоне 0 до 2π с шагом π/2, используя цикл с постусловием
    cout << "\nЗадача 2:" << endl;
    double x2 = 0.0;
    do {
        cout << "sin(" << x2 << ") = " << sin(x2) << endl;
        x2 += M_PI / 2;
    } while (x2 <= 2 * M_PI);

    // Задача 3: x^3 в диапазоне 0 до 10 с шагом 2, используя цикл с предусловием
    cout << "\nЗадача 3:" << endl;
    int x3 = 0;
    while (x3 <= 10) {
        cout << x3 << "^3 = " << pow(x3, 3) << endl;
        x3 += 2;
    }

    // Задача 4: x^3 в диапазоне 10 до 12 с шагом 0.5, используя цикл с постусловием
    cout << "\nЗадача 4:" << endl;
    double x4 = 10.0;
    do {
        cout << x4 << "^3 = " << pow(x4, 3) << endl;
        x4 += 0.5;
    } while (x4 <= 12);

    return 0;
}
