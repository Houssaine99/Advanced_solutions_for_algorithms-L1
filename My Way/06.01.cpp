#include <iostream>

using namespace std;

struct stPerson 
{
	string FirstName;
	string LastName;
};

stPerson ReadFullName()
{
	stPerson Person;

	cout << "Please enter your first name: \n";
	cin >> Person.FirstName;

	cout << "Please enter your last name: \n";
	cin >> Person.LastName;

	return Person;
}

string FullName(stPerson Person)
{
	return Person.FirstName + " " + Person.LastName;
}

void PrintFullName(string FullName)
{
	cout << "\n Your Full Name is: " << FullName << endl;
}

int main()
{
	PrintFullName(FullName(ReadFullName()));

	return 0;
}