
#include <stdio.h>
char ch1 = 'A';
char ch2 = 'Z';
int x, y;
int main(void)
{
	for (x = 4; x < 20; x++)
	{
		printf("%c ", ch1);
		ch1 = ch1 + 1;
		if ((x % 2) == 0)
			ch1 = ch1 + 2;
		if ((x % 3) == 0)
			ch1 = ch1 - 3;
	}
	printf("\n");

	for (x = 4; x < 20; x++)
	{
		printf("%c ", ch2);
		ch2 = ch2 - 1;
		if ((x % 2) == 0)
			ch2 = ch2 - 2;
		if ((x % 3) == 0)
			ch2 = ch2 + 3;
	}
	return 0;
}