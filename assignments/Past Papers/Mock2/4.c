#include <stdio.h>
int main()
{
	int s = 0;
	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j % 2 == 0)
				s += 2;
			else
				s *= 2;
			s += 3;
		}
	}
	printf("%d", s);
	return 0;
}