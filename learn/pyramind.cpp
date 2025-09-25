#include <iostream>
using namespace std;

// Self attemp!

int main()
{
	int floors = 5;

	for (int i = 1; i <= floors; i++)
	{
		for (int j = 1; j <= floors - i; j++)
		{
			cout << " ";
		}

		for (int j = 1; j < 2 * i; j++)
		{
			cout << "O";
		}
		cout << endl;
	}

	return 0;
}