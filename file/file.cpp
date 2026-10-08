#include <iostream>
using namespace std;

int main() {

    setlocale(LC_CTYPE, "rus");

    int a, b, c;

    cout << "Введите первое целое число (a): ";
    cin >> a;
    char nextCharA = cin.peek();
    if (!isspace(nextCharA) && nextCharA != EOF) {

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Ошибка. Некорректный ввод";

        return false;

    }

    cout << "Введите второе целое число (b): ";
    cin >> b;
    char nextCharB = cin.peek();
    if (!isspace(nextCharB) && nextCharB != EOF) {

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Ошибка. Некорректный ввод";

        return false;

    }

    cout << "Введите третье целое число (c): ";
    cin >> c;
    char nextCharC = cin.peek();
    if (!isspace(nextCharC) && nextCharC != EOF) {

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Ошибка. Некорректный ввод";

        return false;

    }
    if (c == 0) {
        cout << "Ошибка. Делить на нуль нельзя";
        return false;
    }
    else {

        double result = static_cast<double>(a + b) / c;

        cout << "Результат выражения (" << a << " + " << b << ") / " << c << " равен " << result << endl;
    }
    return 0;
}
