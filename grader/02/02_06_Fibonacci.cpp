#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, prev, current = 0;
	cin >> n;

	for (int i = 0; i < n + 1; i++)
	{
		cout << current;
		if (i == 0)
			current++;
	}

	return 0;
}