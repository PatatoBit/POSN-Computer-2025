#include <iostream>
using namespace std;

int main()
{
	int n, arr[100005];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		arr[i] = input;
	}

	for (int i = 0; i < n; i += 2)
	{
		cout << arr[i] << " ";
	}

	return 0;
}