#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void ReadNumber(int& Number)
{
	cout << "Please enter a number?\n";
	cin >> Number;
}

void PrintNumbersUntilNumberForLoop(int Number)
{
	cout << "\n Using for loop:\n";
	for (int i = 1; i <= Number; i++)
	{
		cout << i << endl;
	}
}

void PrintNumbersUntilNumberWhileLoop(int Number)
{
	int Counter = 1;
	cout << "\n Using while loop:\n";
	while (Counter <= Number)
	{
		cout << Counter << endl;
		Counter++;
	}
}

void PrintNumbersUntilNumberDoWhileLoop(int Number)
{
	int Counter = 1;
	cout << "\n Using do while loop:\n";
	do
	{
		cout << Counter << endl;
		Counter++;

	} while (Counter <= Number);
}

int main()
{
	int Number;
	ReadNumber(Number);
	PrintNumbersUntilNumberForLoop(Number);
	PrintNumbersUntilNumberWhileLoop(Number);
	PrintNumbersUntilNumberDoWhileLoop(Number);
	return 0;
}