#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(console, FOREGROUND_INTENSITY);

    string vowels = "ауоыэяюёиеАУОЫЭЯЮЁИЕ";
    string text;
    bool found = false;

    getline(cin, text);

    if (text.length() > 80 || text.length() < 1) {
        cout << "Текст должен быть длиной не более 80 и не менее 1 символа.";
        return -1;
    }
    
    for (int i = 0; i < text.length(); i++) {
        for (int j = 0; j < vowels.length(); j++) {
            if (text[i] == vowels[j]) {
                found = true;
            }
        }
        if (found) {
            SetConsoleTextAttribute(console, FOREGROUND_GREEN);
        }
        else {
            SetConsoleTextAttribute(console, FOREGROUND_INTENSITY);
        }
        cout << text[i];
        found = false;
    }    

    SetConsoleTextAttribute(console, FOREGROUND_INTENSITY);
    return 0;
}