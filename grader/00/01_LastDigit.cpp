#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, remainder;
	cin >> n;

	remainder = n % 4;

	switch (remainder)
	{
	case 1:
		cout << 3;
		break;
	case 2:
		cout << 9;
		break;
	case 3:
		cout << 7;
		break;
	case 0:
		cout << 1;
		break;
	default:
		cout << "Invalid number ";
	}
	return 0;
}