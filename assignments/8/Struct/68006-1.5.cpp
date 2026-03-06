
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

	cout << "All students" << endl;
	;
	for (auto student : students)
	{
		cout << "-----------------------------" << endl;
		cout << "ID: " << student.id << endl;
		cout << "Name: " << student.name << endl;
		cout << "Born on: " << student.birth.yy << "-" << student.birth.mm << "-" << student.birth.dd << endl;
		cout << "Checked in on: " << student.checkin.yy << "-" << student.checkin.mm << "-" << student.checkin.dd << endl;
		cout << "Level: " << student.level << endl;
	}

	return 0;
}
