#include "iostream"
#include "math.h"

using namespace std;

// Функция для вычисления кубического корня из числа иттеративным методом
double cubeRoot(double a, double temp = 1.0, double epsilon = 1e-9)
{
    double x = (2.0 * temp + a / (temp * temp)) / 3.0;
    if (abs(x - temp) < epsilon)
    {
        return x;
    }
    return cubeRoot(a, x, epsilon);
}

int main()
{
    double a;
    cout << "Введите число для извлечения кубического корня: ";
    cin >> a;
    double result = cubeRoot(a);
    cout << "Кубический корень из " << a << " по иттерационной формуле равен \t" << result << endl;
    cout << "Кубический корень из " << a << " по встроенной функции pow() равен \t" << pow(a, 1.0/3) << endl;
    return 0;
}

// Отличие между написанной функцией и встроенной функцией pow() в ограниченности функции cubeRoot значением epsilon