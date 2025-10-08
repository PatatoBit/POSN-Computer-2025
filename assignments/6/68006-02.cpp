#include <bits/stdc++.h>
using namespace std;

int perimeter(int a, int b)
{
	return a + b + sqrt(a * a + b * b);
}

int main()
{
	int x, y;
	cin >> x >> y;

	cout << perimeter(x, y);

	return 0;
}