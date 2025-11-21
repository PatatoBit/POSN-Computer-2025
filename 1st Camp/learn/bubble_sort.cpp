#include <iostream>
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

	// Counting back
	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j < i; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "Numbers: " << n << endl;

	// Print out
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}