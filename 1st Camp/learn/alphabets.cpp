#include <iostream>
using namespace std;

int main()
{
	int s = 65;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (s >= 91)
				s = 65;

			cout << (char)s++ << " ";
		}

		cout << endl;
	}

	return 0;
}