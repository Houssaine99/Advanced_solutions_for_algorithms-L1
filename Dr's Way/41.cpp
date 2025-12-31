#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadPositiveNumber(string Message)
{
	int UserInput = 0;

	do
	{
		cout << Message << endl;
		cin >> UserInput;

	} while (UserInput <= 0);

	return UserInput;
}

float HoursToDays(float NumberOfHours)
{
	return NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
	return NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays)
{
	return NumberOfDays / 7;
}

int main()
{
	float NumberOfHours = ReadPositiveNumber("Please enter total number of hours?");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);

	cout << "Total Number of Hours = " << NumberOfHours << endl;
	cout << "Total Number of Days = " << NumberOfDays << endl;
	cout << "Total Number of Weeds = " << HoursToWeeks(NumberOfHours) << endl;

	return 0;
}