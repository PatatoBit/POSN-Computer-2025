#include <iostream>
using namespace std;

int main()
{
	float sum = 0;
	int nums = 4;

	for (int i = 0; i < nums; i++)
	{
		int n;
		cin >> n;

		if (n > 100 || n < 0)
		{
			cout << "Invalid input!!";
			return 0;
		}

		sum += n;
	}

	cout << sum / nums;

	return 0;
}