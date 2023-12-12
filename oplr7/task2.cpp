#include <iostream>
#include <Windows.h>

using namespace std;

int getSum(int *arr, int start, int end) {
    int sum = 0;

    for (start; start < end; start++) {
        sum += arr[start];
    }

    return sum;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[12];

    for (int i = 0; i < size(arr); i++) {
        cout << "A[" << i + 1 << "]: ";
        cin >> arr[i];
    }

    cout << "Массив: ";
    for (int i = 0; i < size(arr); i++) {
        cout << arr[i] << " ";
    }

    cout << endl << "sum[0,6] - sum[7,12] = " <<  getSum(arr, 0, 6) - getSum(arr, 6, 12);
}