
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
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && key < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}

	// Display array
	for (int num : arr)
	{
		cout << num << " ";
	}
	return 0;
}
