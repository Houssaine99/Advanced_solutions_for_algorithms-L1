#include <iostream>

using namespace std;

void ReadNumbers(int& Number1, int& Number2)
{
	cout << "Please enter number 1:\n";
	cin >> Number1;

	cout << "Please enter number 2:\n";
	cin >> Number2;
}

void PrintResultBeforeSwap(int Number1, int Number2)
{
	cout << "\n Number 1 is: " << Number1 << "\n";
	cout << " Number 2 is: " << Number2 << "\n";
}

void SwapNumbers(int& Number1, int& Number2)
{
	int Temp = Number1;
	Number1 = Number2;
	Number2 = Temp;
}

void PrintResultAfterSwap(int Number1, int Number2)
{
	cout << "\n Number 1 is: " << Number1 << "\n";
	cout << " Number 2 is: " << Number2 << "\n";
}

int main()
{
	int Number1, Number2;

	ReadNumbers(Number1, Number2);
	PrintResultBeforeSwap(Number1, Number2);
	SwapNumbers(Number1, Number2);
	PrintResultAfterSwap(Number1, Number2);

	return 0;
}