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

float GetPercentage(float TotalSales)
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
		return 0;
}

float CalculateCommission(float TotalSales)
{
	float Percentage = GetPercentage(TotalSales);

	float Commission = TotalSales * Percentage;

	return Commission;
}

int main()
{
	cout << "\n Commission = " << CalculateCommission(ReadTotalSales()) << endl;
	return 0;
}