#include <bits/stdc++.h>
using namespace std;

struct Book
{
	string author;
	string name;
	int sales;
	int publishedYear;
};

int main()
{
	int n;
	cin >> n;

	if (n == 0)
		return 0;

	vector<Book> books(n);
	for (int i = 0; i < n; i++)
	{
		cin >> books[i].author >> books[i].name >> books[i].sales >> books[i].publishedYear;
	}

	int maxSales = max_element(books.begin(), books.end(),
														 [](const Book &a, const Book &b)
														 {
															 return a.sales < b.sales;
														 })
										 ->sales;

	vector<Book> highestSales;
	for (int i = 0; i < n; i++)
	{
		if (books[i].sales == maxSales)
		{
			highestSales.push_back(books[i]);
		}
	}

	sort(highestSales.begin(), highestSales.end(),
			 [](const Book &a, const Book &b)
			 {
				 return a.publishedYear > b.publishedYear;
			 });

	cout << highestSales[0].name;

	return 0;
}