#include "iostream"
#include "string"

using namespace std;

// Функция, которая оставит в строке только цифры
string onlyDigitString(string str)
{
    string cleanString = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
        {
            cleanString += str[i];
        }
    }
    return cleanString;
}

// Функция, для проверки корректности СНИЛС (условие из практической работы 2, задание 2)
bool checkSnils(string snils)
{
    string cleanSnils = onlyDigitString(snils);

    if (cleanSnils.size() != 11)
    {
        return false;
    }

    string number = cleanSnils.substr(0, 9);
    string control = cleanSnils.substr(9, 2);

    int counter = 1;
    for (int i = 1; i <= number.size(); i++)
    {
        if (number[i] == number[i-1])
        {
            counter++;
            if (counter == 3)
            {
                return false;
            }
        }
    }

    int summa = 0;
    int position = 1;

    for (int i = number.length() - 1; i >=0; i--)
    {
        int digit = number[i] - '0';
        summa += digit * position;
        position++;
    }

    if ((summa < 100) && (to_string(summa) == control))
    {
        return true;
    }
    else if (((summa == 100) || (summa == 101)) && (control == "00"))
    {
        return true;
    }
    else if (summa > 101)
    {
        if ((summa % 101 < 100) && (to_string(summa % 101) == control))
        {
            return true;
        }
        else if (control == "00")
        {
            return true;
        }
    }
    return false;
}

int main()
{   
    string snils;
    cout << "Введите свой СНИЛС: ";
    cin >> snils;

    // Используем ранее написанную функцию для проверки корректности СНИЛС
    if (checkSnils(snils))
    {
        cout << "Поздравляю! Вы ввели корректный СНИЛС" << endl;
    }
    else
    {
        cout << "Ваш СНИЛС некорректный. Поробуйте ввести его ещё раз" << endl;
    }

    return 0; 
}