#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 2; i <= sqrt(n); i++)
	{

		if (n % i == 0)
		{
			cout << n << " is not a prime number." << endl;
			cout << "It can be divided by. " << i;
			return 0;
		}
	}

	cout << n << " is a prime number.";
	return 0;
}