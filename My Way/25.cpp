#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadAge()
{
	int Age;
	cout << "Please enter you Age?\n";
	cin >> Age;

	return Age;
}

bool ValidateAgeInRange(int Age, int From, int To)
{
	return (Age >= From && Age <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
	int Age;

	do
	{

		Age = ReadAge();

	} while (!ValidateAgeInRange(Age, From, To));

	return Age;
}

void PrintResult(int Age)
{
	cout << "\n Your Age is: " << Age << endl;
}

int main()
{
	PrintResult(ReadUntilAgeBetween(18, 45));
	return 0;
}