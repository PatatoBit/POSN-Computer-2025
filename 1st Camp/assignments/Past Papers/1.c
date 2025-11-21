#include <stdio.h>

int main(void)
{
	int x, sum = 0;
	for (x = -1; x <= 100; x++)
		sum = sum + x;
	printf("Sum = %d\n", sum);
	return 0;
}