#include <iostream>

using namespace std;

int main() {
    int n, count = 0;

    cout << "enter natural number n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << n << " is not a natural number. Exitting ..." << endl;
        return -1;
    }

    int *arr = new int[n]; 

    for (int i = 0; i < n; i++) {
        cout << "enter A[" << i + 1 << "]" << ": ";
        cin >> arr[i];
        if (arr[i] <= 0) {
            cout << arr[i] << " is not a natural number. Exitting ..." << endl;
            return -1;
        }
        if (arr[i] % 3 == 0 && arr[i] % 5 != 0) {
            count++;
        }
    }

    cout << "count of numbers are multiples to 3 and not multiples to 5: " << count;

    return 0;
}