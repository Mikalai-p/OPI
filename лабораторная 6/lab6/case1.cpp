#include "case1.h"
#include<iostream>
using namespace std;
int case1()
{
    setlocale(LC_CTYPE, "rus");
    int a1 = 0, b1 = 0, raz = 0;
    char a, b;
    cout << "Введите символ прописной и строчный(прописной) символ латинского алфавита ";
    cin >> a >> b;
    a1 = char(a);
    b1 = char(b);
    if (a1 > 64 && a1 < 91) {
        cout << "Код символа " << a << " в ASCII = " << a1 << ", код символа " << char(b) << " = " << b1 << endl;
        raz = b1 - a1;
        cout << "Разница = " << raz;
    }
    else {
        cout << "ERROR" << endl;
    }
    return 0;
}