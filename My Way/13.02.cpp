#include <iostream>

using namespace std;

void ReadNumbers(int Numbers[3])
{
	for (int i = 0; i <= 2; i++)
	{
		cout << "Please enter number " << i + 1 << "\n";
		cin >> Numbers[i];
	}
}

int MaxOf3Numbers(int Numbers[3])
{
	if (Numbers[0] > Numbers[1])
		if (Numbers[0] > Numbers[2])
			return Numbers[0];

		else
			return Numbers[2];

	else
		if (Numbers[1] > Numbers[2])
			return Numbers[1];

		else
			return Numbers[2];
}

void PrintResult(int Number)
{
	cout << "\n The maximum number is: " << Number << endl;
}

int main()
{
	int Numbers[3];

	ReadNumbers(Numbers);

	PrintResult(MaxOf3Numbers(Numbers));

	return 0;
}