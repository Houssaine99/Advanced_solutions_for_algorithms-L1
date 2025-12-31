#include <iostream>

using namespace std;

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

void PrintResult(float Average)
{
	cout << "The average is: " << Average << endl;
}

int main()
{
	int Marks[100];

	ReadMark(Marks);
	PrintResult(CalculateAverage(CalculateSum(Marks)));

	return 0;
}
