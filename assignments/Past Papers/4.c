
#include <stdio.h>
int main(void)
{
	int mx = 0, my = 1, x, fib = 0;

	for (x = 0; x < 17; x++)
	{
		fib = mx + my;
		mx = my;
		my = fib;
		printf("%d", fib);
	}
	printf("Ans = %d\n", fib);
	return 0;
}