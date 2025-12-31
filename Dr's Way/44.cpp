#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7};

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

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please enter day number (Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7)", 1, 7);
}

string GetDayOfWeek(enDayOfWeek DayOfWeek)
{
	switch (DayOfWeek)
	{
	case enDayOfWeek::Sat:
		return "Saturday";
	case enDayOfWeek::Sun:
		return "Sunday";
	case enDayOfWeek::Mon:
		return "Monday";
	case enDayOfWeek::Tue:
		return "Tuesday";
	case enDayOfWeek::Wed:
		return "Wednesday";
	case enDayOfWeek::Thu:
		return "Thursday";
	case enDayOfWeek::Fri:
		return "Friday";
	default:
		return "Not day";
	}
}

int main()
{
	cout << "It's " << GetDayOfWeek(ReadDayOfWeek()) << endl;
	return 0;
}
