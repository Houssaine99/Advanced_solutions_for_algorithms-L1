#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stSimpleCalculatorData
{
	int FirstNumber;
	int SecondNumber;

	char OperationType;
};

stSimpleCalculatorData ReadSimpleCalculationData()
{
	stSimpleCalculatorData SimpleCalculationData;

	cout << "Please enter first number:" << endl;
	cin >> SimpleCalculationData.FirstNumber;

	cout << "Please enter second number:" << endl;
	cin >> SimpleCalculationData.SecondNumber;

	cout << "Please enter operation type (+, -, *, /):" << endl;
	cin >> SimpleCalculationData.OperationType;

	return SimpleCalculationData;
}

int GetOperation(stSimpleCalculatorData SimpleCalculationData)
{
	switch (SimpleCalculationData.OperationType)
	{
	case '+':
		return SimpleCalculationData.FirstNumber + SimpleCalculationData.SecondNumber;
	case '-':
		return SimpleCalculationData.FirstNumber - SimpleCalculationData.SecondNumber;
	case '*':
		return SimpleCalculationData.FirstNumber * SimpleCalculationData.SecondNumber;
	case '/':
		return SimpleCalculationData.FirstNumber / SimpleCalculationData.SecondNumber;
	}
}

int main()
{
	cout << "\n Result = " << GetOperation(ReadSimpleCalculationData()) << endl;
	return 0;
}