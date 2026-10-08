#include "code_number.h"
#include<iostream>
using namespace std;

int getCodeNumber()
{

    setlocale(LC_CTYPE, "rus");

    int codeNumber = 0;
    char number;

    cout << "Введите цифру  ";
    cin >> number;

    codeNumber = char(number);

    if (codeNumber > 47 && codeNumber < 58) {

        cout << "число = " << codeNumber;

    }
    else {

        cout << "ERROR";

    }

    return 0;

}