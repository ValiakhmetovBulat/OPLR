#include <iostream>
#include <math.h>

using namespace std;

int first(int n) {
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum += pow(i, 3);
    }

    return sum;
}

int second (int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return (pow(sum, 2));
}

int main()
{
    int n;

    cout << "enter n: ";
    cin >> n;

    if (n <= 0) {
        cout << n << " is not a natural number. Exitting ..." << endl;
        return -1;
    }

    if (first(n) == second(n)) {
        cout << "equal";
    }
    else {
        cout << "not equal";
    }

    return 0;
}

