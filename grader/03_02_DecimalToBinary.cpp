#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num;
	cin >> num;
	if (num == 0)
	{
		cout << "0";
		return 0;
	}
	string binary = "";
	while (num > 0)
	{
		binary = char('0' + (num % 2)) + binary;
		num /= 2;
	}
	cout << binary;
	return 0;
	// ...existing code...
}