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

int SumOf3Numbers(int Number1, int Number2, int Number3)
{
	return Number1 + Number2 + Number3;
}

void PrintResult(int Total)
{
	cout << "\n The total sum of numbers is: " << Total << endl;
}

int main()
{
	int Number1, Number2, Number3;

	ReadNumbers(Number1, Number2, Number3);

	PrintResult(SumOf3Numbers(Number1, Number2, Number3));

	return 0;
}