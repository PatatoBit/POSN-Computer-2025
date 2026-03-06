#include <iostream>
#include <string>
using namespace std;

int main()
{
	int k, count = 0;
	cin >> k;
	string s1, s2;
	int matchingFirstAt, matchingSecondAt;
	cin >> s1 >> s2;

	// Find matching letter
	for (int i = 0; i < s1.length(); i++)
	{
		for (int j = 0; j < s2.length(); j++)
		{
			if (s1[i] == s2[j])
			{
				count++;
				// cout << "Count: " << count << endl;
			}

			if (count == k)
			{
				matchingFirstAt = i;
				matchingSecondAt = j;
				break;
			}
		}

		if (count == k)
			break;
	}

	if (count < k)
	{
		cout << "error";
		return 0;
	}

	for (int i = 0; i < s2.length(); i++)
	{
		if (i != matchingSecondAt)
		{
			// Print out empty space
			for (int j = 0; j < matchingFirstAt; j++)
			{
				cout << " ";
			}
			cout << s2[i] << endl;
		}
		else
		{
			cout << s1 << endl;
		}
	}

	return 0;
}