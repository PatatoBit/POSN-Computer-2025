#include <stdio.h>
int main()
{
	int arr[13];
	int x = 1;
	for (int i = 0; i < 13; i += 4)
	{
		printf("%d + %d = %d\n", arr[i], x, arr[i] + x);

		arr[i] += x++;
	}
	printf("%d", arr[12]);
	return 0;
}