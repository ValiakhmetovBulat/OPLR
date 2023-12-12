#include <iostream>
#include <float.h>

using namespace std;

int main() {
    int n;
    double min = DBL_MAX;

    cout << "enter natural number n: ";
    cin >> n;
    if (n <= 0) {
        cout << n << " is not a natural number. Exitting ..." << endl;
        return -1;
    }

    double *arr = new double[n];

    for (int i = 0; i < n; i++) {
        cout << "enter A[" << i + 1 << "]" << ": ";
        cin >> arr[i];

        if (min >= abs(arr[i])) {
            min = abs(arr[i]);
        }
    }

    cout << "min(";
    for (int i = 0; i < n; i++) {
        cout << "|" << arr[i] << "|";
        if (i + 1 != n)
            cout << ", ";
    }

    cout << ") = " << min;

    return 0;
}