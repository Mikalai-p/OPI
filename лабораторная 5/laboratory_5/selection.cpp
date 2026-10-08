#include "selection.h"
#include<iostream>
using namespace std;

int getSelection()
{

    setlocale(LC_ALL, "Russian");

    int selectionNumber;

    cout << "¬ведите номер операции: \n 1 - определение разницы значений кодов в ASCII буквы латинского алфавита в"
        "прописном и строчном написании, \n 2 Ц определение разницы значений кодов в Windows - 1251 буквы русского "
        "алфавита в прописном и строчном написании, \n 3 Ц вывод в консоль кода символа, соответствующего введенной цифре, \n"
        " 4 Ц выход из программы. " << endl;
    cin >> selectionNumber;

    return selectionNumber;

}