#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	if (b != 0)
		cout << a / b << endl;
	else
		cout << "undefined" << endl;

	cout << fixed << setprecision(2);
	cout << sqrt(abs(a * b)) << endl;
	cout << floor(abs(a + b)) << endl;
	cout << ceil((a - b)) << endl;

	return 0;
}