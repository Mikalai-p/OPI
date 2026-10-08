#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);       

    int k;
    char c;
    int c1, c4, c5, c2;

    puts("Выберите действие: \n1 – определение разницы значений кодов в ASCII буквы латинского алфавита в прописном и строчном написании; \n2 – определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании; \n3 – вывод в консоль кода символа, соответствующего введенной цифре; \n4 - выход из программы");
    cout << "Ваш выбор: "; cin >> k;

    if (k < 1 || k > 4) {
        cout << "ERROR" << endl;
    }
    else {
        switch (k) {
        case 1:
            cout << "Введите латинскую строчную букву: "; cin >> c;
            if (int(c) > 96 && int(c) < 123) {
                c1 = int(c) - 32;
            }
            else {
                cout << "ERROR" << endl;
                break;
            }
            cout << "Код символа " << c << " в ASCII = " << int(c) << ", код символа " << char(c1) << " = " << c1 << ", разница между значениями - 32" << endl;
            break;

        case 2:
            cout << "Введите русскую строчную букву: ";
            cin >> c;

            // Обработка для буквы 'ё'
            if (c == 'ё') {
                c2 = 184; // Код 'ё' в Windows-1251
                c1 = 168; // Код для 'Ё' в Windows-1251
                cout << "Код символа " << c << " в Windows-1251 = " << int(c2) << ", код символа " << char(c1) << " = " << c1 << ", разница между значениями - 16" << endl;
                break;
            }
            else {
                c4 = int(c)+256;
                if (c4 > 223 && c4 < 256) {
                    c1 = c4 - 32;
                    c5 = c4;
                    cout << "Код символа " << c << " в Windows-1251 = " << int(c5) << ", код символа " << char(c1) << " = " << c1 << ", разница между значениями - 32" << endl;
                }
                else {
                    cout << "ERROR" << endl;
                    break;
                }
            }
            break;

        case 3:
            cout << "Введите цифру: "; cin >> c;
            if (int(c) > 47 && int(c) < 58) {
                cout << "Код символа: " << hex << int(c);
            }
            else {
                cout << "ERROR";
            }
            break;

        case 4:
            break;

        default:
            break;
        }
    }
    return 0;
}
