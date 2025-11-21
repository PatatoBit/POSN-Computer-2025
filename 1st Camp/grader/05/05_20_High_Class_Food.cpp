#include <bits/stdc++.h>
using namespace std;

int combi(int k)
{
	// C(k, r) = k! / r! (k - r)!
	return k * (k - 1) / 2;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int arr[123] = {0};
	for (int i = 0; i < n; i++)
	{
		int n;
		cin >> n;
		int remainder = n % 123;

		arr[remainder]++;
	}

	int sum = 0;
	for (auto num : arr)
	{
		sum += combi(num);
	}

	cout << sum;

	return 0;
}