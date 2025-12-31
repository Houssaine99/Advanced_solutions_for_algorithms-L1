#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumberInRange(string Message, int From, int To)
{
	int InputValue = 0;

	do
	{
		cout << Message << endl;
		cin >> InputValue;

	} while (InputValue < From || InputValue > To);

	return InputValue;
}

string DayOfWeek(int InputValue)
{
	switch (InputValue)
	{
	case 1:
		return "Sunday";
	case 2:
		return "Monday";
	case 3:
		return "Tuesday";
	case 4:
		return "Wednesday";
	case 5:
		return "Thursday";
	case 6:
		return "Friday";
	default:
		return "Saturday";
	}
}

void PrintDay(string Day)
{
	cout << "\n " << "It's " << Day << endl;
}

int main()
{
	PrintDay(DayOfWeek(ReadNumberInRange("Please enter day number?", 1, 7)));
	return 0;
}