#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int count = 0;
	string vowels = "aeiouAEIOU";
	if (!(cin >> s))
		return 0;

	if (!s.empty())
	{
		char *str = &s[0];
		char *end = &s[s.size() - 1];

		for (; str <= end; str++)
		{
			if (vowels.find(*str) != string::npos)
				count++;
		}

		cout << count;
	}

	return 0;
}