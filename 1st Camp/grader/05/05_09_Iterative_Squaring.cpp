#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin >> k;
	int m = 1, n = 1;
	long long sum = 0;
	while (m <= n && n <= sqrt(k))
	{
		sum += n * n;
		while (sum > k && m <= n)
		{
			sum -= m * m;
			m++;
		}
		if (sum == k)
		{
			cout << m << " " << n << "\n";
		}
		n++;
	}
	return 0;
}