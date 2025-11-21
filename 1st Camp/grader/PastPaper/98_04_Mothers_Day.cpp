#include <iostream>
using namespace std;

// int main()
// {
// 	int n;
// 	cin >> n;

// cout << (n - 141) % 7 + 1;
// cout << (n + 6 - 1) % 7 + 1;

// 	return 0;
// }

int main()
{
	int n;
	cin >> n;

	if (n != 1)
	{
		cout << n - 1;
	}
	else
	{
		cout << 7;
	}
	return 0;
}
