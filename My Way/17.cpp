#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadNumbers(float& A, float& H)
{
	cout << "Please enter A:\n";
	cin >> A;

	cout << "Please enter B:\n";
	cin >> H;
}

float TriangleArea(float A, float H)
{
	float Area = 0.5 * A * H;

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Triangle Area = " << Area << endl;
}

int main()
{
	float A, H;

	ReadNumbers(A, H);

	PrintResult(TriangleArea(A, H));

	return 0;
}