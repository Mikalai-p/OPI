#pragma once 
#include <iostream> 
using namespace std;
int case3() {
    unsigned char Z;
    cout << "Введите цифру : ";
    cin >> Z;
    if (Z >= '0' && Z <= '9')
    {
        cout << "Цифра " << Z << " имеет код = " << int(Z) << endl;
    }
    else
    {
        cout << "Некорректный ввод";
    }
    return 0;
}