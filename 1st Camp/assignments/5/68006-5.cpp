#include <bits/stdc++.h>
using namespace std;

int main()
{

	string s;
	cout << "Input string1:    ==> ";
	getline(cin, s);
	cout << endl;

	cout << "Length of string: ==> " << s.length() << endl;

	cout << "Reverse string    ==> ";
	for (int i = 0; i <= s.length(); i++)
	{
		cout << s[s.length() - i];
	}
	cout << endl;

	cout << "Upper string      ==> ";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 97)
		{
			cout << (char)(s[i] - 32);
		}
		else
		{
			cout << (char)(s[i]);
		}
	}
	cout << endl;

	cout << "=-=-=-=-=-=-=-=-=-=" << endl;
	cout << "Number of one vowel" << endl;
	cout << "=-=-=-=-=-=-=-=-=-=" << endl;

	int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'A' || s[i] == 'a')
			aCount++;
		else if (s[i] == 'E' || s[i] == 'e')
			eCount++;
		else if (s[i] == 'I' || s[i] == 'i')
			iCount++;
		else if (s[i] == 'O' || s[i] == 'o')
			oCount++;
		else if (s[i] == 'U' || s[i] == 'u')
			uCount++;
	}

	cout << "A or a = " << aCount << endl;
	cout << "E or e = " << eCount << endl;
	cout << "I or i = " << iCount << endl;
	cout << "O or o = " << oCount << endl;
	cout << "U or u = " << uCount << endl;
	cout << "=-=-=-=-=-=-=-=-=-=" << endl;

	return 0;
}