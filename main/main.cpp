#include <iostream>
using namespace std;

// Self attempt!

int main()
{
	string s;
	bool isPalindrome = true;
	cin >> s;

	int sl = s.length();

	for (int i = 0; i <= sl / 2; i++)
	{
		if (s[i] != s[sl - i - 1])
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}