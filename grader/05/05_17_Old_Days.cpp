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
		vector<int> comparer;
		for (int j = 0; j <= i; j++)
		{
			comparer.push_back(arr[j]);
		}

		vector<int> theRest;
		for (int j = i + 1; j <= i + 1 + comparer.size() - 1; j++)
		{
			theRest.push_back(arr[j]);
		}

		if (theRest == comparer)
		{
			cout << i + 1;
			return 0;
		}

		cout << endl;

		if (i + 1 == n / 2)
		{
			cout << n;
			return 0;
		}
	}

	return 0;
}