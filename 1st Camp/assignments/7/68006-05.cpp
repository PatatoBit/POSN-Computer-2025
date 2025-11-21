#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	if (!(cin >> s))
		return 0;

	if (!s.empty())
	{
		char *start = &s[0];
		char *end = &s[s.size() - 1];

		while (start < end)
		{
			if (*start != *end)
			{
				cout << "no";
				return 0;
			}

			start++;
			end--;
		}

		cout << "yes";
	}

	return 0;
}