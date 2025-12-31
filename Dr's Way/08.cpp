#include <iostream>

using namespace std;

enum enPassFail {Pass = 1, Fail = 2};

int ReadMark()
{
	int Number;

	cout << "Plase enter a number:\n";
	cin >> Number;

	return Number;
}

enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(int Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\nYou Passed.\n";
	else
		cout << "\nYou Failed.\n";
}

int main()
{
	PrintResult(ReadMark());

	return 0;
}