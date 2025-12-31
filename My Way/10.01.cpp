#include <iostream>

using namespace std;

void ReadMarks(int Marks[3])
{
	for (int i = 0; i <= 2; i++)
	{
		cout << "Please enter mark " << i + 1 << " :\n";
		cin >> Marks[i];
	}
}

float CalculateAverage(int Marks[3])
{
	int Sum = 0;

	for (int i = 0; i <= 2; i++)
	{
		Sum += Marks[i];
	}

	float Average = (float)Sum / 3;

	return Average;
}

void PrintResult(float Average)
{
	cout << "\nThe Average is: " << Average << endl;
}

int main()
{
	int Marks[3];

	ReadMarks(Marks);

	PrintResult(CalculateAverage(Marks));

	return 0;
}