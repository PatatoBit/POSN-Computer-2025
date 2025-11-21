#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text, find;
	getline(cin, text);
	getline(cin, find);

	for (int i = 0; i <= text.length() - find.length(); i++)
	{
		bool match = true;

		cout << "Index: " << i << endl;

		for (int j = i; j < i + find.length(); j++)
		{
			cout << "Comparing " << text[j] << " and " << find[j - i] << endl;

			if (text[j] != find[j - i])
			{
				cout << "Mismatch found, skipping..." << endl;
				match = false;
				break;
			}
		}

		if (match)
		{
			cout << "Found at: " << i << endl;
		}

		cout << endl;
	}

	return 0;
}