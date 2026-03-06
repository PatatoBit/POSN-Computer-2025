#include <iostream>
using namespace std;

int main()
{
	int amount;
	cin >> amount;

	cout << "B1000 = " << amount / 1000 << endl;
	cout << "B500 = " << amount % 1000 / 500 << endl;
	cout << "B100 = " << amount % 500 / 100;

	return 0;
}