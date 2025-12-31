#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadNumber(string Message)
{
	int InputValue = 0;

	do
	{
		cout << Message << endl;
		cin >> InputValue;

	} while (InputValue <= 0);

	return InputValue;
}

stTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	stTaskDuration TaskDuration;

	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Reminder = 0;

	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Reminder = TotalSeconds % SecondsPerDay;

	TaskDuration.NumberOfHours = floor(Reminder / SecondsPerHour);
	Reminder %= SecondsPerHour;

	TaskDuration.NumberOfMinutes = floor(Reminder / SecondsPerMinute);
	Reminder %= SecondsPerMinute;

	TaskDuration.NumberOfSeconds = Reminder;
		
	return TaskDuration;
}

void PrintResult(stTaskDuration TaskDuration)
{
	cout << endl << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":" << TaskDuration.NumberOfMinutes
		<< ":" << TaskDuration.NumberOfSeconds << endl;
}

int main()
{
	int TotalSeconds = ReadNumber("Please Enter Total Seconds?");
	PrintResult(SecondsToTaskDuration(TotalSeconds));
	
	return 0;
}



