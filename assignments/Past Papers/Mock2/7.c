#include <stdio.h>
#include <string.h>
int main()
{
	char x = 'A';
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%c ", 'A' + (x + i - 'A') % 26);
		}
		printf("\n");
	}
	return 0;
}