#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d, S;
	cin >> a >> b >> c >> d >> S;

	if (S > 2)
	{
		if (a > b + c)
		{
			cout << pow(a, 2) + b;
		}
		else
		{
			cout << b - c * a;
		}
	}
	else
	{
		if (b > c - a)
		{
			cout << pow(a, b) + pow(b, c);
		}
		else
		{
			cout << 3 + a + c;
		}
	}

	return 0;
}