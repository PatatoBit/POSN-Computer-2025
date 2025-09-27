#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, arr[100];
	cin >> n;

	// Read array
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		int minIndex = i;

		// Find the lowest
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}

		swap(arr[i], arr[minIndex]);
	}

	cout << "Numbers: " << n << endl;

	// Print out
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}