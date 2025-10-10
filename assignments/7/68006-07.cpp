#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[10], b[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cin >> b[i];
	}

	int *p = a, *q = b, sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += (*(p + 10 - i - 1)) * pow(10, i);
		sum += (*(q + 10 - i - 1)) * pow(10, i);
	}

	cout << sum;

	return 0;
}