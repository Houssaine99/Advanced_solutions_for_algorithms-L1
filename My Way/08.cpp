#include <iostream>

using namespace std;

enum enResult {Pass, Fail};

int ReadMark()
{
	int Mark;

	cout << "Please enter you mark:\n";
	cin >> Mark;

	return Mark;
}

enResult PassFailCheck(int Mark)
{
	if (Mark >= 50)
		return enResult::Pass;
	else
		return enResult::Fail;
}

void PrintResult(enResult Result)
{
	if (Result == enResult::Pass)
		cout << "\n Pass.\n";
	else
		cout << "\n Fail.\n";
}

int main()
{
	PrintResult(PassFailCheck(ReadMark()));

	return 0;
}