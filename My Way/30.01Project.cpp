#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enOddOrEvenOrAll { All = 1, Odd = 2, Even = 3 };

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
	cout << "\t#####################################\n";
	cout << "=> Chose from 1 to 3:\n";
}

enOddOrEvenOrAll GetUserChoice()
{
	int UserInput;
	Menu();
	cin >> UserInput;

	enOddOrEvenOrAll Choice = static_cast<enOddOrEvenOrAll> (UserInput);

	return Choice;
}

enOddOrEvenOrAll CheckOddOrEven(int UserNumber)
{
	if (UserNumber % 2 != 0)
		return enOddOrEvenOrAll::Odd;
	else
		return enOddOrEvenOrAll::Even;
}

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
		if (CheckOddOrEven(Counter) == enOddOrEvenOrAll::Odd)
			SumOdds += Counter;
	}
	return SumOdds;
}

int SumEvenNumbersFrom1ToN(int UserInput)
{
	int SumEvens = 0;

	for (int Counter = 1; Counter <= UserInput; Counter++)
	{
		if (CheckOddOrEven(Counter) == enOddOrEvenOrAll::Even)
			SumEvens += Counter;
	}
	return SumEvens;
}

void PrintResultAccordingToChoice(enOddOrEvenOrAll UserChoice, int UserNumber)
{
	if (UserChoice == enOddOrEvenOrAll::All)
		cout << "\n Sum of All Numbers from 1 to " << UserNumber << " = " << SumAllNumbersFrom1ToN(UserNumber) << endl;

	else if (UserChoice == enOddOrEvenOrAll::Odd)
		cout << "\n Sum of Odd Numbers from 1 to " << UserNumber << " = " << SumOddNumberFrom1ToN(UserNumber) << endl;

	else
		cout << "\n Sum of Even Numbers from 1 to " << UserNumber << " = " << SumEvenNumbersFrom1ToN(UserNumber) << endl;
}

int main()
{
	int Number = ReadNumber("Please enter N?", "N can't be negative try again!");
	PrintResultAccordingToChoice(GetUserChoice(), Number);

	return 0;
}