#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, sum1 = 0, sum2 = 0, sum3 = 0;
	cin >> n >> m;

	for (int i = n; i <= m; i++)
	{
		sum1 += i;
		sum2 += i * i;
		sum3 += pow(i, 3);
	}

	cout << sum1 << endl
			 << sum2 << endl
			 << sum3;

	return 0;
}