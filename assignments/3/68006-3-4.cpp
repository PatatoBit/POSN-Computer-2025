#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> primes;

	for (int i = 2; i <= n; i++)
	{
		bool isPrime = true;

		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (!isPrime)
			continue;
		else
		{
			primes.push_back(i);
		}
	}

	for (int prime : primes)
	{
		cout << prime << " ";
	}

	return 0;
}