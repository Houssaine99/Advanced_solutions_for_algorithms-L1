#include <iostream>

using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Please enter a number:\n";
	cin >> Number;

	return Number;
}

int GetHalfNumber(int Number)
{
	int HalfNumber = Number / 2;

	return HalfNumber;
}

void PrintResult(int HalfNumber)
{
	cout << "\n The half of " << HalfNumber * 2 << " is " << HalfNumber << endl;
}

int main()
{
	PrintResult(GetHalfNumber(ReadNumber()));

	return 0;
}