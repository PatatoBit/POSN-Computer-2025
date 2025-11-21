#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t" << pow(2, i) << endl;
	}

	return 0;
}