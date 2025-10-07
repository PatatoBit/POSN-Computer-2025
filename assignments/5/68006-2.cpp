#include <bits/stdc++.h>
using namespace std;

int main()
{
	string num, numpack[5];
	cin >> num;

	for (int i = 0; i < 13; i++)
	{
		if (i == 0)
		{
			numpack[0] = num[i];
		}
		else if (i > 0 && i <= 4)
		{
			numpack[1] += num[i];
		}
		else if (i > 4 && i <= 9)
		{
			numpack[2] += num[i];
		}
		else if (i > 9 && i <= 11)
		{
			numpack[3] += num[i];
		}
	}
	numpack[4] += num[12];

	// Print out
	for (int i = 0; i < 5; i++)
	{
		cout << numpack[i];

		if (i < 4)
		{
			cout << "-";
		}
	}
	return 0;
}