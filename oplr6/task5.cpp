#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    int arr[4][5];
    int countNegatives[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "A[" << i + 1 << "]" << "[" << j + 1 << "]: ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] < 0) {
                countNegatives[j]++;
            }
            cout.width(5);
            cout << arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << "Количество отрицательных элментов в строке  " << i + 1 << ": ";
        cout << countNegatives[i] << endl;
    }
}