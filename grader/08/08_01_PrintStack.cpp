#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	stack<int> s;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		s.push(x);
	}

	stack<int> ss;
	for (int i = 0; i < n; i++)
	{
		ss.push(s.top());
		s.pop();
	}

	while (!ss.empty())
	{
		cout << ss.top() << " ";
		ss.pop();
	}
	return 0;
}