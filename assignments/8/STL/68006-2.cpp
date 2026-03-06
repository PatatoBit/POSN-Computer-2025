#include <bits/stdc++.h>
using namespace std;

struct Point
{
	int x;
	int y;
};

string findQuadrant(Point p, int *q)
{
	if (p.x > 0 && p.y > 0)
	{
		*q += 1;
		return "Q1";
	}
	else if (p.x < 0 && p.y > 0)
	{
		*(q + 1) += 1;
		return "Q2";
	}
	else if (p.x < 0 && p.y < 0)
	{
		*(q + 2) += 1;
		return "Q3";
	}
	else if (p.x > 0 && p.y < 0)
	{
		*(q + 3) += 1;
		return "Q4";
	}
	else
		return "Not in any quadrant";
}

float lengthToOrigin(Point p)
{
	return sqrt(pow(p.x, 2) + pow(p.y, 2));
}

int main()
{
	int n;
	cin >> n;

	vector<Point> points(n);
	for (int i = 0; i < n; i++)
	{
		cin >> points[i].x >> points[i].y;
	}

	int quadrants[4] = {0};
	int *q = quadrants;
	cout
			<< "All Point :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Point " << i + 1 << ": (" << points[i].x << ", " << points[i].y << ") – " << findQuadrant(points[i], q) << endl;
	}

	cout << "Length origin :" << endl;

	Point furthestPoint = points[0], closestPoint = points[0];
	for (int i = 0; i < n; i++)
	{
		cout << "Point " << i + 1 << ": (" << points[i].x << ", " << points[i].y << ") = " << fixed << setprecision(2) << lengthToOrigin(points[i]) << endl;

		if (lengthToOrigin(points[i]) > lengthToOrigin(furthestPoint))
			furthestPoint = points[i];

		if (lengthToOrigin(points[i]) < lengthToOrigin(closestPoint))
			closestPoint = points[i];
	}

	cout << "Max : (" << furthestPoint.x << ", " << furthestPoint.y << ") distant = " << fixed << setprecision(2) << lengthToOrigin(furthestPoint) << endl;
	cout << "Min : (" << closestPoint.x << ", " << closestPoint.y << ") distant = " << fixed << setprecision(2) << lengthToOrigin(closestPoint) << endl;

	cout << "Summary Q :" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "Q" << i + 1 << ": " << quadrants[i] << " point" << endl;
	}

	return 0;
}