#include <bits/stdc++.h>
using namespace std;

void printValues(int angle)
{
	double radiant = angle * acos(-1.0) / 180.0;
	cout << fixed << setprecision(4) << sin(radiant) << "\t" << cos(radiant) << "\t" << tan(radiant) << endl;
}

int main()
{
	cout << "sin\tcos\ttan" << endl;
	for (int i = 0; i < 90; i += 5)
	{
		printValues(i);
	}

	return 0;
}