#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void ReadATMPIN()
{
	int InputATMPIN = 0;
	int ATMPIN = 1234;
	bool IsFirstAttempt = true;

	do
	{
		if (IsFirstAttempt)
			cout << "Please enter PIN code?" << endl;
		else
			cout << "Wrong PIN try again" << endl;
		cin >> InputATMPIN;
		IsFirstAttempt = false;

	} while (InputATMPIN != ATMPIN);
}



int main()
{
	ReadATMPIN();
	cout << "\n Balance = 7500" << endl;


}