#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b, i = 0;
	cin >> a >> b;

	while (a <= b)
	{
		a *= 2;
		i++;
	}

	cout << i << " ";
	cout << a - b;

	return 0;
}