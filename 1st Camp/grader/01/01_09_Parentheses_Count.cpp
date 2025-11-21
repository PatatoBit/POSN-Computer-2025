#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, result = "";
	bool has = false;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
		case '[':
			s[i] = '(';
			has = true;
			break;
		case ']':
			s[i] = ')';
			has = true;
			break;
		case '(':
			s[i] = '[';
			has = true;
			break;
		case ')':
			s[i] = ']';
			has = true;
			break;
		default:
			s[i] = s[i];
		}
	}

	if (!has)
	{
		cout << "No parentheses";
		return 0;
	}

	cout << s << endl;

	return 0;
}