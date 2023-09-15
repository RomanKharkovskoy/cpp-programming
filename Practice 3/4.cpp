#include "iostream"

using namespace std;

int recursiveSeries(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 5 * n + recursiveSeries(n - 1);
}

int main()
{
    int n;
    cout << "Введите номер последнего члена прогрессии: ";
    cin >> n;
    cout << "Сумма членов прогрессии: " << recursiveSeries(n) << endl;
    return 0;
}