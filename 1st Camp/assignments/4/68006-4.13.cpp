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

	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}

	float median;
	if (n % 2 == 0)
	{
		median = (arr[n / 2] + arr[n / 2 + 1]) / 2.0;
	}
	else
	{
		median = arr[n / 2];
	}

	cout << median;

	return 0;
}