#include <bits/stdc++.h>
using namespace std;

struct Date
{
	int dd;
	int mm;
	int yy;
};

struct Student
{
	int id;
	string name;
	Date birth;
	Date checkin;
	int level;
};

int main()
{
	Student students[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> students[i].id >> students[i].name;
		cin >> students[i].birth.dd >> students[i].birth.mm >> students[i].birth.yy;
		cin >> students[i].checkin.dd >> students[i].checkin.mm >> students[i].checkin.yy;
		cin >> students[i].level;
	}

	vector<Student> highestYears, highestMonths, highestDays;

	int highestYear = students[0].checkin.yy;
	// Find most recent years
	for (auto student : students)
	{
		if (student.checkin.yy == highestYear)
		{
			highestYears.push_back(student);
		}
		else if (student.checkin.yy > highestYear)
		{
			highestYears.clear();
			highestYears.push_back(student);
			highestYear = student.checkin.yy;
		}
	}

	int highestMonth = highestYears[0].checkin.mm;
	// Find most recent years
	for (auto student : highestYears)
	{
		if (student.checkin.mm == highestMonth)
		{
			highestMonths.push_back(student);
		}
		else if (student.checkin.mm > highestMonth)
		{
			highestMonths.clear();
			highestMonths.push_back(student);
			highestMonth = student.checkin.mm;
		}
	}

	int highestDay = highestMonths[0].checkin.dd;
	// Find most recent years
	for (auto student : highestMonths)
	{
		if (student.checkin.dd == highestDay)
		{
			highestDays.push_back(student);
		}
		else if (student.checkin.dd > highestDay)
		{
			highestDays.clear();
			highestDays.push_back(student);
			highestDay = student.checkin.mm;
		}
	}

	cout << "Most recently joined student(s)" << endl;
	for (auto student : highestDays)
	{
		cout << "----------------------" << endl;
		cout << "ID: " << student.id << endl;
		cout << "Name: " << student.name << endl;
		cout << "Checked in on: " << student.checkin.yy << "-" << student.checkin.mm << "-" << student.checkin.dd << endl;
	}

	return 0;
}
