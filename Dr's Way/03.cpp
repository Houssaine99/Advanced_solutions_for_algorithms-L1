#include <iostream>
#include <string>

using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
	int Number;

	cout << "Please enter a number: \n";
	cin >> Number;
	return Number;
}

enNumberType CheckNumberType(int Number)
{
	int Result = Number % 2;

	if (Result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void NumberTypePrinter(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
		cout << "\n The number you have entered is Even.\n";
	else
		cout << "\n The number you have entered is Odd.\n";
}

int main()
{
	NumberTypePrinter(CheckNumberType(ReadNumber()));

	return 0;
}