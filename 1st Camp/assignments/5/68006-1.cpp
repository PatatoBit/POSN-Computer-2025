#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] <= 90 && s[i] >= 65)
		{
			cout << (char)(s[i] + 32);
		}
		else if (s[i >= 97 && s[i] <= 122])
		{
			cout << (char)(s[i] - 32);
		}
		else
		{
			cout << "not a character at " << s[i] << endl;
		}
	}

	return 0;
}