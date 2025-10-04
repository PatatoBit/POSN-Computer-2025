#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[20], sum = 0;

	for (int i = 0; i < 20; i++)
	{
		int n;
		cin >> n;
		arr[i] = n;

		if (i % 2 != 0)
		{
			sum += n;
		}
	}

	cout << sum;

	return 0;
}