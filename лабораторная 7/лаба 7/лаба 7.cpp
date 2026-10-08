#include <iostream>
#include <windows.h>
using namespace std;
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int k;
	char big_latin, small_latin, big_russian, small_russian, number;
	float result_latin, result_russian, result_number;
	
	puts("Выберите действие: \n1 – определение разницы значений кодов в ASCII буквы латинского алфавита в прописном и" 
		"строчном написании; \n2 – определение разницы значений кодов в Windows - 1251 буквы русского алфавита в прописном"
		"и строчном написании; \n3 – вывод в консоль кода символа, соответствующего введенной цифре; \n4 - выход из программы");
	cout << "Ваш выбор: "; cin >> k;
	
	if (k < 1 || k > 4) {

		cout << "Error" << endl;
	
	}
	
	else
	
		switch (k) {
	
		case 1: {

		cout << "Введите латинскую прописную букву: "; cin >> big_latin;
		cout << "Введите латинскую строчную букву: "; cin >> small_latin;
		result_latin = small_latin - big_latin;
		cout << "Разница = " << result_latin << endl;

		break;
	
	    }
	
		case 2: {
		
		cout << "Введите русскую прописную букву: "; cin >> big_russian;
		cout << "Введите русскую строчную букву: "; cin >> small_russian;
		result_russian = small_russian - big_russian;
		cout << "Разница = " << result_russian << endl;

		break;
	
		}
	
		case 3: {
		
		cout << "Введите цифру: "; cin >> number;
		result_number = number;
		cout << "Код символа: " << hex << int(result_number) << endl;
		
		break;
	
		}
	
		case 4: {
		
		break;
	
	    }

	    default: break;
	
	    }

	return 0;

}