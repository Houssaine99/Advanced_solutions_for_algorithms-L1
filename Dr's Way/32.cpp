#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Please enter a number?\n";
	cin >> Number;

	return Number;
}

int ReadM()
{
	int M;
	cout << "Please enter M?\n";
	cin >> M;

	return M;
}

int PowerOfM(int Number, int M)
{
	if (M == 0)
		return  1;

	int Result = 1;

	for (int Counter = 1; Counter <= M; Counter++)
	{
		Result *= Number;
	}
	return Result;
}

int main()
{
	cout << "\n Result = " << PowerOfM(ReadNumber(), ReadM()) << endl;
}