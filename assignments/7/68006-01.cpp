#include <bits/stdc++.h>
using namespace std;

int main()
{
	int numbers[10];
	int *p = numbers;
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> p[i];
		sum += p[i];
	}

	cout << sum;

	return 0;
}