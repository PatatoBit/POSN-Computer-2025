#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	// Increasing to mid
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < 2 * i - 1; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	// After mid to end
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < 2 * i - 1; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}