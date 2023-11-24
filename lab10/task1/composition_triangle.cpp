#include "composition_triangle.h"
#include <iostream>

CompositionTriangle::CompositionTriangle(const Dot& p1, const Dot& p2, const Dot& p3)
    : point1(p1), point2(p2), point3(p3)
{
}

void CompositionTriangle::printSideLengths()
{
    std::cout << "Side 1: " << point1.distanceTo(point2) << std::endl;
    std::cout << "Side 2: " << point2.distanceTo(point3) << std::endl;
    std::cout << "Side 3: " << point3.distanceTo(point1) << std::endl;
}

double CompositionTriangle::calculatePerimeter()
{
    return point1.distanceTo(point2) + point2.distanceTo(point3) + point3.distanceTo(point1);
}

double CompositionTriangle::calculateArea()
{
    // В данном примере не реализован метод расчета площади треугольника
    // Добавьте свою реализацию, например, по формуле Герона
    return 0.0;
}
