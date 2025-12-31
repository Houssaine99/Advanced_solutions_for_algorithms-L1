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
	int Counter = 0;

	do
	{
		PinCode = ReadPinCode();

		if (PinCode == "1234")
			return 1;
		else
		{
			cout << "\n Wrong PIN!\n";
			system("color 4F");
			Counter++;
		}

	} while (Counter != 3);

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
		cout << "\n Your Account is Blocked\n";


	return 0;
}