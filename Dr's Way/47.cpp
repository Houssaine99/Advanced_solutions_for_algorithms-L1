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

	} while (InputValue <= 0);

	return InputValue;
}

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
	return LoanAmount / MonthlyInstallment;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
	float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment?");

	cout << "\n Total Months to Pay " << TotalMonths(LoanAmount, MonthlyInstallment) << " Months." << endl;

	return 0;
}