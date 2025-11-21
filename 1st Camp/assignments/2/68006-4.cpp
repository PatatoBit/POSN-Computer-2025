
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int midterm, finals;
	cout << "Please enter midterm score: " << endl;
	cin >> midterm;

	cout << "Please enter final score: " << endl;
	cin >> finals;

	float avg = (float)(midterm + finals) / 2;
	cout << "Your score: " << avg << endl;

	if (avg >= 80 && avg <= 100)
	{
		cout << "Grade = G, Good";
	}
	else if (avg < 80 && avg >= 50)
	{
		cout << "Grade = P, Pass";
	}
	else if (avg < 50 && avg >= 0)
	{
		cout << "Grade = F, Fail";
	}
	else
	{
		cout << "Invalid score";
	}

	return 0;
}