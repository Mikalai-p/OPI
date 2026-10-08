#include <iostream>  
#include <windows.h>  
#include "case1.h"  
#include "case2.h"  
#include "case3.h"  
#include "case4.h" 
#include "case5.h" 
#include "default.h" 
using namespace std;
int main()
{

    setlocale(LC_CTYPE, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int n;
    while (true) {
        cout << "1 - определение разницы значений кодов в ASCII буквы латинского алфавита в прописном и строчном написании,\n"
            << "2 - определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании,\n"
            << "3 - вывод в консоль кода символа, соответствующего введенной цифре,\n"
            << "4 - выход из программы:\n"
            << "5 - выход из ввода:"
            << endl;
        cin >> n;

        switch (n)
        {
        case 1:case1();break;
        case(2):case2();break;
        case(3):case3();break;
        case(4):case4();break;
        case(5):case5();return 0;
        default:ddefault();
        }
    }
    return 0;
}