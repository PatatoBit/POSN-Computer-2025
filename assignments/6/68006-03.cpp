#include <bits/stdc++.h>
using namespace std;

string isPrime(int n)
{
	if (n == 1)
		return "no";

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return "no";
		}
	}

	return "yes";
}

int main()
{
	int n;
	cin >> n;

	cout << isPrime(n);

	return 0;
}