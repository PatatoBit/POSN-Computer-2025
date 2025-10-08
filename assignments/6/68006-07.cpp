#include <bits/stdc++.h>
using namespace std;

string isPerfect(int n)
{
	vector<int> factors;

	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			factors.push_back(i);
		}
	}

	int sum = 0;
	for (int factor : factors)
	{
		sum += factor;
	}

	if (sum == n)
	{
		return "Yes";
	}
	else
	{
		return "No";
	}
}

int main()
{
	int n;
	cin >> n;
	cout << isPerfect(n);
	return 0;
}