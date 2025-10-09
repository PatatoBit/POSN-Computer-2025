#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, prev, current = 0;
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		cout << current;

		if (i != n)
			cout << ", ";

		if (i == 0)
		{
			current += 1;
		}
		else
		{
			int temp = prev;
			prev = current;
			current += temp;
		}
	}

	return 0;
}