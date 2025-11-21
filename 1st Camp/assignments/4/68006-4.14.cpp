#include <bits/stdc++.h>
using namespace std;

struct Student
{
	string name;
	int score;
};

int main()
{
	int n;
	cin >> n;

	Student arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].name;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].score;
	}

	for (int i = 1; i < n; i++)
	{
		Student key = arr[i];
		int j = i - 1;

		while (j >= 0 && (arr[j].score < key.score ||
											(arr[j].score == key.score && arr[j].name > key.name)))
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}

	int rank = 1;
	for (int i = 0; i < n; i++)
	{
		if (i > 0 && arr[i].score != arr[i - 1].score)
		{
			rank = i + 1;
		}

		cout << arr[i].name << " Rank " << rank << endl;
	}

	return 0;
}