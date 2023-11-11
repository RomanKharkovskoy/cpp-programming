#include <iostream>
#include <tuple>
#include <cmath>

using namespace std;

tuple<bool, double, double> solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {

        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        return make_tuple(true, root1, root2);
    } else {

        cout << "Уравнение имеет комплексные корни.\n";
        return make_tuple(false, 0.0, 0.0);  
    }
}

int main() {
    double a, b, c;

    cout << "Введите коэффициенты квадратного уравнения (a, b, c): ";
    cin >> a >> b >> c;

    auto result = solveQuadraticEquation(a, b, c);

    bool rootsExist = get<0>(result);
    if (rootsExist) {
        double root1 = get<1>(result);
        double root2 = get<2>(result);
        cout << "Корень 1: " << root1 << endl;
        cout << "Корень 2: " << root2 << endl;
    } else {
        cout << "Уравнение не имеет действительных корней.\n";
    }

    return 0;
}
