#include <stdio.h>
#include <math.h>

int main()
{
	int prev = 0, next = 0;
	int now = 2;
	double result = pow(++prev, 2) + pow(now, 3);
	printf("Result as double: %f\n", result);
	printf("Result as int: %d\n", (int)result);
	printf("prev value: %d\n", prev);
	printf("now value: %d\n", now);
	printf("pow(prev, 2): %f\n", pow(prev, 2));
	printf("pow(now, 3): %f\n", pow(now, 3));
	return 0;
}
