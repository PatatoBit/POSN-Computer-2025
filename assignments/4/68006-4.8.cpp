#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "Cross down";
	cout << endl;
	int sumDown = 0;
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i][i] << " ";
		sumDown += arr[i][i];
	}
	cout << endl;
	cout << "Sum: " << sumDown;
	cout << endl
			 << endl;

	cout << "Cross up";
	cout << endl;
	int sumUp = 0;
	for (int i = 3; i >= 0; i--)
	{
		cout << arr[i][3 - i] << " ";
		sumUp += arr[i][3 - i];
	}
	cout << endl;
	cout << "Sum: " << sumUp;
}