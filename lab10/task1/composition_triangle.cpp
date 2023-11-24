#include "composition_triangle.hpp"
#include <iostream>
#include "math.h"

CompositionTriangle::CompositionTriangle(const Dot& p1, const Dot& p2, const Dot& p3)
    : point1(p1), point2(p2), point3(p3)
{
}

void CompositionTriangle::printSideLengths()
{
    std::cout << "Сторона 1: " << point1.distanceTo(point2) << std::endl;
    std::cout << "Сторона 2: " << point2.distanceTo(point3) << std::endl;
    std::cout << "Сторона 3: " << point3.distanceTo(point1) << std::endl;
}

double CompositionTriangle::calculatePerimeter()
{
    return point1.distanceTo(point2) + point2.distanceTo(point3) + point3.distanceTo(point1);
}

double CompositionTriangle::calculateArea()
{
    double a = point1.distanceTo(point2);
    double b = point2.distanceTo(point3);
    double c = point3.distanceTo(point1);
    double s = calculatePerimeter() / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
