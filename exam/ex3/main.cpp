#include <iostream>

using namespace std;

// Функция для ввода элементов массива
void inputArray(auto arr[], int size) {
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Функция для вывода суммы элементов массива
void printSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    cout << "Сумма элементов массива: " << sum << endl;
}

// Функция для вывода отрицательных элементов массива
void printNegativeElements(int arr[], int size) {
    cout << "Отрицательные элементы массива: ";
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Функция для вывода произведения элементов массива
void printProduct(double arr[], int size) {
    double product = 1.0;
    for (int i = 0; i < size; ++i) {
        product *= arr[i];
    }
    cout << "Произведение элементов массива: " << product << endl;
}

// Функция для вывода суммы отрицательных элементов массива
void printSumOfNegatives(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    cout << "Сумма отрицательных элементов массива: " << sum << endl;
}

int main() {
    const int size1 = 10; // Размер первого массива
    const int size2 = 100; // Максимальный размер второго массива
    double realNumbers[size1];
    int integers[size2];

    // Задача 1
    inputArray(integers, size1);
    printSum(integers, size1);

    // Задача 2
    int sizeInput;
    cout << "Введите размер массива: ";
    cin >> sizeInput;
    if (sizeInput > 0 && sizeInput <= size2) {
        int dynamicArray[size2];
        inputArray(dynamicArray, sizeInput);
        printNegativeElements(dynamicArray, sizeInput);
    } else {
        cout << "Неверный размер массива." << endl;
    }

    // Задача 3
    inputArray(realNumbers, size1);
    printProduct(realNumbers, size1);

    // Задача 4
    cout << "Введите размер массива: ";
    cin >> sizeInput;
    if (sizeInput > 0 && sizeInput <= size2) {
        inputArray(integers, sizeInput);
        printSumOfNegatives(integers, sizeInput);
    } else {
        cout << "Неверный размер массива." << endl;
    }

    return 0;
}
