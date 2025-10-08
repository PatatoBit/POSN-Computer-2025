#include <bits/stdc++.h>
using namespace std;

int power(int base, int pow)
{
	if (pow == 0)
		return 1;
	if (pow == 1)
		return base;

	return power(base, pow - 1) * base;
}

int main()
{
	int base, pow;
	cin >> base >> pow;

	cout << power(base, pow);

	return 0;
}