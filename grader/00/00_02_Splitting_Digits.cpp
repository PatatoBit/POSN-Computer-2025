#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int units = n % 10;
	int tenths = (n / 10) % 10;
	int hundredths = (n / 100) % 10;
	int thousandths = (n / 1000) % 10;

	cout << units << " " << tenths << " " << hundredths << " " << thousandths;
	return 0;
}