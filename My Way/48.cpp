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

float MonthlyLoanIstallmentAmount(float LoanAmount, float TotalMonths)
{
	return LoanAmount / TotalMonths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
	float TotalMonths = ReadPositiveNumber("Pleae Enter Total Months?");

	cout << "\n Monthly Installment = " << MonthlyLoanIstallmentAmount(LoanAmount, TotalMonths) << endl;

	return  0;
}