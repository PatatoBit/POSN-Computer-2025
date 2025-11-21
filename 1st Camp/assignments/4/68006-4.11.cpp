#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		int lowest = arr[i];

		// Find lowest
		for (int j = i; j < n; j++)
		{
			if (arr[j] < lowest)
			{
				swap(lowest, arr[j]);
			}
		}

		arr[i] = lowest;
	}

	for (int num : arr)
	{
		cout << num << " ";
	}

	return 0;
}