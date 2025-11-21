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
			seglist[2],
	};

	datenow.day = datenow.day + 1;

	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (datenow.month == 2 && ((datenow.year % 400 == 0) || (datenow.year % 4 == 0 && datenow.year % 100 != 0)))
	{
		daysInMonth[1] = 29;
	}

	if (datenow.day > daysInMonth[datenow.month - 1])
	{
		datenow.day = 1;
		datenow.month++;
		if (datenow.month > 12)
		{
			datenow.month = 1;
			datenow.year++;
		}
	}

	cout << datenow.day << "/" << datenow.month << "/"
			 << datenow.year << endl;

	return 0;
}