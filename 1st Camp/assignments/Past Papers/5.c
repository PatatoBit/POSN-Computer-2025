#include <stdio.h>

char dis = 'A';
int x, y;

int main(void)
{
	for (x = 1; x <= 5; x++)
	{
		for (y = 1; y <= 5; y++)
		{
			printf("%c ", dis);
			dis += y;
		}

		dis = 'A' + x;
		printf("\n");
	}

	return 0;
}