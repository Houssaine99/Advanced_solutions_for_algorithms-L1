#include <iostream>

using namespace std;

void ReadNumber(int& Number1, int& Number2)
{
	cout << "Please enter number 1:\n";
	cin >> Number1;

	cout << "Please enter number 2:\n";
	cin >> Number2;
}

int MaxNumber(int Number1, int Number2)
{
	if (Number1 > Number2)
		return Number1;
	else
		return Number2;
}

void PrintResult(int Number)
{
	cout << "\n Max number is: " << Number << "\n";
}

int main()
{
	int Number1, Number2;

	ReadNumber(Number1, Number2);

	PrintResult(MaxNumber(Number1, Number2));

	return  0;
}
