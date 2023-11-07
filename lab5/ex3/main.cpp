#include "iostream"

using namespace std;

int transpositionSearch(int[], int, int);

int main()
{
    int nums[] = {3, 2, 5, 7, 9, 4};
    int size = sizeof(nums)/sizeof(nums[0]);
    int key = 5;
    cout << transpositionSearch(nums, size, key) << endl;
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << transpositionSearch(nums, size, key) << endl;
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

int transpositionSearch(int nums[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == key)
        {
            if (i > 0)
            {
                swap(nums[i], nums[i-1]);
            }
            return i;
        }
    }
    return -1;
}