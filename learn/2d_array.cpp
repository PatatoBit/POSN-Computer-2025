#include <iostream>
using namespace std;

int main()
{
	int rows = 4, cols = 3;
	int arr[4][3] = {
			{1, 2, 3},
			{3, 52, 11},
			{56, 22, 534},
			{22, 567, 3}};

	for (auto rows : arr)
	{
		int sum = 0;
		for (int i = 0; i < cols; i++)
		{
			sum += rows[i];
		}

		cout << sum << " ";
	}

	return 0;
}