#include <iostream>
#include <windows.h>
#include "end_of_program.h"

using namespace std;

int getEndOfProgram() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Конец программы" << endl;

	return 0;

}

