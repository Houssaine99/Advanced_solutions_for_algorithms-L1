#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// 3.141592653589793238

int ReadAge()
{
	int Age;

	cout << "Please enter your age?\n";
	cin >> Age;

	return Age;
}

bool ValidateAgeInRange(int Age, int From, int To)
{
	if (Age >= From && Age <= To)
		return true;
	else
		return false;
}

void PrintResult(int Age)
{
	if (ValidateAgeInRange(Age, 18, 30))
		cout << "\n Valid Age.\n";
	else
		cout << "\n Invalid Age.\n";
}

int main()
{
	PrintResult(ReadAge());
}