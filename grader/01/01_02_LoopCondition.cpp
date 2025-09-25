#include <iostream>
using namespace std;

int main()
{
	int a, b, x, y, z;
	cin >> a >> b >> x >> y >> z;

	for (int i = a; i <= b; i++)
	{
		if ((i % x == 0 && i % y != 0) || i % z == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}