#include <iostream>
#include <cmath>

using namespace std;

struct QuadraticSolution {
    double root1;
    double root2;
};

QuadraticSolution solveQuadraticEquation(double a, double b, double c) {
    QuadraticSolution solution;

    double discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        solution.root1 = (-b + sqrt(discriminant)) / (2 * a);
        solution.root2 = (-b - sqrt(discriminant)) / (2 * a);
    } else {
        cout << "Уравнение имеет комплексные корни.\n";
        solution.root1 = solution.root2 = NAN;
    }

    return solution;
}

int main() {
    double a, b, c;

    cout << "Введите коэффициенты квадратного уравнения (a, b, c): ";
    cin >> a >> b >> c;

    QuadraticSolution solution = solveQuadraticEquation(a, b, c);

    if (!isnan(solution.root1)) {
        cout << "Корень 1: " << solution.root1 << endl;
    }

    if (!isnan(solution.root2)) {
        cout << "Корень 2: " << solution.root2 << endl;
    }

    return 0;
}
