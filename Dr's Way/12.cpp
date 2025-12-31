#include <iostream>

using namespace std;

void ReadNumber(int& Number1, int& Number2)
{
	cout << "Please enter number 1:\n";
	cin >> Number1;

	cout << "Please enter number 2:\n";
	cin >> Number2;
}

int MaxOf2Number(int Number1, int Number2)
{
	if (Number1 > Number2)
		return Number1;
	else
		return Number2;
}

void PrintResult(int Number)
{
	cout << "\n The maximum number is: " << Number << "\n";
}

int main()
{
	int Number1, Number2;

	ReadNumber(Number1, Number2);

	PrintResult(MaxOf2Number(Number1, Number2));

	return  0;
}
