#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float& a, float& d)
{
	cout << "Please enter a:\n";
	cin >> a;

	cout << "Plese enter d:\n";
	cin >> d;
}

float CalculeRectangleArea(float a, float d)
{
	return a * sqrt(pow(d, 2) - pow(a, 2));
}

void PrintResult(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main()
{
	float a, d;

	ReadNumbers(a, d);

	PrintResult(CalculeRectangleArea(a, d));

	return 0;
}