#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumberInRange(int From, int To)
{
	int Grade;

	do
	{
		cout << "Please enter a grade between " << From << " and " << To << endl;
		cin >> Grade;
	} while (Grade < From || Grade > To);

	return Grade;
}

char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else 
		return 'F';
	
}

string LetterGradeDescription(char GradeLetter)
{
	switch (GradeLetter)
	{
	case 'A':
		return "Excellent";
	case 'B':
		return "Very Good";
	case 'C':
		return "Good";
	case 'D':
		return "Fair";
	case 'E':
		return "Poor";
	default:
		return "Fail";
	}
}

void PrintResult(int Grade)
{
	char Letter = GetGradeLetter(Grade);
	string Description = LetterGradeDescription(Letter);

	cout << "\n Result = " << Letter << endl;
	cout << "\n " << Description << endl;
}

int main()
{
	PrintResult(ReadNumberInRange(0, 100));
	return 0;
}
/*

A   Excellent
B	Very Good
C	Good
D	Fair
E	Poor
F	Fail

*/