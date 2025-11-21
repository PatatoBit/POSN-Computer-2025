#include <stdio.h>

char st1[] = {'K', 'A', 'M', 'I', 'L', 'T', 'B', 'C'};
int num[] = {1, 2, 3, 4, 5, 6, 7, 8};

char *p;
int *x;
int y;

int main(void)
{
	for (y = 1; y <= 8; y++)
	{
		printf("Y(%d) [%c] + [%d] = %c\n", y, st1[y - 1], num[y], st1[y - 1] + num[y]);
		if (y % 4 == 0)
		{
			printf("\n");
			st1[y + 1] = 'K';
		}
	}

	return 0;
}