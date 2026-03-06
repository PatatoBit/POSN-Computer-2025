#include <bits/stdc++.h>
using namespace std;

int max(int arr[], int size)
{
	int maxNumber = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > maxNumber)
		{
			maxNumber = arr[i];
		}
	}
	return maxNumber;
}

int min(int arr[], int size)
{
	int minNumber = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < minNumber)
		{
			minNumber = arr[i];
		}
	}
	return minNumber;
}

int main()
{
	int n;
	cout << "Number of elements: ";
	cin >> n;
	cout << endl;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cout << "element - " << i << ":";
		cin >> arr[i];
		cout << endl;
	}

	cout << "The largest number in the array is " << max(arr, n) << endl;
	cout << "The smallest element in the array is " << min(arr, n) << endl;
	return 0;
}