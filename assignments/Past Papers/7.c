
#include <stdio.h>
int x, y, sum = 0;
int m = 5;

int main(void)
{
	for (x = 0; x < 10; x++)
	{
		for (y = 2; y <= 10; y++)
		{
			if (((x + y) % 7) == 0)
				m = x;
			sum = sum + m + x;
		}
	}
	printf("sum = %d\n", sum);
	return 0;
}