#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    string text;
    int wordStart = 0, wordEnd = 0, wordCount = 0;

    cout << "Введите текст:";

    getline(cin, text);

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == 'с') {
            wordStart = i;
            while (text[i] != ' ' && text[i] != '\0') {
                wordEnd = i;
                i++;
            }
            if (wordEnd - wordStart >= 3) {
                for (wordStart; wordStart <= wordEnd; wordStart++) {
                    cout << text[wordStart];
                }
                cout << " ";                
            }
            wordCount++;
        }
        else if (text[i] == ' ') {
            i++;
        }
        else {
            while (text[i] != ' ' && text[i] != '\0') {
                i++;
            }
            wordCount++;
        }
    }
    cout << endl << "Количество всех слов: " << wordCount;
}