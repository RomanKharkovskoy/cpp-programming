#include "iostream"

using namespace std;

// Функция, которая будет складывать числа вида 5*n от 1 до 5
int sumSeries(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 5 * n + sumSeries(n - 1);
}

int main()
{
    // Тестируем написанную функцию
    int n;
    cout << "Введите номер последнего члена прогрессии: ";
    cin >> n;
    cout << "Сумма членов прогрессии: " << sumSeries(n) << endl;
    return 0;
}