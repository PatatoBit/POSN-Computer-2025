#include <bits/stdc++.h>
using namespace std;

int main()
{
	int nums[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> nums[i];
	}

	int max = nums[0], min = nums[0];
	for (int i = 0; i < 4; i++)
	{
		if (nums[i] > max)
		{
			max = nums[i];
		}

		if (nums[i] < min)
		{
			min = nums[i];
		}
	}

	cout << max << " " << min;

	return 0;
}