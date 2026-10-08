#pragma once 
#include <iostream> 
using namespace std;
int case1() {
    unsigned char X;
    cout << "Введите букву : ";
    cin >> X;
    if (X >= 'A' && X <= 'Z' || X >= 'a' && X <= 'z')
    {
        cout << "Разница между её прописным и строчным = " << toupper(X)- tolower(X) << endl;
    }
    else
    {
        cout << "Неаправильный ввод" << endl;
    }

    return 0;
}