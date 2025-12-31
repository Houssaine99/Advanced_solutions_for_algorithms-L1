#include <iostream>

using namespace std;

struct stInfo
{
	int Age;
	bool HasDrivingLicense;
	bool HasRecommendation;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please enter you age: \n";
	cin >> Info.Age;

	cout << "Do you have a driving license? (1 for yes, 0 for no) \n";
	cin >> Info.HasDrivingLicense;

	cout << "Do you have a recommendation? (1 for yes, 0 for no) \n";
	cin >> Info.HasRecommendation;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDrivingLicense) || Info.HasRecommendation;
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "\nHired\n";
	else
		cout << "\nRejected\n";
}

int main()
{
	PrintResult(ReadInfo());

	return 0;
}