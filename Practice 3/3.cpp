#include "iostream"
#include "math.h"

using namespace std;

// Функция для рассчёта площади равностороннего треугольника
double triangleArea(double side)
{
    double area = pow(3, 1.0/2) / 4 * pow(side, 2);
    return area;
}

// Функция (перегруженная) для рассчёта площади разностороннего треугольника 
double triangleArea(double a, double b, double c)
{
    double halfPerimetr = (a + b + c) / 2;
    double area = pow(halfPerimetr*(halfPerimetr - a)*(halfPerimetr - b)*(halfPerimetr - c), 1.0/2);
    return area;
}

int main()
{
    // Пользователь выбирает вид треугольника
    char choise;
    cout << "Выберите вид треугольника: 1 - Равносторонний, 2 - Разносторонний\n Выбор: ";
    cin >> choise;
    
    // Используем оператор switch для определения количества параметров, передаваемых в функцию
    switch (choise)
    {
    case '1':
        double side;
        cout << "Введите длину стороны: ";
        cin >> side;
        cout << "Площадь вашего треугольника равна " << triangleArea(side) << endl;
        break;
    case '2':
        double a, b, c;
        cout << "Введите длины сторон через пробел: ";
        cin >> a >> b >> c;
        cout << "Площадь вашего треугольника равна " << triangleArea(a, b, c) << endl;
        break;
    
    default:
        cout << "Выберите из предложенного списка (1 или 2)";
        break;
    }

    return 0;
}