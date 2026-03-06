#include <iostream>
using namespace std;

int main()
{
	int nums[4];
	int length = sizeof(nums) / sizeof(nums[0]);

	for (int i = 0; i < length; i++)
	{
		cin >> nums[i];
	}

	int max = nums[0], min = nums[0];

	for (int num : nums)
	{
		if (num > max)
			max = num;

		else if (num < min)
		{
			min = num;
		}
	}

	cout << max << " " << min;

	return 0;
}