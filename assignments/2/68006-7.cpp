#include <bits/stdc++.h>
using namespace std;

int main()
{
	float r;
	cout << "Please input radius: ";
	cin >> r;
	cout << endl;

	cout << "Calculator Menu" << endl;
	cout << "\t1. Find area" << endl;
	cout << "\t2. Find circumference" << endl;

	int choice;
	cout << "Choose menu: ";
	cin >> choice;
	cout << endl;

	if (choice == 1)
	{
		cout << "Area: " << 3.14 * pow(r, 2);
	}
	else if (choice == 2)
	{
		cout << "Circumference: " << 2 * 3.14 * r;
	}
	else
	{
		cout << "Invalid choice";
	}

	return 0;
}