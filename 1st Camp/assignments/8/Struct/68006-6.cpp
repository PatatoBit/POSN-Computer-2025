#include <bits/stdc++.h>
using namespace std;

struct Point
{
	int x;
	int y;
};

struct Triangle
{
	Point p1;
	Point p2;
	Point p3;
};

float calculateDistance(Point p1, Point p2)
{
	return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}

int main()
{
	Triangle tri;

	cin >> tri.p1.x >> tri.p1.y;
	cin >> tri.p2.x >> tri.p2.y;
	cin >> tri.p3.x >> tri.p3.y;

	cout << fixed << setprecision(2) << calculateDistance(tri.p1, tri.p2) + calculateDistance(tri.p2, tri.p3) + calculateDistance(tri.p3, tri.p1);

	return 0;
}