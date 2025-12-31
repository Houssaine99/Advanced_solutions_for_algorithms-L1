#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// 3.141592653589793238

float ReadCircumference()
{
	float L;
	cout << "Please enter Circumference?\n";
	cin >> L;

	return L;
}

float CircleAreaByCircumference(float L)
{
	const float Pi = 3.141592653589793238;
	float Area = pow(L, 2) / (4 * Pi);

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaByCircumference(ReadCircumference()));
	return 0;
}