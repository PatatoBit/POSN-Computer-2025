#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> scores(n);

	for (int i = 0; i < n; i++)
	{
		cin >> scores[i];
	}

	float sum = 0;
	int passed = 0;

	cout << "Scores : ";
	for (int score : scores)
	{
		cout << score << " ";
		sum += score;

		if (score >= 50)
			passed++;
	}
	cout << endl;

	cout << "Average : " << fixed << setprecision(2) << (float)(sum / n) << endl;
	cout << "Max : " << *max_element(scores.begin(), scores.end()) << endl;
	cout << "Min : " << *min_element(scores.begin(), scores.end()) << endl;
	cout << "Student Pass : " << passed;

	return 0;
}