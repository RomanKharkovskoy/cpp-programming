#include "iostream"

using namespace std;

int sumMas(int n, int mas[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }

    return s;
}

double meanMas(int n, int mas[])
{
    return sumMas(n, mas) / n;
}

int sumNegative(int n, int mas[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
        {
            s += mas[i];
        }
    }

    return s;
}

int sumPositive(int n, int mas[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
        {
            s += mas[i];
        }
    }

    return s;
}

int sumOdd(int n, int mas[])
{
    int s = 0;
    for (int i = 1; i < n; i += 2)
    {
        s += mas[i];
    }

    return s;
}

int sumEven(int n, int mas[])
{
    int s = 0;
    for (int i = 0; i < n; i += 2)
    {
        s += mas[i];
    }

    return s;
}

int minIndex(int n, int mas[])
{
    int index = 0;
    int minimal = mas[index];
    for (int i = 1; i < n; i++)
    {
        if (mas[i] < minimal)
        {
            minimal = mas[i];
            index = i;
        }
    } 
    
    return index;
}

int maxIndex(int n, int mas[])
{
    int index = 0;
    int maximum = mas[index];
    for (int i = 1; i < n; i++)
    {
        if (mas[i] > maximum)
        {
            maximum = mas[i];
            index = i;
        }
    } 
    
    return index;
}

int multBetweenMinMax(int n, int mas[])
{
    int mult = 1;
    int minI = minIndex(n, mas);
    int maxI = maxIndex(n, mas);

    for (int i = minI; i < maxI; ++i)
    {
        mult *= mas[i];
    }
    return mult;
}

void sort(int n, int mas[])
{
    int min = 0, buf = 0;

    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i; j < n; ++j)
        {
            min = (mas[j] < mas[min]) ? j : min;
        }
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;

        }
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(n, arr);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}