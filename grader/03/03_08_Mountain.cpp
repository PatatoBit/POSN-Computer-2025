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

	// Initialize output vector with proper size
	vector<vector<string>> output(maxHeight, vector<string>(heightsCount, ""));

	for (int i = 1; i <= maxHeight; i++)
	{

		// Check if we hit a mountain
		for (int j = 0; j < heights.size(); j++)
		{
			if (maxHeight - i + 1 <= heights[j])
			{

				// Create mountain slice
				string mountainSlice = "";

				// Preceding space before mountain
				for (int k = 0; k < maxHeight - i; k++)
				{
					mountainSlice += " ";
				}

				mountainSlice += "/";

				// Space in the mountain
				for (int k = 0; k < i - 1 - (maxHeight - heights[j]); k++)
				{
					mountainSlice += "  ";
				}

				mountainSlice += "\\";

				// following space after mountain
				for (int k = 0; k < maxHeight - i; k++)
				{
					mountainSlice += " ";
				}

				// Add back to line
				output[i - 1][j] = mountainSlice;
			}
			else
			{

				string mountainSlice = "";
				for (int k = 0; k < heights[j] * 2; k++)
				{
					mountainSlice += " ";
				}

				// Add back to line
				output[i - 1][j] = mountainSlice;
			}
		}
	}

	// Print lines
	for (int i = 0; i < output.size(); i++)
	{
		// Print each slices

		for (int j = 0; j < output[i].size(); j++)
		{
			cout << output[i][j] << " ";
		}

		cout
				<< endl;
	}

	return 0;
}