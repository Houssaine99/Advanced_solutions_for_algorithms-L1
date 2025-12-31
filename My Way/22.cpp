#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// 3.141592653589793238

void ReadBaseAndSide(float& A, float& B)
{
	cout << "Please enter side A?\n";
	cin >> A;

	cout << "Please enter base B?\n";
	cin >> B;
}

float CircleAreaInscribedInIsoscelesTriangle(float A, float B)
{
	const float Pi = 3.141592653589793238;
	float Area = ((Pi * pow(B, 2)) / 4) * ((2 * A - B) / (2 * A + B));

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	float A, B;

	ReadBaseAndSide(A, B);
	PrintResult(CircleAreaInscribedInIsoscelesTriangle(A, B));
	return 0;
}