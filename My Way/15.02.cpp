#include <iostream>

using namespace std;

float ReadWidthA()
{
	float A;
	cout << "Please enter rectangle width A:\n";
	cin >> A;

	return A;
}

float ReadLengthB()
{
	float B;
	cout << "Please enter rectangle length B:\n";
	cin >> B;

	return B;
}

float CalculateRectangleArea(float A, float B)
{
	return A * B;
}

void PrintResult(float Area)
{
	cout << "\n Rectangle Area = " << Area << "\n";
}

int main()
{
	
	PrintResult(CalculateRectangleArea(ReadLengthB(), ReadWidthA()));

	return 0;
}