#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[4], b[4], commons = 0;

	cout << "Enter members of A: ";
	for (int i = 0; i < 4; i++)
	{
		cin >> a[i];
	}
	cout << endl;

	cout << "Enter members of B: ";
	for (int i = 0; i < 4; i++)
	{
		cin >> b[i];
	}
	cout << endl;

	for (int aMember : a)
	{
		for (int bMember : b)
		{
			if (aMember == bMember)
			{
				commons++;
			}
		}
	}

	cout << "There are " << commons << " common members between A and B.";

	return 0;
}