#include "dot.hpp"
#include <cmath>

Dot::Dot()
{
    x = 0;
    y = 0;
}

Dot::Dot(double xx, double yy)
{
    x = xx;
    y = yy;
}

double Dot::distanceTo(const Dot& point)
{
    return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
}
