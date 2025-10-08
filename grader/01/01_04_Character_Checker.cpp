#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	int common = 0;
	vector<int> commonIndex;
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == b[i])
		{
			common++;
			commonIndex.push_back(i);
		}
	}

	cout << common << endl;
	for (int commons : commonIndex)
	{
		cout << commons << " ";
	}

	return 0;
}