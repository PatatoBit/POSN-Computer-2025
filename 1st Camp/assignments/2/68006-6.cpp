#include <bits/stdc++.h>
using namespace std;

int main()
{
	char x;
	cin >> x;

	if (x > 122 || x < 65)
	{
		cout << "error";
		return 0;
	}

	if (x > 90)
	{
		cout << (char)(x - 32);
	}
	else
	{
		cout << (char)(x + 32);
	}

	return 0;
}