#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> keys;
	vector<int> values;

	for (int i = 0; i < n; i++)
	{
		int key, value;
		cin >> key >> value;
		keys.push_back(key);
		values.push_back(value);
	}

	int maxKey = *max_element(keys.begin(), keys.end());
	int maxValue = *max_element(values.begin(), values.end());

	for (int i = 0; i <= maxKey; i++)
	{
		bool found = false;
		for (int j = 0; j < keys.size(); j++)
		{
			if (i == keys[j])
			{
				for (int k = 0; k < values[j]; k++)
				{
					cout << "*";
				}
				cout << endl;
				found = true;
				break;
			}
		}

		if (!found)
		{
			for (int k = 0; k < maxValue; k++)
			{
				cout << "x";
			}
			cout << endl;
		}
	}

	return 0;
}