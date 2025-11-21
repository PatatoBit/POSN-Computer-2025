#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int n : arr)
	{
		cout << n << "\t";

		for (int i = 0; i < n; i++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}