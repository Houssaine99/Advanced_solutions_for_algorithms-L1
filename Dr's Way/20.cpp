#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadSquareSide()
{
	float A;
	cout << "Please enter square side area A?\n";
	cin >> A;

	return A;
}

float CircleAreaInscribedInSquare(float A)
{
	const float Pi = 3.141592653589793238;
	float Area = (Pi * pow(A, 2)) / 4;
	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));
	return 0;
}