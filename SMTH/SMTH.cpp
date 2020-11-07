#include <iostream>
using namespace std;

int ToConvert(int NUMB, int ConvertSystem)
{
	int k = 1, resultNUMB = 0;
	while (NUMB > 0)
	{
		resultNUMB += (NUMB % ConvertSystem) * k;
		NUMB /= ConvertSystem;
		k *= 10;
	}
	return resultNUMB;
}

int ToConvertCustom(int NUMB, int System, int ConvertSystem)
{
	int k = 0, i = 1, resultNUMB = 0;
	int NUMB10 = 0;
	while (NUMB > 0)
	{
		NUMB10 += (NUMB % 10) * (pow(System, k));
		k++; 
		NUMB /= 10;
	}
	k = 1;
	while (NUMB10 > 0)
	{
		resultNUMB += (NUMB10 % ConvertSystem) * k;
		NUMB10 /= ConvertSystem;
		k *= 10;
	}
	return resultNUMB;
}

int main()
{
	int number = 0, selectOption = 0, FirstSystem = 0, SecondSystem = 0;
	cout << "1. System 10 into 2" << endl;
	cout << "2. System 10 into 8" << endl;
	cout << "3. System 10 into 16" << endl;
	cout << "4. Your option" << endl;
	cout << "Select option: "; cin >> selectOption;
	switch (selectOption)
	{
	case 1:
	{
		cout << "Enter the number for convert: "; cin >> number;
		cout << "Result: " << ToConvert(number, 2) << endl;
		break;
	}
	case 2:
	{
		cout << "Enter the number for convert: "; cin >> number;
		cout << "Result: " << ToConvert(number, 8) << endl;
		break;
	}
	case 3:
	{
		cout << "Enter the number for convert: "; cin >> number;
		cout << "Result: " << ToConvert(number, 16) << endl;
		break;
	}
	case 4:
	{
		cout << "Enter the number to convert, its number system and the final system: "; cin >> number; cin >> FirstSystem; cin >> SecondSystem;
		cout << "Result: " << ToConvertCustom(number, FirstSystem, SecondSystem) << endl;
		break;
	}
	default:
		break;
	}
}