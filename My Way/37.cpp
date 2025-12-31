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

int CalculateSum()
{
	int Sum = 0;
	int Number = 1;

	do
	{
		Number = ReadNumber("Please enter a number");

		if (Number != -99)
			Sum += Number;

	} while (Number != -99);

	return Sum;
}

int main()
{
	cout << "\n Sum = " << CalculateSum() << endl;
}