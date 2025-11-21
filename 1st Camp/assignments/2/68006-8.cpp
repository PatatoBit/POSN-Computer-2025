
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int area;
	cout << "Please input area: ";
	cin >> area;
	cout << endl;

	cout << "Total service costs: ";
	if (area < 80)
	{
		cout << area * 12.50;
	}
	else if (area <= 200)
	{
		cout << area * 10;
	}
	else if (area <= 400)
	{
		cout << area * 7.50;
	}
	else if (area > 400)
	{
		cout << area * 5;
	}
	cout << " baht";

	return 0;
}