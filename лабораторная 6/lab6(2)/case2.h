#pragma once 
#include <iostream> 
using namespace std;
int case2() {
    unsigned char Y;
    cout << "Введите букву : ";
    cin >> Y;
    if (Y >= 192 && Y <= 223 && Y >= 224 && Y <= 255 && Y == 168 || Y == 184)
    {
        cout << "Разница между её прописным и строчным = " << toupper(Y)- tolower(Y) << endl;
    }
    else
    {
        cout << "Некорректный ввод" << endl;
    }
    return 0;
}