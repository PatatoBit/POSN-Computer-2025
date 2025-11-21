#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	if (!(cin >> s))
		return 0;

	if (!s.empty())
	{
		char *p = &s[0];
		char *end = p + s.size();
		for (; p < end; ++p)
		{
			if (*p >= 'a' && *p <= 'z')
			{
				*p = *p - 32;
			}
		}
	}

	cout << s << '\n';
	return 0;
}