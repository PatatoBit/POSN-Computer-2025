#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, cleanedString = "", reversedString = "";
	int sum = 0;
	cin >> s;

	for (char letter : s)
	{
		if (letter != '-' && letter != ' ')
		{
			cleanedString += letter;
		}
	}

	for (int i = cleanedString.length() - 1; i >= 0; i--)
	{
		int num = cleanedString[i] - '0';
		int trailPosition = cleanedString.length() - 1 - i;

		if (trailPosition % 2 == 1)
		{
			if (num * 2 >= 10)
			{
				sum = sum + (2 * num / 10) + (2 * num % 10);
			}
			else
			{
				sum += num * 2;
			}
		}
		else
		{
			sum += num;
		}
	}

	if (sum % 10 == 0)
	{
		cout << "VALID";
	}
	else
	{
		cout << "INVALID";
	}

	cout << endl;

	return 0;
}