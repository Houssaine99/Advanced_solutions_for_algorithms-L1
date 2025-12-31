#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// 3.141592653589793238

void ReadTriangleData(float& A, float& B, float& C)
{
	cout << "Please enter triangle side A?\n";
	cin >> A;

	cout << "Please enter triangle base B?\n";
	cin >> B;

	cout << "Please enter triangle side C?\n";
	cin >> C;
}

float CircleAreaInscribedInArbitraryTriangle(float A, float B, float C)
{
	const float Pi = 3.141592653589793238;
	float P;
	P = (A + B + C) / 2;

	float T;
	T = ((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))));

	float Area = Pi * pow(T, 2);

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	float A, B, C;

	ReadTriangleData(A, B, C);
	PrintResult(CircleAreaInscribedInArbitraryTriangle(A, B, C));
	return 0;
}