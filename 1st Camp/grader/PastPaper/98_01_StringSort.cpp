#include <bits/stdc++.h>
using namespace std;

int main()
{
	string word;
	cin >> word;

	vector<char> lettersList;

	for (char character : word)
	{
		lettersList.push_back(character);
	}

	// Sort characters
	sort(lettersList.begin(), lettersList.end());

	// Remove dulpicated letters
	auto last = unique(lettersList.begin(), lettersList.end());
	lettersList.erase(last, lettersList.end());

	for (auto letter : lettersList)
	{
		cout << letter << " ";
	}

	return 0;
}