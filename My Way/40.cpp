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

float BillValueAndServiceFee(float BillValue)
{
	const float SERVICE_FEE = 1.1;

	return BillValue * SERVICE_FEE;
}

float BillValueAndSalesTax(float BillValueAndServiceFee)
{
	const float SALES_TAX = 1.16;

	return BillValueAndServiceFee * SALES_TAX;
}

int main()
{
	float BillValue = ReadUserInput("Please enter bill value?");

	cout << "\n Bill Value = " << BillValue << endl;
	cout << "\n Bill value after service fee and sales tax = " << BillValueAndSalesTax(BillValueAndServiceFee(BillValue)) << endl;
	return 0;
}