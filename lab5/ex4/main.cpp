#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
    if (argc < 4)
    {
        cerr << "Некоректное число параметров" << endl;
        return 1;
    }

    const string parametr = argv[1];
    if (parametr != "-a" && parametr != "-m")
    {
        cerr << "Некоректный флаг" << endl;
        return 1;
    }

    try
    {
        int a = stoi(argv[2]);
        int b = stoi(argv[3]);
        if (parametr == "-a")
        {
            cout << a*b << endl;
        }
        else if (parametr == "-m")
        {
            cout << a+b << endl;
        }
    }
    catch(invalid_argument)
    {
        cerr << "Некоректный ввод" << endl;
    }
    
    return 0;
}
