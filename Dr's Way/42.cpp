#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
	int UserInput = 0;

	do
	{
		cout << Message << endl;
		cin >> UserInput;

	} while (UserInput <= 0);

	return UserInput;
}

stTaskDuration ReadTaskDuration()
{
	stTaskDuration TaskDuration;

	TaskDuration.NumberOfDays = ReadPositiveNumber("Please enter number of days?");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter number of hours?");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter number of minutes?");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter number of seconds?");

	return TaskDuration;
}

int TaskDurationInSeconds(stTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;

	DurationInSeconds += TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;
}

int main()
{
	cout << "\n Task Duration In Seconds = " << TaskDurationInSeconds(ReadTaskDuration()) << endl;
	cout << endl;
	return 0;
}