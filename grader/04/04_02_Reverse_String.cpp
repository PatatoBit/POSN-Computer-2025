#include <bits/stdc++.h>
using namespace std;
// write code here
string reverse_string(string s)
{
	// write code here
	int wordLength = s.length();
	for (int i = 0; i < wordLength / 2; i++)
	{
		swap(s[i], s[wordLength - i - 1]);
	}
	return s;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;
	cout << reverse_string(s) << "\n";
	return 0;
}