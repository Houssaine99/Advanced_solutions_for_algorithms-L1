#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadDiameter()
{
	float D;
	cout << "Please enter diameter D?\n";
	cin >> D;
	return D;
}

float CircleAreaByDiameter(float D)
{
	const float Pi = 3.141592653589793238;
	float Area = (Pi * pow(D, 2)) / 4;
	return Area;
}

void PrintResult(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaByDiameter(ReadDiameter()));

	return 0;
}