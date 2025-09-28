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
			cout << "Comparing " << i << s[i] << " and " << i + j << s[i + j] << endl;
			j++;
		}

		cout << "Got: " << j << endl
				 << endl;

		i += j - 1;

		// cout << j << " ";
	}

	return 0;
}