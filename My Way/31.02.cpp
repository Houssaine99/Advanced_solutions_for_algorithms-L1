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

int PowerOf(int Number, int Power)
{
	int Result = 1;

	for (int Counter = 1; Counter <= Power; Counter++)
	{
		Result *= Number;
	}

	return Result;
}

void PrintResult(int Number, int Power)
{
	cout << "\n " << Number << " ^ " << Power << " = " << PowerOf(Number, Power) << endl;
}

int main()
{
	int Number = ReadNumber();

	PrintResult(Number, 2);
	PrintResult(Number, 3);
	PrintResult(Number, 4);
	
	return 0;
}