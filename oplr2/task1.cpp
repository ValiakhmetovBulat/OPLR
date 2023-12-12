#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, prevX = 1.0;
    int n;
    bool isPositive = true;
    double sum = 0.0;

    cout << "enter natural number n: ";
    cin >> n;

    if (n <= 0) {
        cout << n << " is not a natural number. Exitting ..." << endl;
        return -1;
    }

    cout << "enter x (|x| < 1): ";
    cin >> x;

    if (abs(x) > 1.0) {
        cout << "|x| must be < 1";
        return -1;
    }

    for (int i = 1; i <= n; i++) {
        if (isPositive) {
            sum += prevX * x / i;
        }
        else {
            sum -= prevX * x / i;
        }
        isPositive = !isPositive;
        prevX *= x;
    }
    cout << "answer: " << sum << endl;
    cout << "rounded answer: " << round(sum * 10000) / 10000;    

    return 0;
}

