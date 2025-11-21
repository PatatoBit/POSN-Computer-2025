#include <bits/stdc++.h>
using namespace std;

int main()
{
	float sum = 0;

	for (int i = 0; i < 10; i++)
	{
		int n;
		cin >> n;
		sum += n;
	}

	cout << sum / 10;

	return 0;
}