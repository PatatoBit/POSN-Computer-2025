#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> heights;

	for (int i = 0; i < n; i++)
	{
		int height;
		cin >> height;
		heights.push_back(height);
	}

	int maxHeight = *max_element(heights.begin(), heights.end());
	int heightsCount = heights.size();

	for (int i = 0; i < maxHeight; i++)
	{
		int currentLength = 0;

		for (int j = 0; j < heights.size(); j++)
		{

			if (maxHeight - i <= heights[j])
			{
				int requiredPreceding = 0;

				// Calculate required preceding spaces
				for (int k = 0; k < j; k++)
				{
					requiredPreceding += 2 * heights[k] + heights[j] + 1 - i;
				}

				// Print preceding space
				for (int k = 0; k < requiredPreceding - currentLength; k++)
				{
					cout << " ";
				}

				// Update current length
				currentLength += 2 * heights[j] - i + maxHeight;

				// Print pyramid segment
				cout << "/";
				for (int k = 0; k < heights[j] - (maxHeight - i); k++)
				{
					cout << "  ";
				}
				cout << "\\ ";
			}
		}
		cout << endl;
	}

	return 0;
}