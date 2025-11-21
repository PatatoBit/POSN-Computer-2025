#include <bits/stdc++.h>
using namespace std;

int main()
{
	char a;
	int x;
	cin >> a >> x;

	cout << (char)((a + x - 'A') % 26 + 'A');

	return 0;
}