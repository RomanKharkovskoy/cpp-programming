#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;

    // Если число <= 1, то можно сразу выводить результат
    if (n <= 2) 
    {
        cout << n << " - не суперпростое число" << endl;
        return 0;
    }

    // Иначе проверяем является ли число n простым 
    else
    {
        for (int i = 2; i*i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << n << " - не суперпростое число" << endl;
                return 0;
            }
        }
    }

    int count = 0;

    // Рассчитаем номер позиции числа n в списке простых чисел
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j*j <= i; i++)
        {
            if (i % j == 0)
            {
                break;
            }
            else
            {
                count++;
            }
        }
    }

    bool isSuperPrime = true; 

    // Проверим является ли номер позиции числа n простым числом
    for (int i = 2; i*i <= count; i++)
    {
        if (count % i == 0)
        {
            isSuperPrime = false;
            break;
        }
    }

    // Выводим результат в зависимости от флага isSuperPrime
    if (isSuperPrime)
    {
        cout << n << " - не суперпростое число" << endl;
    }
    else
    {
        cout << n << " - суперпростое число" << endl;
    }

    return 0;
}
