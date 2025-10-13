#include <bits/stdc++.h>
using namespace std;

// Convert character to digit value (supports 0-9, A-Z)
int charToDigit(char c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	if (c >= 'A' && c <= 'Z')
		return c - 'A' + 10;
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 10;
	return 0;
}

// Convert digit value to character (supports 0-9, A-Z)
char digitToChar(int digit)
{
	if (digit < 10)
		return '0' + digit;
	return 'A' + (digit - 10);
}

// Convert from any base to base 10
long long toBase10(const string &n, int base)
{
	long long result = 0;
	long long power = 1;

	// Process from right to left
	for (int i = n.length() - 1; i >= 0; i--)
	{
		result += charToDigit(n[i]) * power;
		power *= base;
	}

	return result;
}

// Convert from base 10 to any target base
string fromBase10(long long num, int targetBase)
{
	if (num == 0)
		return "0";

	string result = "";
	while (num > 0)
	{
		result = digitToChar(num % targetBase) + result;
		num /= targetBase;
	}

	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string n;
	int base, target;
	cin >> n >> base >> target;

	// Convert input to uppercase for consistency
	transform(n.begin(), n.end(), n.begin(), ::toupper);

	// Convert to base 10 first, then to target base
	long long base10 = toBase10(n, base);
	string result = fromBase10(base10, target);

	cout << result << endl;

	return 0;
}