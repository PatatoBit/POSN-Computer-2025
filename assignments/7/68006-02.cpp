#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s1[10], s2[10];
	char *p = s2;
	cin.getline(s1, 10);

	for (int i = 0; i < 10; i++)
	{
		p[i] = s1[i];
	}

	cout << s2;

	return 0;
}