#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadUserInput(string Message)
{
	float UserInput = 0;

	do
	{
		cout << Message << endl;
		cin >> UserInput;
	} while (UserInput < 0);
	
	return UserInput;
}

float TotalBillAfterServiceAndSalesTax(float BillValue)
{
	float TotalBill = BillValue * 1.1;
	TotalBill *= 1.16;

	return TotalBill;
}

int main()
{
	float BillValue = ReadUserInput("Please enter bill value?");

	cout << endl;

	cout << "Bill Value = " << BillValue << endl;
	cout << "Bill Value After Service Fee and Sales Tax = " << TotalBillAfterServiceAndSalesTax(BillValue) << endl;
	return 0;
}