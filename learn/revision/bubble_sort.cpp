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

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				// cout << arr[j] << ":" << j << " " << arr[j + 1] << ":" << j + 1 << endl;
				swap(arr[j], arr[j + 1]);
			}
		}

		cout << endl;
	}

	// Display array
	for (int num : arr)
	{
		cout << num << " ";
	}
	return 0;
}
