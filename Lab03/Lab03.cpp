#include <iostream>
using namespace std;
/* 
1) PinchukNikolai2007
2) ПинчукНиколайАлександрович2007
3) Пинчук2007Nikolai
hex windows-1251
1) 50 69 6E 63 68 75 6B 4E 69 6B 6F 6C 61 69 32 30 30 37
2) CF E8 ED F7 F3 EA CD E8 EA EE EB E0 E9 C0 EB E5 EA F1 E0 ED E4 F0 EE E2 E8 F7 32 30 30 37
3) CF E8 ED F7 F3 EA 32 30 30 37 4E 69 6B 6F 6C 61 69
UTF-8
1 )50 69 6E 63 68 75 6B 4E 69 6B 6F 6C 61 69 32 30 30 37
2) D0 9F D0 B8 D0 BD D1 87 D1 83 D0 BA D0 9D D0 B8 D0 BA DO BE D0 BB D0 B0 D0 B9 D0 90 D0 BB D0 B5 D0 BA D1 81 D0 B0 D0 BD D0 B4 D1 80 D0 BE D0 B2 D0 B8 D1 87 32 30 30 37
3) D0 9F D0 B8 D0 BD D1 87 D1 83 D0 BA 32 30 30 37 4E 69 6B 6F 6C 61 69
UTF-16
1) 50 00 69 00 6E 00 63 00 68 00 75 00 6B 00 4E 00 69 00 6B 00 6F 00 6C 00 61 00 69 00 32 00 30 00 30 00 37 00
2) 1F 04 38 04 3D 04 47 04 43 04 3A 04 1D 04 38 04 3A 04 3E 04 3B 04 30 04 39 04 10 04 3B 04 35 04 3A 04 41 04 30 04 3D 04 34 04 40 04 3E 04 32 04 38 04 47 04 32 00 30 00 30 00 37 00
3) 1F 04 38 04 3D 04 47 04 43 04 3A 04 32 00 30 00 30 00 37 00 4E 00 69 00 6B 00 6F 00 6C 00 61 00 69 00
*/
int main()
{
	int number = 0 * 12345678;
	char lfie[] = "PinchukNikolai2007";
	char rfie[] = "ПинчукНиколайАлександрович2007";
	char lr[] = "Пинчук2007Nikolai";
	wchar_t Lfie[] = L"PinchukNikolai2007";
	wchar_t Rfie[] = L"ПинчукНиколайАлександрович2007";
	wchar_t lR[] = L"Пинчук2007Nikolai";
	cout << lfie << std::endl;
	return 0;
}