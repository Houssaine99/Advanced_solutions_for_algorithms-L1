#include <iostream>
#include <string>

using namespace std;

void ReadName(string& Name)
{
	cout << "\nPlease enter your name: ";
	cin >> Name;
}

void PrintName(string Name)
{
	cout << "\nYour name is: " << Name << "\n";
}

int main()
{
	string Name;

	ReadName(Name);

	PrintName(Name);

	return 0;
}