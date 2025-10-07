#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	int maxLen = max(a.length(), b.length());
	for (int i = 0; i < maxLen; i++)
	{
		if (i < a.length())
			cout << a[i];
		if (i < b.length())
			cout << b[i];
	}

	return 0;
}