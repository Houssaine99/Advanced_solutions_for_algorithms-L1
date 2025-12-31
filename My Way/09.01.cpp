#include <iostream>

using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Please enter a number:\n";
	cin >> Number;

	return Number;
}

int SumNumbers()
{
	int Sum = 0;

	for (int i = 1; i <= 3; i++)
	{
		Sum += ReadNumber();
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