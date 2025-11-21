#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	stack<int> ns;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		ns.push(x);
	}

	int m;
	cin >> m;
	stack<int> ms;
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		ms.push(x);
	}

	int max = min(n, m);

	stack<int> sum;
	for (int i = 0; i < max; i++)
	{
		sum.push(ns.top() + ms.top());
		ns.pop();
		ms.pop();
	}

	for (int i = 0; i < max; i++)
	{
		cout << sum.top() << " ";
		sum.pop();
	}

	return 0;
}