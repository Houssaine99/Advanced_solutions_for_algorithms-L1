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

int NumberToThePower2(int Number)
{
	return pow(Number, 2);
}

int NumberToThePower3(int Number)
{
	return pow(Number, 3);
}

int NumberToThePower4(int Number)
{
	return pow(Number, 4);
}

void PrintResult(int Result, int Number, int Power)
{
	cout << "\n " << Number << " ^ " << Power << " = " << Result << endl;
}

int main()
{
	int Number = ReadNumber();

	PrintResult(NumberToThePower2(Number), Number, 2);
	PrintResult(NumberToThePower3(Number), Number, 3);
	PrintResult(NumberToThePower4(Number), Number, 4);

	return 0;
}
	