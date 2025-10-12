#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	if (a == 0)
	{
		if (b == 0)
		{
			cout << (c == 0 ? "Infinite solutions" : "No solution");
		}
		else
		{
			cout << "x = " << -c / b;
		}

		return 0;
	}

	double d = b * b - 4 * a * c;

	if (d > 0)
	{
		double pos = (-b + sqrt(d)) / (2 * a);
		double neg = (-b - sqrt(d)) / (2 * a);

		cout << "x1 = " << pos << ", x2 = " << neg;
	}
	else if (d == 0)
	{
		cout << "x = " << -b / (2 * a);
	}
	else
	{
		cout << "No solution within real numbers";
	}

	return 0;
}