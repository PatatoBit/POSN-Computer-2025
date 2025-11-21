#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			cout << i + 1;
			return 0;
		}
		else if (i == n - 1)
		{
			cout << -1;
			return 0;
		}
	}

	return 0;
}