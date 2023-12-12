#include <iostream>
#include <Windows.h>

using namespace std;

int getMinElementIndex(int *arr, int size) {
    int min, minIndex = 0;

    min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] <= min) {
            minIndex = i;
            min = arr[i];
        }
    }

    return minIndex;
}

int getSumToMinElement(int *arr, int getSumTo) {
    int sum = 0;

    for (int i = 0; i < getSumTo; i++) {
        sum += arr[i];
    }

    return sum;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillArray(int *arr, int size, char name) {
    for (int i = 0; i < size; i++) {
        cout << name << "[" << i + 1 << "]: "; 
        cin >> arr[i];
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    
    cout << "Введите n: ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "n должно быть в диапазоне [1;10].";
        return -1;
    }

    int *arr1 = new int[n];
    int *arr2 = new int[n];

    fillArray(arr1, n, 'A');
    fillArray(arr2, n, 'B');

    cout << "Массив A: ";
    printArray(arr1, n);

    cout << "Массив B: ";
    printArray(arr2, n);

    int sum1 = getSumToMinElement(arr1, getMinElementIndex(arr1, n));
    int sum2 = getSumToMinElement(arr2, getMinElementIndex(arr2, n));

    cout << "Сумма элементов до минимального элемента в массиве A: " << sum1 << endl;
    cout << "Сумма элементов до минимального элемента в массиве B: " << sum2 << endl;
}