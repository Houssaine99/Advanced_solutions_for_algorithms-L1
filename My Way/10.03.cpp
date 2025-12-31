#include <iostream>

using namespace std;

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

void PrintResult(float Average)
{
	cout << "The average is: " << Average << endl;
}

int main()
{
	PrintResult(CalculateAverage(CalculateSum()));
	return 0;
}
