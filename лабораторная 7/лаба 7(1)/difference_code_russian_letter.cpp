#include <iostream>
#include <cctype>
#include<windows.h>
#include "difference_code_russian_letter.h"

using namespace std;

int getDifferenceCodeRussianLetter() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char russianLetter;

    cout << "Введите букву русского алфавита: ";
    cin >> russianLetter;

    if (russianLetter == 'ё' || russianLetter == 'Ё') {
        char upper = toupper(russianLetter);
        char lower = tolower(russianLetter);


        int difference = (static_cast<int>(lower) ) - (static_cast<int>(upper) );

        cout << "Введенная буква: " << russianLetter << std::endl;
        cout << "Разница: " << difference << std::endl;

    }
    else if (russianLetter < 1) {
        if (russianLetter == 'я' ) {

            char letterBig = toupper(russianLetter);
            char letterSmall = tolower(russianLetter);

            int difference = (static_cast<int>(letterSmall) + 32)  - (static_cast<int>(letterBig)  );

            cout << "Введенная буква: " << russianLetter << endl;
            cout << "Разница: " << difference << endl;

        }
        else {
            char upper = toupper(russianLetter);
            char lower = tolower(russianLetter);

            int difference = (static_cast<int>(lower)) - (static_cast<int>(upper));

            cout << "Введенная буква: " << russianLetter << endl;
            cout << "Разница: " << difference << endl;
        }
    }
    else {
        cout << "ERROR" << endl;
    }

    return 0;

}