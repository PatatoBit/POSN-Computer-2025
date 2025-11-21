#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a = 10, b = 20, *p, *q, *prtA, *prtB;
	p = &a;
	q = &b;

	cout << *p + *q << endl;
	cout << abs(*p - *q) << endl;

	return 0;
}