#include <iostream>
#include <cctype>

int main() {
    setlocale(LC_CTYPE, "rus");
    // Ввод символа от пользователя
    char inputChar;
    std::cout << "Введите символ: ";
    std::cin >> inputChar;

    if (std::isdigit(inputChar)) {
        std::cout << "Это цифра." << std::endl;
    }
    else if (std::isalpha(inputChar)) {
        if (std::isupper(inputChar)) {
            std::cout << "Это заглавная буква латинского алфавита." << std::endl;
        }
        else if (std::islower(inputChar)) {
            std::cout << "Это строчная буква латинского алфавита." << std::endl;
        }
        else {
            std::cout << "Это русская буква." << std::endl;
        }
    }
    else {
        std::cout << "Это другой символ." << std::endl;
    }

    // Вывод информации о коде символа
    std::cout << "Код символа в ASCII: " << static_cast<unsigned int>(inputChar) << std::endl;

    // Преобразование символа в верхний регистр
    const auto upperInputChar = toupper(inputChar);

    // Вывод информации о коде символа в Windows-1251
    std::wcout << L"Код символа в Windows-1251: " << static_cast<unsigned short>(upperInputChar) << std::endl;

    return 0;
}
