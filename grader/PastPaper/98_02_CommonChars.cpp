#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	vector<char> commonChars;
	unordered_set<char> seenChars;

	for (char letterInA : a)
	{
		// If there exists the letter from A in string B, and also haven't seen it before
		if (b.find(letterInA) != string::npos && seenChars.find(letterInA) == seenChars.end())
		{
			commonChars.push_back(letterInA);
			seenChars.insert(letterInA);
		}
	}

	auto last = unique(commonChars.begin(), commonChars.end());
	commonChars.erase(last, commonChars.end());

	for (char commoners : commonChars)
	{
		cout << commoners << " ";
	}

	return 0;
}