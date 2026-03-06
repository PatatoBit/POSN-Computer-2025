#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[3][2], b[3][2], sum[3][2];

	cout << "Enter members of A:";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << endl;

	cout << "Enter members of B:";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> b[i][j];
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << endl;

	cout << "Sum" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "|  ";
		for (int j = 0; j < 2; j++)
		{
			cout << sum[i][j] << " ";
		}

		cout << "  |";
		cout << endl;
	}
	return 0;
}