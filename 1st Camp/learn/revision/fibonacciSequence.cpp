#include <bits/stdc++.h>
using namespace std;

double fibo(int x)
{
	if (x == 0)
	{
		return 0;
	}
	else if (x == 1)
	{
		return 1;
	}
	else
	{
		return fibo(x - 2) + fibo(x - 1);
	}
}

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << fibo(i) << " ";
	}

	return 0;
}