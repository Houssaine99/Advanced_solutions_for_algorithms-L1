#include <iostream>

using namespace std;

void ReadNumbers(int Numbers[3])
{
	int length = 2;
	
	for (int i = 0; i <= length; i++)
	{
		cout << "Please enter number " << i + 1 << ":\n";
		cin >> Numbers[i];
	}
}

int SumOf3Numbers(int Numbers[3])
{
	int Sum = 0;
	int length = 2;

	for (int i = 0; i <= length; i++)
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
	int Numbers[3];

	ReadNumbers(Numbers);

	PrintResult(SumOf3Numbers(Numbers));

	return 0;
}