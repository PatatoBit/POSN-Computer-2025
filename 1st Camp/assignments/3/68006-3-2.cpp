#include <bits/stdc++.h>
using namespace std;

int main()
{
	int min, max;
	bool initialized = false;

	for (int i = 0; i < 10; i++)
	{
		int n;
		cin >> n;

		if (!initialized)
		{
			max = n;
			min = n;
			initialized = true;
		}

		if (n > max)
		{
			max = n;
		}
		else if (n < min)
		{
			cout << "Min changed to " << n;
		}
	}

	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;

	return 0;
}