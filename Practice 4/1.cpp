#include "iostream"
#include "math.h"

using namespace std;

int Myroot(double, double, double, double&, double&);

int main()
{
    double a, b, c, x1, x2;
    cout << "Введите коэффициенты a, b, c через пробел: ";
    cin >> a >> b >> c;

    int result = Myroot(a, b, c, x1, x2);
    switch (result)
    {
    case -1:
        cout << "Корней нет" << endl;
        break;
    case 1:
        cout << "Один корень: x = " << x1 << endl;;
        break;
    case 2:
        cout << "Два корня: x1 = " << x1 << "; " << "x2 = " << x2 << endl;
    default:
        break;
    }
    return 0;
}

int Myroot(double a, double b, double c, double &x1, double &x2)
{
    double D = pow(b, 2) - 4 * a * c;
    x1 = (-b + pow(D, 1.0 / 2)) / 2 / a;
    x2 = (-b - pow(D, 1.0 / 2)) / 2 / a;
    if (D < 0)
    {
        return -1;
    }
    if (D == 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}