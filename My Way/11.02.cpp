#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int Length;

void ReadHowManyMarks()
{
	cout << "How many marks do you have (from 1 to 100)?\n";
	cin >> Length;
}

void ReadMark(int Marks[100])
{

	ReadHowManyMarks();

	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Please enter number " << i + 1 << "\n";
		cin >> Marks[i];
	}

}

int CalculateSum(int Marks[100])
{

	int Sum = 0;

	for (int i = 0; i <= Length - 1; i++)
	{
		Sum += Marks[i];
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
	int Marks[100];

	ReadMark(Marks);
	PrintResult(CalculateAverage(CalculateSum(Marks)));

	return 0;
}
