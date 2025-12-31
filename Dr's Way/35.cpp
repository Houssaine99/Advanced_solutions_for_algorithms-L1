#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stPiggyBankContent
{
	int Pennies, Nickles, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
	stPiggyBankContent PiggyBankContent;

	cout << "Please enter the total number of pennies:" << endl;
	cin >> PiggyBankContent.Pennies;

	cout << "Please enter the total number of nickles:" << endl;
	cin >> PiggyBankContent.Nickles;

	cout << "Please enter the total number of dimes:" << endl;
	cin >> PiggyBankContent.Dimes;

	cout << "Please enter the total number of quarters:" << endl;
	cin >> PiggyBankContent.Quarters;

	cout << "Please enter the total number of dollars:" << endl;
	cin >> PiggyBankContent.Dollars;

	return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
	int TotalPennies = PiggyBankContent.Pennies + PiggyBankContent.Nickles * 5 + PiggyBankContent.Dimes * 10
		+ PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;

	return TotalPennies;
}

int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

	cout << "Total Pennies = " << TotalPennies << endl;
	cout << "Total Dollars = " << (float)TotalPennies / 100 << endl;

	return 0;
}