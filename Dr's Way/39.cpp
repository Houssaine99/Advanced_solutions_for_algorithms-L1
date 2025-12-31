#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadPositiveUserInput(string Message)
{
	float UserInput = 0;

	do
	{
		cout << Message << endl;
		cin >> UserInput;
	} while (UserInput <= 0);

	return UserInput;
}

float CalculateRemainderToPayBack(float CashPaid, float TotalBill)
{
	return CashPaid - TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveUserInput("Please Enter Total Bill?");
	float TotalCashPaid = ReadPositiveUserInput("Please Enter Cash Paid");

	cout << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "*******************************" << endl;
	cout << "Remainder = " << CalculateRemainderToPayBack(TotalCashPaid, TotalBill) << endl;

	return 0;
}