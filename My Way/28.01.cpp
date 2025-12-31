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

bool ValidateOddNumbers(int Number)
{
	int Result = Number % 2;

	return (Result != 0);
}

int SumOddNumbersFrom1ToN(int Number)
{
	int Sum = 0;

	for (int Counter = 1; Counter <= Number; Counter++)
	{
		if (ValidateOddNumbers(Counter))
			Sum += Counter;
	}

	return Sum;
}

void PrintResult(int Sum)
{
	cout << "\n Sum = " << Sum << endl;
}

int main()
{
	PrintResult(SumOddNumbersFrom1ToN(ReadNumber()));
	return 0;
}