#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> friends(n);
	vector<int> seenFriends;

	for (int i = 0; i < n; i++)
	{
		cin >> friends[i];
	}

	seenFriends.push_back(k);
	int current = friends[k - 1];

	// Check if current friend doesn't exist in seenFriends yet
	// If it doesn't, add to seenFriend and use their index - 1 as friends[index - 1];
	while (find(seenFriends.begin(), seenFriends.end(), current) == seenFriends.end())
	{
		seenFriends.push_back(current);
		current = friends[current - 1];
	}

	// for (auto sfr : seenFriends)
	// {
	// 	cout << sfr << " ";
	// }
	cout << endl;
	cout << n - seenFriends.size() << endl;

	return 0;
}