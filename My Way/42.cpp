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

float DaysToSeconds(float Days)
{
	return Days * 24 * 60 * 60;
}

float HoursToSeconds(float Hours)
{
	return Hours * 60 * 60;
}

float MinutesToSeconds(float Minutes)
{
	return Minutes * 60;
}

float TaskDurationInSeconds(float Seconds, float Minutes, float Hours, float Days)
{
	return Seconds + DaysToSeconds(Days) + HoursToSeconds(Hours) + MinutesToSeconds(Minutes);
}

int main()
{
	float Days = ReadPositiveNumber("Please enter total number of Days?");
	float Hours = ReadPositiveNumber("Please enter total number of hours?");
	float Minutes = ReadPositiveNumber("Please enter total number of minutes?");
	float Seconds = ReadPositiveNumber("Please enter total number of seconds?");

	float TaskDuration = TaskDurationInSeconds(Seconds, Minutes, Hours, Days);

	cout << "Days = " << Days << endl;
	cout << "Hours = " << Hours << endl;
	cout << "Minutes = " << Minutes << endl;
	cout << "Seconds = " << Seconds << endl;
	cout << "Task Duration in Seconds = " << TaskDuration << endl;

	return 0;
}