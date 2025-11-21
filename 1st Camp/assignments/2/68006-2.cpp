#include <iostream>
using namespace std;

int main()
{
	int nums = 5, evens = 0, odds = 0;

	for (int i = 0; i < nums; i++)
	{
		int n;
		cin >> n;

		if (n % 2 == 0)
		{
			evens++;
		}
		else
		{
			odds++;
		}
	}

	cout << "Even: " << evens << endl;
	cout << "Odd: " << odds;

	return 0;
}