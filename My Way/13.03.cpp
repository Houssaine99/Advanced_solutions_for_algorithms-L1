#include <iostream>

using namespace std;

void ReadNumbers(int& Number1 , int& Number2, int& Number3)
{
	for (int i = 1; i <= 3; i++)
	{
		cout << "Please enter number " << i << ":\n";
		
		if (i == 1)
			cin >> Number1;
		else if (i == 2)
			cin >> Number2;
		else
			cin >> Number3;
	}
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