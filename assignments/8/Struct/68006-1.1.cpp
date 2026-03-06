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

	int highestYear = students[0].birth.yy;
	// Find most recent years
	for (auto student : students)
	{
		if (student.birth.yy == highestYear)
		{
			highestYears.push_back(student);
		}
		else if (student.birth.yy > highestYear)
		{
			highestYears.clear();
			highestYears.push_back(student);
			highestYear = student.birth.yy;
		}
	}

		int highestMonth = highestYears[0].birth.mm;
	// Find most recent years
	for (auto student : highestYears)
	{
		if (student.birth.mm == highestMonth)
		{
			highestMonths.push_back(student);
		}
		else if (student.birth.mm > highestMonth)
		{
			highestMonths.clear();
			highestMonths.push_back(student);
			highestMonth = student.birth.mm;
		}
	}

	int highestDay = highestMonths[0].birth.dd;
	// Find most recent years
	for (auto student : highestMonths)
	{
		if (student.birth.dd == highestDay)
		{
			highestDays.push_back(student);
		}
		else if (student.birth.dd > highestDay)
		{
			highestDays.clear();
			highestDays.push_back(student);
			highestDay = student.birth.mm;
		}
	}

	cout << "Youngest student(s)" << endl;
	for (auto student : highestDays)
	{
		cout << "----------------------" << endl;
		cout << "ID: " << student.id << endl;
		cout << "Name: " << student.name << endl;
		cout << "Born on: " << student.birth.yy << "-" << student.birth.mm << "-" << student.birth.dd << endl;
	}

	return 0;
}
