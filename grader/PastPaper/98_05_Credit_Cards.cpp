#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	vector<int> nums;

	// Remove last character
	int lastDigit = s[15] - '0';
	s.pop_back();

	for (char digits : s)
	{
		nums.push_back(digits - '0');
	}

	// Reverse and double every odd digit
	reverse(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		if (i % 2 == 0)
		{
			nums[i] *= 2;
		}
	}

	// Split back into digits and add them all up
	int sum = 0;
	for (int num : nums)
	{
		sum += num / 10 + num % 10;
	}

	// cout << sum << " " << lastDigit << endl;
	// for (int num : nums)
	// {
	// 	cout << num << " ";
	// }
	// cout << endl;

	if (lastDigit == (10 - (sum % 10)) % 10)
	{
		cout << "yes";
	}
	else
		cout << "no";

	return 0;
}