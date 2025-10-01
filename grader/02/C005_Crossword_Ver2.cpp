#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x;
	string a, b;
	cin >> x >> a >> b;

	int col = x - 1;
	if (x < 1 || x > (int)a.length())
	{
		cout << "error" << endl;
		return 0;
	}

	int row = -1;
	for (int i = 0; i < (int)b.length(); i++)
	{
		if (b[i] == a[col])
		{
			row = i;
			break;
		}
	}
	if (row == -1)
	{
		cout << "error" << endl;
		return 0;
	}

	for (int i = 0; i < (int)b.length(); i++)
	{
		if (i == row)
		{
			cout << a << endl;
		}
		else
		{
			for (int j = 0; j < (int)a.length(); j++)
			{
				if (j == col)
				{
					cout << b[i];
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}