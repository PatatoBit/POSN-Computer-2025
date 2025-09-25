#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n % 2 == 0)
	{
		cout << "NULL";
	}
	else
	{
		// Upper lines
		for (int i = n; i > 1; i -= 2)
		{
			// Spacer
			for (int k = 1; k <= n - i - 1; k++)
			{
				cout << "  ";
			}

			// Each line
			for (int j = 1; j <= i; j++)
			{
				cout << "* ";
			}

			cout << endl;
		}

		// Middle turnaround
		for (int i = 1; i <= n / 2; i++)
		{
			cout << "  ";
		}
		cout << "*" << endl;

		// Lower lines
		for (int i = 3; i <= n; i += 2)
		{
			// Spacer
			for (int k = 1; k <= n - i - 1; k++)
			{
				cout << "  ";
			}

			for (int j = 1; j <= i; j++)
			{
				cout << "* ";
			}

			cout << endl;
		}
	}

	return 0;
}