#include <bits/stdc++.h>
using namespace std;

struct Time
{
	int hour;
	int minute;
	int second;
};

int main()
{
	string time;
	cin >> time;

	stringstream tt(time);
	string segment;
	vector<int> seglist;

	while (getline(tt, segment, ':'))
	{
		seglist.push_back(stoi(segment));
	}

	Time timenow = {
			seglist[0],
			seglist[1],
			seglist[2]};

	timenow.second -= 1;

	if (timenow.second == -1)
	{
		timenow.second = 59;
		timenow.minute -= 1;
	}

	if (timenow.minute == -1)
	{
		timenow.minute = 59;
		timenow.hour -= 1;
	}

	if (timenow.hour == -1)
	{
		timenow.hour = 23;
	}

	cout << setfill('0') << setw(2) << timenow.hour << ':' << setfill('0') << setw(2) << timenow.minute << ":" << setfill('0') << setw(2) << timenow.second;

	return 0;
}