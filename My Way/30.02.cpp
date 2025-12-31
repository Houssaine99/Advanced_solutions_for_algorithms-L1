#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadPostiveNumber(string Message, string ErrorMessage)
{
	int Number;
	int Counter = 0;

	do
	{
		if (Counter == 0)
			cout << Message << endl;
		else
			cout << ErrorMessage << endl;

		cin >> Number;
		Counter++;

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

void PrintResult(int Factorial)
{
	cout << "\n Factorial = " << Factorial << endl;
}


int main()
{
	PrintResult(Factorial(ReadPostiveNumber("Enter a Number?", "Factorial Must Be Positive Try Again!")));
}

