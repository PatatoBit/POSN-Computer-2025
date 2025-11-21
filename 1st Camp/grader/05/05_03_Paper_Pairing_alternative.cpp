#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	unordered_map<int, int> nums; // O(1) average lookup instead of O(log n)

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		nums[x]++;
	}

	for (const auto &num : nums) // Use const reference to avoid copying
	{
		if (num.second % 2 != 0)
		{
			cout << num.first;
			return 0;
		}
	}

	return 0;
}