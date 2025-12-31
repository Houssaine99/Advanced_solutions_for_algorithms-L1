#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

int SumNumbers()
{
	int Sum = 0;
	int Counter = 1;
	int Number = 0;

	do
	{
		Number = ReadNumber("Please enter number? " + to_string(Counter));

		if (Number == -99)
			break;

		Counter++;
		Sum += Number;

	} while (Number != -99);

	return Sum;
}

int main()
{
	cout << "\n Sum = " << SumNumbers() << endl;
}
