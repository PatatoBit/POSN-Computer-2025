#include <bits/stdc++.h>
using namespace std;

// double fibo(int x)
// {
// 	if (x == 0)
// 	{
// 		return 0;
// 	}
// 	else if (x == 1)
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return fibo(x - 2) + fibo(x - 1);
// 	}
// }

double fibo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		// 0, 1, 1
		int current = 1, prev = 0;
		for (int i = 3; i <= n; i++)
		{
			int currentTemp = current;
			current = currentTemp + prev;
			prev = currentTemp;
		}

		return current;
	}
}

int main()
{
	int n;
	cin >> n;

	cout << fibo(n);

	return 0;
}