#include <iostream>
using namespace std;

int main()
{
	int n;

	int arr[100];
	arr[0] = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;

		arr[i] = arr[i - 1] + x;
	}

	for (int i = 0; i <= n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}