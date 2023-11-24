#ifndef COMPOSITION_TRIANGLE_H
#define COMPOSITION_TRIANGLE_H

#include "dot.hpp"

class CompositionTriangle
{
private:
    Dot point1;
    Dot point2;
    Dot point3;

public:
    CompositionTriangle(const Dot& p1, const Dot& p2, const Dot& p3);
    void printSideLengths();
    double calculatePerimeter();
    double calculateArea();
};

#endif
