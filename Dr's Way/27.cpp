#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Please enter a number?\n";
	cin >> Number;

	return Number;
}

void PrintRangeFrom1ToN_UsingWhile(int Number)
{
	int Counter = Number + 1;

	cout << "Range printed using while statement:\n";
	while (Counter > 1)
	{
		Counter--;
		cout << Counter << endl;
	}
}

void PrintRangeFrom1ToN_UsingDoWhile(int Number)
{
	int Counter = Number + 1;

	cout << "Range printed using do while statement:\n";
	do
	{
		Counter--;
		cout << Counter << endl;

	} while (Counter > 1);
}

void PrintRangeFrom1ToN_UsingFor(int Number)
{
	cout << "Range printed using for statement:\n";
	for (int Counter = Number; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

int main()
{
	int Number = ReadNumber();

	PrintRangeFrom1ToN_UsingWhile(Number);
	PrintRangeFrom1ToN_UsingDoWhile(Number);
	PrintRangeFrom1ToN_UsingFor(Number);
	return 0;
}