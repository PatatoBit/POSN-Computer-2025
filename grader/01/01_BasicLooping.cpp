#include <iostream>
using namespace std;

int main()
{
	int n, sum;
	cin >> n;

	// for (int i = 1; i <= n; i++)
	// {
	// 	sum += i;
	// }

	sum = n * (n + 1) / 2;

	cout << sum;

	return 0;
}