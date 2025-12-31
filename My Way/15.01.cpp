#include <iostream>

using namespace std;

void ReadUserInputs(float& Length, float& Width)
{
	cout << "Please enter rectangle's length:\n";
	cin >> Length;

	cout << "Please enter rectangle's width:\n";
	cin >> Width;
}

float CalculateRectangleArea(float Length, float Width)
{
	return (Length * Width);
}

void PrintResult(float Area)
{
	cout << "\n The rectangle area is: " << Area << "\n";
}

int main()
{
	float Length, Width;

	ReadUserInputs(Length, Width);

	PrintResult(CalculateRectangleArea(Length, Width));

	return 0;
}