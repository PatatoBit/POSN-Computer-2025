#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> nums;

	int n;
	do
	{
		cin >> n;
		nums.push_back(n);
	} while (n != -1);

	// Remove -1
	nums.pop_back();

	while (nums.size() != 1)
	{
		// Shift by nums[0]
		int firstElement = nums[0];
		for (int i = 0; i < firstElement; i++)
		{
			rotate(nums.begin(), nums.end() - 1, nums.end());
		}

		// Remove last element
		nums.pop_back();
	}

	for (int num : nums)
	{
		cout << num << " ";
	}

	return 0;
}