#include "case2.h"
#include<iostream>
int case2()
{
    setlocale(LC_CTYPE, "rus");
    using namespace std;
    int a1 = 0, b1 = 0, raz = 0;
    char a, b;
    cout << "Введите прописной и строчный(прописной) символ ";
    cin >> a >> b;
    a1 = char(a);
    b1 = char(b);
    if (a1 == -16) {
        a1 = char(a)+184; // Код 'ё' в Windows-1251
        b1 = char(b)+199; // Код для 'Ё' в Windows-1251
        cout << "Код символа " << char(a1) << " в Windows-1251 = " << a1 << ", код символа " << char(b1) << " = " << b1 << endl;
        raz = b1 - a1;
        cout << "Разница = " << raz;
    }
    else {
        a1 = char(a)+320;
        b1 = char(b)+320;
        if (a1 > 191 && a1 < 224) {
            cout << "Код символа " << char(a1) << " в Windows-1251 = " << a1 << ", код символа " << char(b1) << " = " << b1 << endl;
            raz = b1 - a1;
            cout << "Разница = " << raz;
        }
        else {
            cout << "Error " << endl;
        }
    }
    return 0;
}