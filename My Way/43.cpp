#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const int SecondsPerDays = 24 * 60 * 60;
const int SecondsPerHour = 60 * 60;
const int SecondsPerMinute = 60;

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

int CalculateReminder(int TotalSeconds, int PerSeconds)
{
	return TotalSeconds % PerSeconds;
}

int TotalDays(int NumberOfSeconds)
{
	return floor(NumberOfSeconds / SecondsPerDays);
}

int TotalHours(int Reminder)
{
	return floor(Reminder / SecondsPerHour);
}

int TotalMinutes(int Reminder)
{
	return floor(Reminder / SecondsPerMinute);
}

int main()
{
	int TotalSeconds = ReadNumber("Please enter total number of seconds?");
	
	int Days = TotalDays(TotalSeconds);
	int Reminder = CalculateReminder(TotalSeconds, SecondsPerDays);
	int Hours = TotalHours(Reminder);
	Reminder = CalculateReminder(Reminder, SecondsPerHour);
	int Minutes = TotalMinutes(Reminder);
	Reminder = CalculateReminder(Reminder, SecondsPerMinute);
	int Seconds = Reminder;

	cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;
	
	return 0;
}