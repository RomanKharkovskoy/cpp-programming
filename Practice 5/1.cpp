#include "iostream"

using namespace std;

double Sum(double[], int);
double Mean(double[], int);
double sumNegative(double[], int);
double sumPositive(double[], int);
double sumOdd(double[], int);
double sumEven(double[], int);
int minIndex(double[], int);
int maxIndex(double[], int);
double mulMinMax(double[], int);
void sortArray(double[], int);

int main()
{
    const int size = 10;
    double arr[size];
    cout << arr;
    for (int i = 0; i < size; i++)
    {
        cout << "nums[" << i << "] = ";
        cin >> arr[i];
    }
    cout << "Sum = " << Sum(arr, size) << endl;
    cout << "Mean = " << Mean(arr, size) << endl;
    cout << "Sum negative = " << sumNegative(arr, size) << endl;
    cout << "Sum positive = " << sumPositive(arr, size) << endl;
    cout << "Sum odd = " << sumOdd(arr, size) << endl;
    cout << "Sum even = " << sumEven(arr, size) << endl;
    cout << "Min index = " << minIndex(arr, size) << endl;
    cout << "Max index = " << maxIndex(arr, size) << endl;
    cout << "Mul between min and max index = " << mulMinMax(arr, size) << endl;

    sortArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

double Sum(double nums[], int size)
{
    double s = 0;
    for (int i = 0; i < size; i++)
    {
       s += nums[i]; 
    }
    return s;
}

double Mean(double nums[], int size)
{
    double s = Sum(nums, size);
    return s / size;
}

double sumNegative(double nums[], int size)
{
    double s = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < 0)
        {
            s += nums[i];
        }
    }
    return s;
}

double sumPositive(double nums[], int size)
{
    double s = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] > 0)
        {
            s += nums[i];
        }
    }
    return s;
}

double sumOdd(double nums[], int size)
{
    double s = 0;
    for (int i = 1; i < size; i += 2)
    {
       s += nums[i]; 
    }
    return s;
}

double sumEven(double nums[], int size)
{
    double s = 0;
    for (int i = 0; i < size; i += 2)
    {
       s += nums[i]; 
    }
    return s;
}

int minIndex(double nums[], int size)
{
    int ind = 0;
    double minel = nums[ind];
    for (int i = 1; i < size; i++)
    {
        if (nums[i] < minel)
        {
            minel = nums[i];
            ind = i;
        }
    }
    return ind;
}

int maxIndex(double nums[], int size)
{
    int ind = 0;
    double maxel = nums[ind];
    for (int i = 1; i < size; i++)
    {
        if (nums[i] > maxel)
        {
            maxel = nums[i];
            ind = i;
        }
    }
    return ind;
}

double mulMinMax(double nums[], int size)
{
    double mul = 1;
    int minind = minIndex(nums, size);
    int maxind = maxIndex(nums, size);
    
    if (minind > maxind)
    {
        swap(minind, maxind);
    }

    if (maxind - minind < 3)
    {
        return 0;
    }

    for (int i = minind; i < maxind; i++)
    {
        mul *= nums[i];
    }
    return mul;
}

void sortArray(double nums[], int size) {
    for (int i = 0; i < size; i++) {
        int min = i;

        for (int j = i + 1; j < size; j++) {
            min = (nums[j] < nums[min]) ? j : min;
        }

        swap(nums[i], nums[min]);
    }
}