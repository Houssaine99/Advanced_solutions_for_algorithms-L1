#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadUserInput(string Message)
{
	int UserInput = 0;

	do
	{
		cout << Message << endl;
		cin >> UserInput;

	} while (UserInput <= 0);

	return UserInput;
}

float NumberOfDays(float NumberOfHours)
{
	return NumberOfHours / 24;
} 

float NumberOfWeeks(float NumberOfHours)
{
	return NumberOfDays(NumberOfHours) / 7;
}

int main()
{
	float NumberOfHours = ReadUserInput("Please enter number of hours?");

	cout << "Number of Hours = " << NumberOfHours << " Hours." << endl;
	cout << "Number of Days = " << NumberOfDays(NumberOfHours) << " Days." << endl;
	cout << "Number of Weeks = " << NumberOfWeeks(NumberOfHours) << " Weeks." << endl;

	return 0;
}
