#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumber()
{
	int Number;
	cout << "\nPlease enter a number?\n";
	cin >> Number;

	return Number;
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
	PrintNumbersUntilNumberForLoop(ReadNumber());
	PrintNumbersUntilNumberWhileLoop(ReadNumber());
	PrintNumbersUntilNumberDoWhileLoop(ReadNumber());
	return 0;
}