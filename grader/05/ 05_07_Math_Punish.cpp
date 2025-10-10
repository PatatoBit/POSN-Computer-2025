#include <bits/stdc++.h>
using namespace std;

unsigned long long findHigh(unsigned long long x)
{
	unsigned long long max = 1;

	for (int i = x; i >= 1; i--)
	{
		for (int j = i - 1; j >= 1; j--)
		{
			if (i % j == 0 && j > max)
			{
				max = j;
				continue;
			}
		}
	}

	return max;
}

int main()
{
	int n;
	cin >> n;

	unsigned long long inputs[n];
	for (int i = 0; i < n; i++)
	{
		cin >> inputs[i];
	}

	for (auto num : inputs)
	{
		cout << findHigh(num) << endl;
	}

	return 0;
}