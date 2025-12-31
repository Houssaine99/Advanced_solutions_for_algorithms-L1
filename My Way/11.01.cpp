#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please enter number 1:\n";
	cin >> Mark1;

	cout << "Please enter number 2:\n";
	cin >> Mark2;

	cout << "Please enter number 3:\n";
	cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintResult(float Average)
{
	cout << "\n The average of marks is: " << Average << endl;
}

enPassFail CheckPassFail(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else 
		return enPassFail::Fail;
}

void PrintPassFail(enPassFail Result)
{
	if (Result == enPassFail::Pass)
		cout << "\n You are Passed.\n";
	else
		cout << "\n You are Faild.\n";
}

int main()
{
	int Mark1, Mark2, Mark3;

	ReadMarks(Mark1, Mark2, Mark3);

	PrintResult(CalculateAverage(Mark1, Mark2, Mark3));

	PrintPassFail(CheckPassFail(CalculateAverage(Mark1, Mark2, Mark3)));

	return 0;
}