#include <iostream>

using namespace std;

int main() {
    int n, count = 0;

    cout << "enter n: ";
    cin >> n;

    if (n <= 0) {
        cout << n << " is not a natural number. Exitting ..." << endl;
        return -1;
    }
    
    while (n != 0) {
        n /= 10;
        count++;
    }

    cout << "count of digits: " << count;

    return 0;
}