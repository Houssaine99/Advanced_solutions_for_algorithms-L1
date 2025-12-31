#include <iostream>

using namespace std;

void ReadNumbers(int& Number1, int& Number2, int& Number3)
{
	cout << "Please enter number 1:\n";
	cin >> Number1;

	cout << "Please enter number 2:\n";
	cin >> Number2;

	cout << "Please enter number 3:\n";
	cin >> Number3;
}

int MaxOf3Numbers(int Number1, int Number2, int Number3)
{
	if (Number1 > Number2)
		if (Number1 > Number3)
			return Number1;

		else
			return Number3;

	else
		if (Number2 > Number3)
			return Number2;

		else
			return Number3;
}

void PrintResult(int Number)
{
	cout << "\n The maximum number is: " << Number << endl;
}

int main()
{
	int Number1, Number2, Number3;

	ReadNumbers(Number1, Number2, Number3);

	PrintResult(MaxOf3Numbers(Number1, Number2, Number3));

	return 0;
}