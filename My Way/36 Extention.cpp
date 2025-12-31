#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

bool isDivisionByZero = false;

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

enOperationType ReadOperationType()
{
	char OperationType = '+';

	cout << "Please enter operation type (+, -, *, /):\n";
	cin >> OperationType;

	return (enOperationType)OperationType;
}

float Calculate(float Number1, float Number2, enOperationType OperationType)
{
	switch (OperationType)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
	{
		if (Number2 == 0)
		{
			isDivisionByZero = true;
			return 0;
		}
		else
			return Number1 / Number2;
	}
		
	}
}

void PrintResult()
{
	float Number1 = ReadNumber("Please enter number 1:");
	float Number2 = ReadNumber("Please enter number 2:");

	enOperationType Operation = ReadOperationType();

	float Result = Calculate(Number1, Number2, Operation);

	if (isDivisionByZero)
		cout << "\n Can't divide by zero!\n";
	else
		cout << "\n Result = " << Result << endl;

	isDivisionByZero = false;
}

void SimpleCalculator()
{
	char UserChoice = 'y';
	do
	{
		PrintResult();
		cout << "\n Would you like to perform another operation(y/n)?\n";
		cin >> UserChoice;
		cout << endl;

	} while (UserChoice == 'y');
}

int main()
{
	SimpleCalculator();
	
	return 0;
}