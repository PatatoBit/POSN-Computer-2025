#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> heights;

	// Read inputs
	for (int i = 0; i < n; i++)
	{
		int height;
		cin >> height;
		heights.push_back(height);
	}

	int maxHeight = *max_element(heights.begin(), heights.end());
	int heightsCount = heights.size();

	vector<vector<int>> output;

	for (int i = 1; i <= maxHeight; i++)
	{
		cout << "Iteration " << i << endl;

		// Check if we hit a mountain
		for (int j = 0; j < heights.size(); j++)
		{
			if (maxHeight - i + 1 <= heights[j])
			{
				cout << "Hit mountain " << heights[j] << "[" << j << "]" << endl;
			}
			else
			{
				cout << "Mountain short " << heights[j] << "[" << j << "]" << endl;
			}
		}
		cout << "------------------------" << endl;
	}

	return 0;
}