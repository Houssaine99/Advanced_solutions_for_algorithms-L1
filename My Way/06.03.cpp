#include <iostream>

using namespace std;

struct stInfo
{
	string FirstName;
	string LastName;
	bool HideLastName;
	bool Reversed;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please enter your first name:\n";
	cin >> Info.FirstName;

	cout << "Please enter your last name:\n";
	cin >> Info.LastName;

	cout << "Do you want to reverse it? (1 for yes 0 for no)\n";
	cin >> Info.Reversed;

	cout << "Do you want to Hide last name? (1 for yes 0 for no)\n";
	cin >> Info.HideLastName;

	return Info;
}

string GetFullName(stInfo Info)
{
	if (Info.HideLastName)
		Info.LastName = "********";

	string FullName = "";

	if (Info.Reversed)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;

	return FullName;
}

void PrintFullName(string FullName)
{
	cout << "\n Your Full Name is: " << FullName << endl;
}

int main()
{
	PrintFullName(GetFullName(ReadInfo()));

	return 0;
}