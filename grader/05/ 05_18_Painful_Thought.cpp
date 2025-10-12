#include <bits/stdc++.h>
using namespace std;

float func(double x)
{
	if (x == 0)
	{
		return 0;
	}
	else if (x > 0)
	{
		return sqrt(1 + pow(func(x - 1), 2));
	}
}

float sum(double k)
{
	double sum = 0;
	for (int i = 1; i < k; i++)
	{
		sum += 1 / (func(i) + func(i - 1));
	}

	return sum;
}

int main()
{
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (auto num : arr)
	{
		cout << sum(num) << endl;
	}
	return 0;
}