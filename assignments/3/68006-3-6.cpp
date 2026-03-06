#include <bits/stdc++.h>
using namespace std;

int main()
{
	char letter;
	cin >> letter;

	if (letter >= 97 && letter <= 122)
	{
		letter -= 32;
	}

	for (int i = letter; i >= 'A'; i--)
	{
		cout << (char)i << " ";
	}

	return 0;
}