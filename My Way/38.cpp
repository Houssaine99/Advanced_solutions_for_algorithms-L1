#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimeOrNot { Prime = 1, Not_Prime = 2 };

int ReadNumber(string Message)
{
	int UserInput = 0;

	cout << Message << endl;
	cin >> UserInput;

	return UserInput;
}

bool DivideByNumbersFrom2ToNumber(int UserInput)
{
	//if (UserInput == 1)
		//return false;

	for (int Counter = 2; Counter < UserInput; Counter++)
	{
		if (UserInput % Counter == 0 )
			return false;
	}

	return true;
}

enPrimeOrNot GetPrimeOrNot(int UserInput)
{
	if (DivideByNumbersFrom2ToNumber(UserInput))
		return enPrimeOrNot::Prime;
	else
		return enPrimeOrNot::Not_Prime;
}

void PrintResult(enPrimeOrNot GetPrimeOrNot)
{
	if (GetPrimeOrNot == enPrimeOrNot::Prime)
		cout << "\n Prime\n\n";
	else
		cout << "\n Not Prime\n\n";
}

int main()
{
	
	
	while (true)
	{
		PrintResult(GetPrimeOrNot(ReadNumber("Please enter a number?")));
    }
	

	return 0;
}