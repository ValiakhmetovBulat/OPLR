#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void replaceChar(string &str, char charFrom, char charTo) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == charFrom) {
            str[i] = charTo;
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str1, str2;
    char charFrom, charTo;

    cout << "Введите строку 1: ";
    getline(cin, str1);
    if (str1.length() < 1 || str1.length() > 80) {
        cout << "Длина строки должна быть в диапазоне от 1 до 80 символов.";
        return -1;
    }

    cout << "Введите строку 2: ";
    getline(cin, str2);
    if (str2.length() < 1 || str2.length() > 80) {
        cout << "Длина строки должна быть в диапазоне от 1 до 80 символов.";
        return -1;
    }

    cout << "Какой символ заменить: ";
    cin >> charFrom;
    
    cout << "На какой символ заменить: ";
    cin >> charTo;

    replaceChar(str1, charFrom, charTo);
    replaceChar(str2, charFrom, charTo);

    cout << str1 << endl;;
    cout << str2;

    return 0;
}