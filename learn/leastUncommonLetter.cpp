#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int alphabet[26] = {0};

	for (int i = 0; i < s.length(); i++)
	{
		alphabet[s[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] == 1)
		{

			cout << (char)(i + 'A');
			break;
		}
	}

	return 0;
}