#include <iostream>

using namespace std;

void ReadNumbers(int& NumberA, int& NumberB)
{
	cout << "Please enter number A:\n";
	cin >> NumberA;

	cout << "Please enter number B:\n";
	cin >> NumberB;
}

void Swap(int& NumberA, int& NumberB)
{
	int Temp;

	Temp = NumberA;
	NumberA = NumberB;
	NumberB = Temp;
}

void PrintResult(int NumberA, int NumberB)
{
	cout << "\n Number A is: " << NumberA << "\n";
	cout << " Number B is: " << NumberB << "\n";
}

int main()
{
	int NumberA, NumberB;

	ReadNumbers(NumberA, NumberB);
	PrintResult(NumberA, NumberB);
	Swap(NumberA, NumberB);
	PrintResult(NumberA, NumberB);

	return 0;
}