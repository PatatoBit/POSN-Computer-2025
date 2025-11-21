#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int year;
	cin >> year;

	if (year - 543 >= 0)
	{
		cout << year - 543;
	}
	else
	{
		cout << abs(year - 543) << " B.C.";
	}

	return 0;
}