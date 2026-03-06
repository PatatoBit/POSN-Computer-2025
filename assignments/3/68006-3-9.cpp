#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << endl;

	for (int i = 'A'; i < 'A' + n; i++)
	{
		// cout << (char)i;
		for (int j = 'A'; j <= i; j++)
		{
			cout << (char)j;
		}
		cout << endl;
	}

	return 0;
}