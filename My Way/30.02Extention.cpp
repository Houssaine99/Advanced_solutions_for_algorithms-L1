#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enOddOrEvenOrAllOrFactorial { All = 1, Odd = 2, Even = 3, Factorial = 4};

int ReadNumber(string Message, string ErrorMessage)
{
	int Number;
	bool isFirstAttempt = true;

	do
	{
		if (isFirstAttempt)
			cout << Message << endl;
		else
			cout << ErrorMessage << endl;

		cin >> Number;
		isFirstAttempt = false;

	} while (Number < 0);
	return Number;
}

void Menu()
{
	cout << "\n\t#####################################\n";
	cout << "\t# 1. Sum All Numbers (from 1 to N). #\n";
	cout << "\t# 2. Sum Odds (from 1 to N).        #\n";
	cout << "\t# 3. Sum Even(from 1 to N).         #\n";
	cout << "\t# 4. Factorial of N.                #\n";
	cout << "\t#####################################\n";
	cout << "=> Choose from 1 to 4:\n";
}

enOddOrEvenOrAllOrFactorial GetUserChoice()
{
	int UserInput;
	Menu();
	cin >> UserInput;

	enOddOrEvenOrAllOrFactorial Choice = static_cast<enOddOrEvenOrAllOrFactorial> (UserInput);

	return Choice;
}

//enOddOrEvenOrAll CheckOddOrEven(int UserNumber)
//{
//	if (UserNumber % 2 != 0)
//		return enOddOrEvenOrAll::Odd;
//	else
//		return enOddOrEvenOrAll::Even;
//}

int SumAllNumbersFrom1ToN(int UserNumber)
{
	int SumAll = 0;

	for (int Counter = 1; Counter <= UserNumber; Counter++)
		SumAll += Counter;

	return SumAll;
}

int SumOddNumberFrom1ToN(int UserNumber)
{
	int SumOdds = 0;

	for (int Counter = 1; Counter <= UserNumber; Counter++)
	{
		if (Counter % 2 != 0)
			SumOdds += Counter;
	}
	return SumOdds;
}

int SumEvenNumbersFrom1ToN(int UserNumber)
{
	int SumEvens = 0;

	for (int Counter = 1; Counter <= UserNumber; Counter++)
	{
		if (Counter % 2 == 0)
			SumEvens += Counter;
	}
	return SumEvens;
}

int CalculateFactorial(int UserNumber)
{
	int Factorial = 1;

	if (UserNumber == 1)
		return 1;

	for (int Counter = 1; Counter <= UserNumber; Counter++)
	{
		Factorial *= Counter;
	}
	return Factorial;
}

void PrintResultAccordingToChoice(enOddOrEvenOrAllOrFactorial UserChoice, int UserNumber)
{
	switch (UserChoice)
	{
	case enOddOrEvenOrAllOrFactorial::All:
		cout << "\n Sum of All Numbers from 1 to " << UserNumber << " = " << SumAllNumbersFrom1ToN(UserNumber) << endl;
		break;
	case enOddOrEvenOrAllOrFactorial::Odd:
		cout << "\n Sum of Odd Numbers from 1 to " << UserNumber << " = " << SumOddNumberFrom1ToN(UserNumber) << endl;
		break;
	case enOddOrEvenOrAllOrFactorial::Even:
		cout << "\n Sum of Even Numbers from 1 to " << UserNumber << " = " << SumEvenNumbersFrom1ToN(UserNumber) << endl;
		break;
	case enOddOrEvenOrAllOrFactorial::Factorial:
		cout << "\n Factorial of " << UserNumber << " = " << CalculateFactorial(UserNumber) << endl;
		break;
	default:
		cout << "\n Invalid choice!\n";
		break;
	}
}

int main()
{
	int Number = ReadNumber("Please enter N?", "N can't be negative try again!");
	PrintResultAccordingToChoice(GetUserChoice(), Number);

	return 0;
}