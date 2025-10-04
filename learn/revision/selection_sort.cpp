#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	// Read array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// Sort
	for (int i = 0; i < n; i++)
	{
		int lowest = i;
		for (int j = i; j < n; j++)
		{
			if (arr[j] < arr[lowest])
			{
				lowest = j;
			}
		}

		swap(arr[i], arr[lowest]);
	}

	// Display array
	for (int num : arr)
	{
		cout << num << " ";
	}
	return 0;
}
