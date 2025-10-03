#include <stdio.h>

int main(void)
{
	int x, sum = 0;
	int y = 0;
	for (x = 0; x < 100; x++)
	{
		if ((x % 3) == 0)
			y = sum - x;
		sum = sum + y;

		printf("x = %d, sum = %d\n", x, sum);
	}
	printf("sum = %d\n", sum);
	return 0;
}