#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	for (int i = 1; i <= 1000; i++)
	{
		if (i % (a * b) == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}