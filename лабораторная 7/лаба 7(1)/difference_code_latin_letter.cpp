#include "difference_code_latin_letter.h"
#include<iostream>

using namespace std;

int getDifferenceCodeLatinLetter()
{
    setlocale(LC_CTYPE, "rus");

    int codeLatinLetter;
    char latinLetter;

    cout << "Введите латинскую букву ";
    cin >> latinLetter;

    codeLatinLetter = char(latinLetter);

    if (codeLatinLetter >= 'A' && codeLatinLetter <= 'Z' || codeLatinLetter >= 'a' && codeLatinLetter <= 'z') {

        cout << "Код символа " << latinLetter << " в ASCII = " << codeLatinLetter << endl;
        cout << tolower(latinLetter) - toupper(latinLetter) << endl;

   }
    else {

        cout << "ERROR" << endl;

    }

    return 0;

}