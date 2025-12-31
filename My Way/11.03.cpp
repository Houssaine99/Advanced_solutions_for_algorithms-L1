#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int Length;

void ReadHowManyMarks()
{
	cout << "How many marks do you have?\n";
	cin >> Length;
}

int ReadMark(int index)
{
	int Mark;

	cout << "Please enter number " << index << ":\n";
	cin >> Mark;

	return Mark;
}

int CalculateSum()
{
	ReadHowManyMarks();

	int Sum = 0;

	for (int i = 1; i <= Length; i++)
	{
		Sum += ReadMark(i);
	}

	return Sum;
}

float CalculateAverage(int Sum)
{
	return (float)Sum / Length;
}

enPassFail CheckAverage(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(float Average)
{
	cout << "The average is: " << Average << endl;

	if (CheckAverage(Average) == enPassFail::Pass)
		cout << "\n You Passed.\n";
	else
		cout << "\n You Faild.\n";
}

int main()
{
	PrintResult(CalculateAverage(CalculateSum()));
	return 0;
}
