#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void ReadNumberAndM(int& Number, int& M)
{
	cout << "Please enter a number?\n";
	cin >> Number;

	cout << "Please enter M?\n";
	cin >> M;
}

int CalculatePowerOfM(int Number, int M)
{
	int Result = 1;

	for (int Counter = 1; Counter <= M; Counter++)
	{
		Result *= Number;
	}

	return Result;
}

void PrintPower(int Number, int M)
{
	cout << "\n " << Number << " ^ " << M << " = " << CalculatePowerOfM(Number, M) << endl;
}

int main()
{
	int Number, M;

	ReadNumberAndM(Number, M);

	PrintPower(Number, M);

	return 0;
}