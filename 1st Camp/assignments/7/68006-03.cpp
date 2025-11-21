#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	if (a == b)
		cout << "yes";
	else
		cout << "no";

	return 0;
}