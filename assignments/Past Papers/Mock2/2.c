#include <stdio.h>
#include <math.h>

int main()
{
	int prev = 0, next = 0;
	int now = 2;
	printf("%d", pow(++prev, 2) + pow(now, 3));
	return 0;
}