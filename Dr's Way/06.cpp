#include <iostream>

using namespace std;

struct stInfo
{
	string FirstName;
	string LastName;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please enter your first name:\n";
	cin >> Info.FirstName;

	cout << "Please enter your last name:\n";
	cin >> Info.LastName;

	return Info;
}

string GetFullName(stInfo Info)
{
	string Result = "";

	Result = Info.FirstName + " " + Info.LastName;

	return Result;
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