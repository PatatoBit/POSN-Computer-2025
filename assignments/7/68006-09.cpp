#include <bits/stdc++.h>
using namespace std;

int main()
{
	int count = 0;
	string s;

	if (!(cin >> s))
		return 0;

	if (!s.empty())
	{
		char *start = &s[0];
		char *end = &s[s.size()];

		while (start < end)
		{
			if ((*start - '0') % 2 == 1)
			{
				count++;
			}
			start++;
		}

		cout << count;
	}

	return 0;
}