#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ReadRadius()
{
	float Radius;

	cout << "Please enter circle radius r:\n";
	cin >> Radius;

	return Radius;
}

float CircleArea(float r)
{
	const float Pi = 3.14;
	float Area = Pi * pow(r, 2);
	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleArea(ReadRadius()));

	return 0;
}