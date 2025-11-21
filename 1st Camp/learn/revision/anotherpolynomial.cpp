#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				// 0 = 0a + 0b + 0c
				cout << "Infinite solutions";
			}
			else
			{
				// 0 = c
				cout << "No solution";
			}
		}
		else
		{
			// 0 = bx + c
			cout << "x = " << -c / b;
		}
	}
	else
	{
		// ax2 + bx + c

		// b2 - 4ac
		int d = b * b - 4 * a * c;

		// d > 0: 2
		if (d > 0)
		{
			int pos = (-b + sqrt(d)) / (2 * a);
			int neg = (-b - sqrt(d)) / (2 * a);
			cout << "x = " << pos << " and " << neg;
		}

		// d = 0: 1
		else if (d == 0)
		{
			cout << "x = " << -b / (2 * a);
		}

		// d < 0: 0
		else
		{
			cout << "No solution";
		}
	}

	return 0;
}