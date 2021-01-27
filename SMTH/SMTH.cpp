#include <iostream>
using namespace std;

int Converter(int& const, int& , int& );

int main()
{
	int numb, fsystem, ssystem;
	cout << "Enter the number, its system and the system you want to convert to" << endl;
	cout << "Number: _\b"; cin >> numb;
	cout << "System First: _\b"; cin >> fsystem;
	cout << "System Second: _\b"; cin >> ssystem;
	cout << "Result: " << Converter(numb, fsystem, ssystem);
	return 0;
}

int Converter(int &n, int &FromSystem, int &ToSystem)
{
	int x = 0, k = 0;
	while (n > 0)
	{
		x += (n % ToSystem) * pow(FromSystem, k);
		k++;
		n /= ToSystem;
	}
	return x;
}