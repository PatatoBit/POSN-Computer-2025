#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, m, n;
	cin >> a >> m >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int num : arr)
	{
		if (num + a == m)
		{
			cout << "True";
			return 0;
		}
	}

	cout << "False";
	return 0;
}