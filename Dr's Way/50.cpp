#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string ReadPinCode()
{
	string PinCode = "";

	cout << "Please Enter PIN Code\n";
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string PinCode = "";
	int Counter = 3;

	do
	{
		Counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234")
			return 1;
		else
		{
			cout << "\n Wrong PIN! you have " << Counter << " more tries\n";
			system("color 4F");
		}

	} while (Counter >= 1 && PinCode != "1234");

	return false;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\n Your Account Balance is " << 7500 << "\n";
	}
	else
		cout << "\n Your card is Blocked. Call bank for help.\n";


	return 0;
}