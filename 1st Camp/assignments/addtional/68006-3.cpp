#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, c;
	getline(cin, s);
	cin >> c;

	int pos = s.find(c);

	if (pos != string::npos)
	{
		cout << pos + 1;
	}
	else
	{
		cout << -1;
	}

	return 0;
}