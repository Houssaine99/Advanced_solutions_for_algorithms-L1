#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2};

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please enter mark 1:\n";
	cin >> Mark1;

	cout << "Please enter mark 2:\n";
	cin >> Mark2;

	cout << "Please enter mark 3:\n";
	cin >> Mark3;
}

int CalculateSum(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Sum)
{
	return (float)Sum / 3;
}

enPassFail CheckPassFail(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(float Average)
{
	cout << "\n The average is: " << Average << "\n";

	if (CheckPassFail(Average) == enPassFail::Pass)
		cout << "\nYou Passed.\n";
	else
		cout << "\n You Failed.\n";
}

int main()
{
	int Mark1, Mark2, Mark3;

	ReadMarks(Mark1, Mark2, Mark3);

	PrintResult(CalculateAverage(CalculateSum(Mark1, Mark2, Mark3)));

	return 0;
}