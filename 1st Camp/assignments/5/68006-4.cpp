#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int numCount = 0, consonantCount = 0, vowelCount = 0;
	string numberList = "0123456789";
	string consonantList = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
	string vowelList = "aeiouAEIOU";

	for (int i = 0; i < s.length(); i++)
	{
		if (numberList.find(s[i]) != string::npos)
			numCount++;
		else if (consonantList.find(s[i]) != string::npos)
			consonantCount++;
		else if (vowelList.find(s[i]) != string::npos)
			vowelCount++;
	}

	cout << "Total length: " << s.length() << endl;
	cout << "Total numbers: " << numCount << endl;
	cout << "Total consonants: " << consonantCount << endl;
	cout << "Total vowels: " << vowelCount;

	return 0;
}