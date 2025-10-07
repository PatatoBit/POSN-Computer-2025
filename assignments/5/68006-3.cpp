#include <bits/stdc++.h>
using namespace std;

int main()
{
	string name, lastName, gender;
	cin >> name >> lastName >> gender;

	if (gender == "Male")
	{
		cout << "Mr.";
	}
	else if (gender == "Female")
	{
		cout << "Mrs.";
	}
	else
	{
		cout << "Invalid Gender";
		return 0;
	}

	cout << name << " " << lastName;

	return 0;
}