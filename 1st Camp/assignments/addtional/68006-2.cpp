#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	map<char, int> vowels = {{'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0}};
	string vowelList = "aeiou";

	for (char c : s)
	{
		if (vowelList.find(c) != string::npos)
		{
			vowels[c]++;
		}
	}

	for (auto vowel : vowels)
	{
		cout << vowel.second << " ";
	}

	return 0;
}