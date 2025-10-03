#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	char letter = 'A';

	cout << "Enter a number: ";
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (letter > 'Z')
				letter = 'A';

			cout << (char)(letter++);
		}
		cout << endl;
	}

	return 0;
}