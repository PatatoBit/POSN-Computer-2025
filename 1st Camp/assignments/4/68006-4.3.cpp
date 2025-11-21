#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[20], count = 0;

	for (int i = 0; i < 20; i++)
	{
		int n;
		cin >> n;
		arr[i] = n;

		if (n > 0)
		{
			count++;
		}
	}

	cout << count;

	return 0;
}