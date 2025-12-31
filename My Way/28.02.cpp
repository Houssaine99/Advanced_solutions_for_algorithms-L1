#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enOddEven{ Odd = 1, Even = 2 };

int ReadNumber()
{
	int Number;
	cout << "Please enter a number?\n";
	cin >> Number;

	return Number;
}

enOddEven CheckOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return enOddEven::Odd;
	else
		return enOddEven::Even;
}

int SumOddNumbersFrom1ToN_UsingWhile(int Number)
{
	int Counter = 0;
	int Sum = 0;

	cout << "\nSum Odd Numbers Using While statement:\n";

	while (Counter < Number)
	{
		Counter++;
		
		if (CheckOddOrEven(Counter) == enOddEven::Odd)
			Sum += Counter;
	}
	return Sum;
}

int SumOddNumbersFrom1ToN_UsingDoWhile(int Number)
{
	int Counter = 0;
	int Sum = 0;

	cout << "\nSum Odd Numbers Using Do While Statement:\n";

	do
	{
		Counter++;
		if (CheckOddOrEven(Counter) == enOddEven::Odd)
			Sum += Counter;

	} while (Counter < Number);

	return Sum;
}

int SumOddNumbersFrom1ToN_UsingFor(int Number)
{
	int Sum = 0;

	cout << "\nSum Odd Numbers Using For Statement:\n";

	for (int Counter = 1; Counter <= Number; Counter++)
	{
		if (CheckOddOrEven(Counter) == enOddEven::Odd)
		{
			Sum += Counter;
		}
	}

	return Sum;
}

void PrintResult(int Sum)
{
	cout << "Sum = " << Sum << endl;
}

int main()
{
	int Number = ReadNumber();
	
	PrintResult(SumOddNumbersFrom1ToN_UsingWhile(Number));
	PrintResult(SumOddNumbersFrom1ToN_UsingDoWhile(Number));
	PrintResult(SumOddNumbersFrom1ToN_UsingFor(Number));

	return 0;
}

