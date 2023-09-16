#include "iostream"

using namespace std;

// Прототип функции input 
bool input(int&, int&);

int main()
{
    int a, b;
    if (input(a,b)== false)
    {
        cerr << "error" << endl;
        return 1;
    }
    int s = a + b;
    cout << s << endl;
    return 0;
}

// Функция input() возвращает логическое значение: прошли ли числа проверку
// Однако использовав ссылки, введённые значения сохраняются в памяти для дальнейшего использования
bool input(int &a, int &b)
{
    cout << "Введите значения a и b через пробел: ";
    cin >> a >> b;
    // Проверяем не приведёт ли сложение данных чисел к переполнению типа int
    if ((a > INT32_MAX - b) || (a < INT32_MAX - b))
    {
        return false;
    }
    return true;
}