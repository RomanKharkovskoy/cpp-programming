#include "iostream"
#include "string"

using namespace std;

int main()
{
    string snils, number, control;
    cout << "Введите свой СНИЛС: ";
    cin >> snils;
    if (snils.size() == 11){
        number = snils.substr(0, 9);
        control = snils.substr(9, 2);
    }
    else{
        cout << "Введите корректный СНИЛС" << endl;
    }

    int counter = 1;
    for (int i = 1; i <= number.size(); i++){
        if (number[i] == number[i-1]){
            counter++;
            if (counter == 3){
                cout << "Введите корректный СНИЛС" << endl;
                return 0;
            }
        }
    }
    
    string corretControl;

    int summa = 0;
    int position = 1;

    for (int i = number.length() - 1; i >= 0; i--) {
        int digit = number[i] - '0'; 
        summa += digit * position;
        position++;
    }

    if (summa < 100){
        corretControl = to_string(summa);
    }
    else if ((summa == 100) || (summa == 101)){
        corretControl = "00";
    }
    else if (summa > 101){
        if (summa % 101 < 100){
            corretControl = to_string(summa % 101);
        }
        else{
            corretControl = "00";
        }
    }

    if (corretControl == control){
        cout << "Вы ввели корректный СНИЛС. Поздравляю!" << endl;
    }
    else{
        cout << "Введите корректный СНИЛС" << endl;
    }
    return 0; 
}