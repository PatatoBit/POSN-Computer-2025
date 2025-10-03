#include <stdio.h>

int x = 2, y = 1, m;
int sum = 0;
int main()
{
	printf("Initial: x=%d, sum=%d\n", x, sum);
	for (m = -2; m < 48; m++)
	{
		sum = sum + x;
		printf("m=%d: sum += %d -> sum=%d", m, x, sum);
		if ((m % 5) == 1)
		{
			printf(" (m%%5==1, so x changes from %d to %d)", x, m);
			x = m;
		}
		printf("\n");
		
		// Stop early if we reach 999
		if (sum >= 999) {
			printf("Reached sum=999 at m=%d\n", m);
			break;
		}
	}
	printf("Final Sum = %d\n", sum);
	return 0;
}