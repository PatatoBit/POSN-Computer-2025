#include <bits/stdc++.h>
using namespace std;

int main()
{
	char id[5];
	int salary, ot;
	cin >> id >> salary >> ot;

	float total = salary + ot;

	cout << "ID: " << id << endl;
	cout << "Bonus: ";
	if (total >= 100000)
	{
		cout << 0.1 * total;
	}
	else if (total >= 70000)
	{
		cout << 0.07 * total;
	}
	else if (total >= 50000)
	{
		cout << 0.05 * total;
	}
	else if (total >= 30000)
	{
		cout << 0.03 * total;
	}
	else
	{
		cout << 0.01 * total;
	}
	return 0;
}