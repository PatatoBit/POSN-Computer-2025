#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}

	return fact(n - 1) * n;
}

int main()
{
	int n, sum = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		sum += fact(i);
	}

	cout << sum;
	return 0;
}