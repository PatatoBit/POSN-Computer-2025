#include <bits/stdc++.h>
using namespace std;

int main()
{
	string n;
	int base, target;
	cin >> n >> base >> target;

	int digits[n.length()];

	// Convert string to digits
	for (int i = 0; i < n.length(); i++)
	{
		digits[i] = n[i] - '0';
	}

	// Conver to base 10
	int base10 = 0;
	for (int i = n.length() - 1; i >= 0; i--)
	{
		base10 += digits[i] * pow(base, n.length() - i - 1);
	}

	string result;
	while (base10 > 0 && base10 != target)
	{
		int remainder = base10 % target;
		result += remainder + '0';
		base10 /= target;
	}

	cout << result;

	return 0;
}