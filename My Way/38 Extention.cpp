#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimeOrNot { Prime = 1, Not_Prime = 2 };

int ReadPositiveNumber(string Message)
{
	int UserInput = 0;

	do
	{
		cout << endl << Message << endl;
		cin >> UserInput;

	} while (UserInput <= 0);

	return UserInput;
}

enPrimeOrNot CheckPrime(int UserInput)
{
	if (UserInput < 2)
		return enPrimeOrNot::Not_Prime;

	int HalfOfUserInputNumber = round(UserInput / 2);

	for (int Counter = 2; Counter <= HalfOfUserInputNumber; Counter++)
	{
		if (UserInput % Counter == 0)
			return enPrimeOrNot::Not_Prime;
	}
	
	return enPrimeOrNot::Prime;
}

void PrintUserInputNumberType(int UserInput)
{
	switch (CheckPrime(UserInput))
	{
	case enPrimeOrNot::Prime:
		cout << "\n The Number is Prime\n";
		break;
	case enPrimeOrNot::Not_Prime:
		cout << "\n The Number is Not Prime\n";
		break;
	}
}

void PrimeNumbers()
{
	char UserChoice = 'y';

	do
	{
		PrintUserInputNumberType(ReadPositiveNumber("Please enter a positive number?"));

		cout << "\nWould you like to enter another number or exit (y/n)?\n";
		cin >> UserChoice;


	} while (UserChoice == 'y');
}

int main()
{
	PrimeNumbers();
	return 0;
}