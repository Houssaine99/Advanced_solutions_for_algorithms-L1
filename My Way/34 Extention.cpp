#include <iostream>
#include <string>
#include <cmath>

using namespace std;

constexpr int MIN_SALES = 50000;
constexpr int MAX_SALES = 1000000;


bool ValidateNumbersBetween(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

float ReadTotalSales()
{
	float TotalSales;
	bool isFirstAttempte = true;

	do
	{
		if (isFirstAttempte)
			cout << "\nPlease enter total sales?\n";
		else
			cout << "\nInvalid! Total sales shoudl be between 50k and 1M\n";
		
		cin >> TotalSales;

		isFirstAttempte = false;

	} while (!ValidateNumbersBetween(TotalSales, MIN_SALES, MAX_SALES));

	return TotalSales;
}

float GetPercentage(float TotalSales)
{
	const int FirstRange = 1000000, SecondRange = 500000, ThirdRange = 100000, FourthRange = 50000;
	
	
	if (TotalSales >= FirstRange)
		return 0.01;
	else if (TotalSales >= SecondRange)
		return 0.02;
	else if (TotalSales >= ThirdRange)
		return 0.03;
	else if (TotalSales >= FourthRange)
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

void PrintResult()
{
	float TotalSales = ReadTotalSales();

	cout << "\n => Sales Entered: " << TotalSales << "$\n";
	cout << " => Commission Rate: " << GetPercentage(TotalSales) * 100 << "%\n";
	cout << " => Commission Earned: " << CalculateCommission(TotalSales) << "$\n";

}

void ExitOrRepeatProgram()
{
	char UserChoice = 'y';
	
	while (UserChoice != 'n')
	{
		PrintResult();

		cout << "\nDo you want to enter another sales amount ? (y / n)\n";
		cin >> UserChoice;
	}
}


int main()
{
	ExitOrRepeatProgram();

	return 0;
}