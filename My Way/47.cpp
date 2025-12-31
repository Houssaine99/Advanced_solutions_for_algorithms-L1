#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadPositiveNumber(string Message)
{
	float InputValue = 0;

	do
	{
		cout << Message << endl;
		cin >> InputValue;

	} while (InputValue < 0);

	return InputValue;
}

float LoanMonths(float MonthlyPayment, float LoanAmount)
{
	return LoanAmount / MonthlyPayment;
}

int main()
{
	cout << "\n " << LoanMonths(ReadPositiveNumber("Please enter monthly payment?"), ReadPositiveNumber("Please enter loan amount?")) << " Months" << endl;

	return 0;
}