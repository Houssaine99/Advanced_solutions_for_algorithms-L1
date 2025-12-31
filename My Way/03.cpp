#include <iostream>

using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Please Enter a number: \n";
	cin >> Number;
	return Number;
}

string OddOrEven(int Number) 
{
	if (Number % 2 == 0)
		return "Even";
	else
		return "Odd";
}

void ResultPrinter(string Result)
{
	cout << "\n The number you have entered is " << Result << endl;
}

int main()
{
	ResultPrinter(OddOrEven(ReadNumber()));

	return 0;
}