
#include <stdio.h>
int x, y, m;
int main(void)
{
	for (y = 6; y > 0; y = y - 2)
	{
		for (x = 2; x < 5; x++)
		{
			m = x + y + 1;
			if ((x + y) > 6)
				m = m = (x + y);
			printf(" %d", m);
		}
		printf("\n");
	}
	return 0;
}