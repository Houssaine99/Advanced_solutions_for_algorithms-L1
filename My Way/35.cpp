#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stPigyBank
{
	float Pennies;
	float Nickles;
	float Dimes;
	float Quarters;
	float Dollars;
};

stPigyBank ReadCoins()
{
	stPigyBank Coins;

	cout << "How many pennies do you have?\n";
	cin >> Coins.Pennies;

	cout << "How many nickles do you have?\n";
	cin >> Coins.Nickles;

	cout << "How many dimes do you have?\n";
	cin >> Coins.Dimes;

	cout << "How many quarters do you have?\n";
	cin >> Coins.Quarters;

	cout << "How many dollars do you have?\n";
	cin >> Coins.Dollars;

	return Coins;
}

float CalculateTotalPennies(stPigyBank Coins)
{
	float TotalPennies = Coins.Pennies + (Coins.Nickles * 5) + (Coins.Dimes * 10) + (Coins.Quarters * 25) + (Coins.Dollars * 100);
	return TotalPennies;
}

float CalculateTotalDollars(float TotalPennies)
{
	float TotalDollars = TotalPennies / 100;

	return TotalDollars;
}

int main()
{
	float TotalPennies = CalculateTotalPennies(ReadCoins());

	cout << "\n Total Pennies = " << TotalPennies << endl;
	cout << "\n Total Dollars = " << CalculateTotalDollars(TotalPennies) << endl;

	return 0;
}