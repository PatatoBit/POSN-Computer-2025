#include <bits/stdc++.h>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

int main()
{
	// DD/MM/YYYY
	string date;
	cin >> date;

	stringstream ss(date);
	string segment;
	vector<int> seglist;
	while (getline(ss, segment, '/'))
	{
		seglist.push_back(stoi(segment));
	}

	Date datenow = {
			seglist[0],
			seglist[1],
			seglist[2]};

	cout << "February " << datenow.year << " has ";
	if ((datenow.year % 4 == 0 && datenow.year % 100 != 0) || (datenow.year % 400 == 0))
	{
		cout << 29;
	}
	else
	{
		cout << 28;
	}

	cout << " days" << endl;

	return 0;
}