#include <iostream>
#include "dot.h"
#include "composition_triangle.h"
#include "aggregation_triangle.h"

int main() {
    // Создание точек
    Dot pointA(0, 0);
    Dot pointB(4, 0);
    Dot pointC(0, 3);

    // Использование композиции
    CompositionTriangle compTriangle(pointA, pointB, pointC);
    std::cout << "Composition Triangle:" << std::endl;
    compTriangle.printSideLengths();
    std::cout << "Perimeter: " << compTriangle.calculatePerimeter() << std::endl;
    std::cout << "Area: " << compTriangle.calculateArea() << std::endl;

    std::cout << std::endl;

    // Использование агрегации
    AggregationTriangle* aggTriangle = new AggregationTriangle(&pointA, &pointB, &pointC);
    std::cout << "Aggregation Triangle:" << std::endl;
    aggTriangle->printSideLengths();
    std::cout << "Perimeter: " << aggTriangle->calculatePerimeter() << std::endl;
    std::cout << "Area: " << aggTriangle->calculateArea() << std::endl;

    // Освобождение памяти, выделенной для объекта AggregationTriangle
    delete aggTriangle;

    return 0;
}
