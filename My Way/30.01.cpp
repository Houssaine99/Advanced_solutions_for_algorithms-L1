#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadPostiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < 0);
	
	return Number;
}

int Factorial(int Number)
{
	int Factorial = 1;

	for (int Counter = Number; Counter >= 1; Counter--)
	{
		Factorial *= Counter;
	}

	return Factorial;
}

int main()
{
	cout << "\n Factorial = " << Factorial(ReadPostiveNumber("Please enter a postive number:")) << endl;
}
