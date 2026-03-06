#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout << "Enter N: ";
	cin >> n;
	cout << endl;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

	return 0;
}