#include <bits/stdc++.h>
using namespace std;

unsigned long long findHigh(unsigned long long x)
{
	return x / 2;
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