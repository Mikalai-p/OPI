#include <iostream>
#include "selection.h"
#include "difference_code_latin_letter.h"
#include "difference_code_russian_letter.h"
#include "code_number.h"
#include "end_of_program.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int selectionNumber = getSelection();

    switch (selectionNumber) {
    case 1: getDifferenceCodeLatinLetter();
        break;

    case 2: getDifferenceCodeRussianLetter();
        break;

    case 3: getCodeNumber();
        break;

    case 4: getEndOfProgram();
        break;

    default: cout << "ERROR";
        break;

        return 0;

    }
}