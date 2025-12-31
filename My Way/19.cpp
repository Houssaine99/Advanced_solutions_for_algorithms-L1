#include <iostream>

using namespace std;

float ReadDiameter()
{
	float D;

	cout << "Please enter diameter D?\n";
	cin >> D;
	return D;
}

float CircleAreaThroughDiameter(float D)
{
	const float Pi = 3.141592653589793238;
	float Area = (Pi * pow(D, 2)) / 4;
	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Circle Area Through Diameter = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaThroughDiameter(ReadDiameter()));

	return 0;
}