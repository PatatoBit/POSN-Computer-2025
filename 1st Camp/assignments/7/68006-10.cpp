#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	int pos = a.find(b);

	if (pos != string::npos)
		cout << pos + 1;
	else
		cout << 0;

	return 0;
}