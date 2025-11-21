#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int arr[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		cout << arr[0][i] << " ";
	}

	if (n > 1)
		for (int i = 1; i < n; i++)
		{
			cout << arr[i][m - 1] << " ";
		}

	if (n > 1)
		for (int i = m - 2; i >= 0; i--)
		{
			cout << arr[n - 1][i] << " ";
		}

	if (m > 1)
		for (int i = n - 2; i > 0; i--)
		{
			cout << arr[i][0] << " ";
		}

	return 0;
}