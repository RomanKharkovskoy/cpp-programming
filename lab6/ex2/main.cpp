#include "iostream"
#include "fstream"

using namespace std;

void sortArray(int[], int);

int main(int argc, char const *argv[])
{
    string filename = argv[1];
    ofstream file(filename);

    int size;
    cout << "Введите длину массива: ";
    cin >> size;

    int arr[size];
    cout << "Введите массив для сортировки:" << endl;
    file << "Исходный массив: [";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (i != size - 1)
        {
            file << arr[i] << ", ";
        }
        else
        {
            file << arr[i] << "]" << endl;
        }
    }

    file << "Отсортированный массив: [";
    sortArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            file << arr[i] << ", ";
        }
        else
        {
            file << arr[i] << "]" << endl;
        }
    }

    return 0;
}


void sortArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        int min = i;

        for (int j = i + 1; j < size; j++) {
            min = (nums[j] < nums[min]) ? j : min;
        }

        swap(nums[i], nums[min]);
    }
}