#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadTotalSales()
{
	float TotalSales;

	cout << "Please enter total sales?\n";
	cin >> TotalSales;

	return TotalSales;
}

float GetCommissionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}

float CalculateCommission(float TotalSales)
{
	return GetCommissionPercentage(TotalSales) * TotalSales;
}

int main()
{
	float TotalSales = ReadTotalSales();

	cout << "\n Commission Percentage = " << GetCommissionPercentage(TotalSales) * 100 << " %" << endl;
	cout << "\n Total Commission = " << CalculateCommission(TotalSales) << endl;

	return 0;
}