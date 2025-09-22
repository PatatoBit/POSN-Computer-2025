
#include <iostream>
using namespace std;

int main()
{
	int arr[] = {
			1,
			1,
			1,
			2,
			3,
			4,
			4,
			4,
			5,
			6,
			7,
			7,
	};

	int ans[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (int num : arr)
	{
		ans[num]++;
	}

	for (int i; i < sizeof(ans) / sizeof(ans[0]); i++)
	{
		if (ans[i] != 0)
		{
			cout << i << ": " << ans[i] << endl;
		}
	}

	return 0;
}