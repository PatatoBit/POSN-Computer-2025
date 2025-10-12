#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	set<int> uniqueNums;
	bool duplicated = 0;

	for (int i = 0; i < n; i++)
	{
		int n;
		cin >> n;
		if (uniqueNums.count(n) == 1)
		{
			cout << "Duplicate found.";
			return 0;
		}
		uniqueNums.insert(n);
	}

	cout << "No duplicate found.";
	return 0;
}