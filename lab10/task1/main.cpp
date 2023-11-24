#include <iostream>
#include "dot.hpp"
#include "composition_triangle.hpp"
#include "aggregation_triangle.hpp"

int main() {
    // Создание точек
    Dot pointA(0, 0);
    Dot pointB(4, 0);
    Dot pointC(0, 3);

    CompositionTriangle compTriangle(pointA, pointB, pointC);
    std::cout << "Треугольник с композицией:" << std::endl;
    compTriangle.printSideLengths();
    std::cout << "Периметр: " << compTriangle.calculatePerimeter() << std::endl;
    std::cout << "Площадь: " << compTriangle.calculateArea() << std::endl;

    std::cout << std::endl;

    AggregationTriangle* aggTriangle = new AggregationTriangle(&pointA, &pointB, &pointC);
    std::cout << "Треугольник с агрегацией:" << std::endl;
    aggTriangle->printSideLengths();
    std::cout << "Периметр: " << aggTriangle->calculatePerimeter() << std::endl;
    std::cout << "Площадь: " << aggTriangle->calculateArea() << std::endl;

    return 0;
}
