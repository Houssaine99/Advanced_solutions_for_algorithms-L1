#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ReadRadius()
{
	float R;

	cout << "Please enter circle radius R?\n";
	cin >> R;

	return R;
}

float CircleArea(float R)
{
	const float Pi = 3.141592653589793238;
	float Area = Pi * pow(R, 2);

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