#include <iostream>
#include <cctype> 
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str;
    cout << "Введите строку (не более 80 символов, оканчивающуюся точкой): ";
    getline(cin, str);

    char vowels[6] = { 'a', 'e', 'i', 'o', 'u', 'y' };
    int vowelsCount[6] = { 0 }; 

    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);

            switch (ch) {
            case 'a':
                vowelsCount[0]++;
                break;
            case 'e':
                vowelsCount[1]++;
                break;
            case 'i':
                vowelsCount[2]++;
                break;
            case 'o':
                vowelsCount[3]++;
                break;
            case 'u':
                vowelsCount[4]++;
                break;
            case 'y':
                vowelsCount[5]++;
            }
        }
    }

    for (int i = 0; i < 6; ++i) {
        cout << '\'' << vowels[i] << "': " << vowelsCount[i] << " раза" << endl;
    }

    return 0;
}