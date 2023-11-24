#include "aggregation_triangle.h"
#include <iostream>
#include "math.h"

AggregationTriangle::AggregationTriangle(Dot* p1, Dot* p2, Dot* p3)
    : point1(p1), point2(p2), point3(p3)
{
}

AggregationTriangle::~AggregationTriangle()
{
    delete point1;
    delete point2;
    delete point3;
}

void AggregationTriangle::printSideLengths()
{
    std::cout << "Side 1: " << point1->distanceTo(*point2) << std::endl;
    std::cout << "Side 2: " << point2->distanceTo(*point3) << std::endl;
    std::cout << "Side 3: " << point3->distanceTo(*point1) << std::endl;
}

double AggregationTriangle::calculatePerimeter()
{
    return point1->distanceTo(*point2) + point2->distanceTo(*point3) + point3->distanceTo(*point1);
}


double AggregationTriangle::calculateArea()
{
    // Формула Герона
    double a = point1->distanceTo(*point2);
    double b = point2->distanceTo(*point3);
    double c = point3->distanceTo(*point1);

    double s = (a + b + c) / 2;

    return sqrt(s * (s - a) * (s - b) * (s - c));
}
