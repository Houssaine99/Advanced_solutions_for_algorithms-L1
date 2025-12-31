#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadSquareArea()
{
	float A;
	cout << "Please enter square area A?\n";
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
	cout << "\n The area of a circle inscribed in a square = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaInscribedInSquare(ReadSquareArea()));

	return 0;
}