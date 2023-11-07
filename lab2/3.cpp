#include <iostream>

using namespace std;

int main() {
    int changeAmount;
    cout << "Введите сумму сдачи (в рублях): ";
    cin >> changeAmount;

    int numCoins;

    // Выгоднее будет выдать максимальное число монет десятирублёвыми монетами
    numCoins = changeAmount / 10;
    changeAmount %= 10;
    if (numCoins > 0) 
    {
        cout << "Номинал 10 рублей: " << numCoins << " монет" << endl;
    }

    // Проводим подобную операцию для остальных номиналов монет
    numCoins = changeAmount / 5;
    changeAmount %= 5;
    if (numCoins > 0) 
    {
        cout << "Номинал 5 рублей: " << numCoins << " монет" << endl;
    }

    numCoins = changeAmount / 2;
    changeAmount %= 2;
    if (numCoins > 0) 
    {
        cout << "Номинал 2 рубля: " << numCoins << " монет" << endl;
    }

    numCoins = changeAmount;
    if (numCoins > 0) 
    {
        cout << "Номинал 1 рубль: " << numCoins << " монет" << endl;
    }

    return 0;
}
