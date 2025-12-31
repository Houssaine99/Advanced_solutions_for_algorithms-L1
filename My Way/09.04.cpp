#include <iostream>

using namespace std;

int ArrayLength()
{
	int Length;

	cout << "How many numbers you want a sum (from 1 to 100):\n";
	cin >> Length;

	return Length;
}

void ReadNumbers(int Numbers[100], int length)
{	
	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Please enter number " << i + 1 << ":\n";
		cin >> Numbers[i];
	}
}

int SumOf3Numbers(int Numbers[100], int length)
{
	int Sum = 0;

	for (int i = 0; i <= length - 1; i++)
	{
		Sum += Numbers[i];
	}

	return Sum;
}

void PrintResult(int Total)
{
	cout << "\n The total of numbers is " << Total << endl;
}

int main()
{
	int Numbers[100];

	int Length = ArrayLength();

	ReadNumbers(Numbers, Length);

	PrintResult(SumOf3Numbers(Numbers, Length));

	return 0;
}