#include <iostream>
#include <string>

using namespace std;

enum enDecision { Hired = 1, Rejected = 2 };

int ReadAge()
{
	int Age;

	cout << "Please enter your age: \n";
	cin >> Age;
	return Age;
}

bool HasDrivingLicense()
{
	bool HasDrivingLicense;

	cout << "Do you have a driving license? 1/0 \n";
	cin >> HasDrivingLicense;
	return HasDrivingLicense;
}

enDecision DecisionHiredOrRejected(int Age, bool HasDrivingLicense)
{
	bool Result = Age > 21 && HasDrivingLicense == true;

	if (Result == true)
		return enDecision::Hired;
	else
		return enDecision::Rejected;
}

void DecisionHiredOrRejectedPrinter(enDecision Decision)
{
	if (Decision == enDecision::Hired)
		cout << "\nYou are Hired.\n";
	else
		cout << "\nYou are Rejected.\n";
}

int main()
{
	DecisionHiredOrRejectedPrinter(DecisionHiredOrRejected(ReadAge(), HasDrivingLicense()));

	return 0;
}
