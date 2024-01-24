#include <iostream>
#include <math.h>

using namespace std;

// Процедура для вычисления и вывода площади квадрата
void areaOfSquare(double side) {
    double area = pow(side, 2);
    cout << "Площадь квадрата с длиной стороны " << side << " равна: " << area << endl;
}

// Процедура для вычисления и вывода площади прямоугольника
void areaOfRectangle(double length, double width) {
    double area = length * width;
    cout << "Площадь прямоугольника с длиной " << length << " и шириной " << width << " равна: " << area << endl;
}

// Процедура для вычисления и вывода площади прямоугольного треугольника
void areaOfRightTriangle(double base, double height) {
    double area = 0.5 * base * height;
    cout << "Площадь прямоугольного треугольника с основанием " << base << " и высотой " << height << " равна: " << area << endl;
}

// Процедура для вычисления и вывода площади круга
void areaOfCircle(double radius) {
    double area = M_PI * radius * radius;
    cout << "Площадь круга с радиусом " << radius << " равна: " << area << endl;
}

int main() {
    // Выберем произвольные параметры для геометрических фигур
    double side = 5.0;
    double length = 8.0;
    double width = 4.0;
    double base = 6.0;
    double height = 3.0;
    double radius = 2.5;

    // Вычисляем и выводим площади
    areaOfSquare(side);
    areaOfRectangle(length, width);
    areaOfRightTriangle(base, height);
    areaOfCircle(radius);

    return 0;
}
