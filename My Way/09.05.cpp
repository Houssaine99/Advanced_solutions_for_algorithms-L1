#include <iostream>

using namespace std;

int HowManyNumbersToSum()
{
	int Number;

	cout << "How many numbers you want to sum?\n";
	cin >> Number;

	return Number;
}

int ReadNumber(int index)
{
	int Number;

	cout << "Please enter  number " << index << ":\n";
	cin >> Number;

	return Number;
}

int SumNumbers()
{
	int Sum = 0;
	int Counter = HowManyNumbersToSum();

	for (int i = 1; i <= Counter; i++)
	{
		Sum += ReadNumber(i);
	}

	return Sum;
}

void PrintSum(int Sum)
{
	cout << "\n Sum = " << Sum << endl;
}

int main()
{
	PrintSum(SumNumbers());

	return 0;
}