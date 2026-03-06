#include <bits/stdc++.h>
using namespace std;

unsigned long long floorSpace(int x)
{
	if (x == 1)
		return 1;
	else
	{
		x -= 1;
		return 1 + (x * (x + 1) * (2 * x + 1) / 3 + x * (x + 1) + 2 * x);
	}
}

int main()
{
	int n;
	cin >> n;

	unsigned long long arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int num : arr)
	{
		cout << floorSpace(num) << endl;
	}

	return 0;
}