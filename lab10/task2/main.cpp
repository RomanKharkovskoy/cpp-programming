#include "dot.h"
#include "iostream"

int main(int argc, char const *argv[])
{
    Dot tochka(10, 20);
    Dot tochka2(10, 20);
    std::cout << tochka.distanceTo(tochka2);
    return 0;
}
