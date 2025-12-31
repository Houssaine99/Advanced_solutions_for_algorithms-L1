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
	int Counter = 0;
	
	cout << "Range printed using while statement:\n";
	while (Counter < Number)
	{
		Counter++;
		cout << Counter << endl;
	}
}

void PrintRangeFrom1ToN_UsingDoWhile(int Number)
{
	int Counter = 0;

	cout << "Range printed using do while statement:\n";
	do
	{
		Counter++;
		cout << Counter << endl;
	} while (Counter < Number);
}

void PrintRangeFrom1ToN_UsingFor(int Number)
{
	cout << "Range printed using for statement:\n";
	for (int Counter = 1; Counter <= Number; Counter++)
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