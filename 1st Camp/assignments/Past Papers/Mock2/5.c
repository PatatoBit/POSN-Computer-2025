#include <stdio.h>
#include <string.h>
int main()
{
	char n[12] = "pixelmath ?";
	char s[3] = "dyt";
	char v[5] = "aeiou";
	int max, count = 0;
	if (strlen(n) > strlen(s))
		max = strlen(s);
	else if (strlen(n) < strlen(s))
		max = strlen(n);
	else
		max = strlen(s);
	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (n[i] == v[j])
				count++;
		}
	}
	printf("%d", count);
	return 0;
}