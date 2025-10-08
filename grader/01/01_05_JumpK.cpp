#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, m, sum1 = 0, sum2 = 0;
	cin >> n >> k >> m;

	for (int i = 1; i <= n; i++)
	{
		if (i % k != 0)
		{
			sum1 += i;
		}

		if (i % m == 0)
		{
			sum2 += i * i;
		}
	}

	cout << sum1 << " " << sum2;

	return 0;
}