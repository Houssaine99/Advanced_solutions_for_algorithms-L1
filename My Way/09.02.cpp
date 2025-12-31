#include <iostream>

using namespace std;

int ReadNumber(int Index)
{
	int Number;

	cout << "Please enter number " << Index << " :\n";
	cin >> Number;

	return Number;
}

int SumNumbers()
{
	int Sum = 0;
	int Counter = 3;

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