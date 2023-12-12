#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "enter n: ";
    cin >> n;

    if (n < 1 && n > 10) {
        cout << "n must be between 1 and 10";
        return -1;
    }

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    delete [] arr;

    return 0;
}