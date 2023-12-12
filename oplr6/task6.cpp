#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    int n;

    cout << "Введите размерность квадратной матрицы NxN : ";
    cin >> n;

    if (n < 1 || n >= 7) {
        cout << "n должно быть в диапазоне от 1 до 6";
        return -1;
    }
    
    double *averages = new double[n];
    int** arr = new int*[n];

    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        double columnSum = 0;
        for (int j = 0; j < n; j++) {
            cout << "A[" << j + 1 << "]" << "[" << i + 1 << "]: ";
            cin >> arr[j][i];
            columnSum += arr[j][i];
        }
        averages[i] = columnSum / n;
    }
    
    for (int i = 0; i < n; i++) {
        cout << "Среднее арифметическое столбца " << i + 1 << ": ";
        cout << averages[i] << endl;
    }
}