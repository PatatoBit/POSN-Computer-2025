#include <bits/stdc++.h>
using namespace std;

string isArmstrong(string numString)
{
	int num = stoi(numString);
	int sum = 0;

	for (int i = 0; i < numString.length(); i++)
	{
		int letter = numString[i] - '0';
		sum += pow(letter, 3);
	}

	if (sum == num)
		return "Yes";
	else
		return "No";
}

int main()
{
	string s;
	cin >> s;

	cout << isArmstrong(s);
	return 0;
}