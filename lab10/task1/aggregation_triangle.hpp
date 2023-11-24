#ifndef AGGREGATION_TRIANGLE_H
#define AGGREGATION_TRIANGLE_H

#include "dot.hpp"

class AggregationTriangle
{
private:
    Dot* point1;
    Dot* point2;
    Dot* point3;

public:
    AggregationTriangle(Dot* p1, Dot* p2, Dot* p3);
    ~AggregationTriangle();
    void printSideLengths();
    double calculatePerimeter();
    double calculateArea();
};

#endif
