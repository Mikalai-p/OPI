#include "case3.h"
#include<iostream>
int case3()
{
    setlocale(LC_CTYPE, "rus");
    using namespace std;
    int a1 = 0, b1 = 0, raz = 0;
    char a, b;
    cout << "Введите цифру  ";
    cin >> a;
    a1 = char(a);
    if (a1 > 47 && a1 < 58) {
        cout << "a1 = " << a1;
    }
    else {
        cout << "ERROR";
    }
    return 0;
}