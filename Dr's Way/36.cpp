#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

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
		return Number1 / Number2;
	}
}

int main()
{
	float Number1 = ReadNumber("Please enter number 1:");
	float Number2 = ReadNumber("Please enter number 2:");

	enOperationType Operation = ReadOperationType();

	cout << "\n Result = " << Calculate(Number1, Number2, Operation) << endl;

	return 0;
}