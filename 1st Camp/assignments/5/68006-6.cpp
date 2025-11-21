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

	for (int i = 0; i < cleanedString.length(); i++)
	{
		int num = cleanedString[i] - '0';

		if (i % 2 == 0)
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
		cout << "Card exists";
	}
	else
	{
		cout << "Card doesn't exist";
	}

	cout << endl;

	return 0;
}