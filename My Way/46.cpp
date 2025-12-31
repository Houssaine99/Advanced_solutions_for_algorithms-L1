#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void PrintLettersFromAToZ()
{
	for (int Counter = 65; Counter <= 90; Counter++)
	{
		cout << char(Counter) << endl;
	}
}

int main()
{
	PrintLettersFromAToZ();
	return 0;
}