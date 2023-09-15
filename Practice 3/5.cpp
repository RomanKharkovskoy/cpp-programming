#include "iostream"
#include "string"

using namespace std;

string decToBin(int num, string bin = "")
{
    if (num == 0)
    {
        return "0";
    }
    if (num == 1)
    {
        return "1";
    }
    return decToBin(num / 2) + to_string(num % 2);

}

int main()
{
    int n;
    cout << "Введите число для перевода в двоичную систему счисления: ";
    cin >> n;

    cout << n << "(10) = " << decToBin(n) << "(2)" << endl; 
    return 0;
}