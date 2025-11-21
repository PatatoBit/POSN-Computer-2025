#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, newString = "";
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		int j = 1;

		while (s[i] == s[i + j])
		{
			j++;
		}

		newString += s[i];

		if (j >= 3)
		{
			i += j - 1;
		}
	}

	cout << newString;

	return 0;
}