#include "iostream"

using namespace std;

bool Input(int&, int&);

int main()
{
    int a, b;
    if (Input(a,b)== false)
    {
        cerr << "error" << endl;
        return 1;
    }
    int s = a + b;
    cout << s << endl;
    return 0;
}

bool Input(int &a, int &b)
{
    cout << "Введите значения a и b через пробел: ";
    cin >> a >> b;
    if ((a > INT32_MAX - b) || (a < INT32_MAX - b))
    {
        return false;
    }
    return true;
}