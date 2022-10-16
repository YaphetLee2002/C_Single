#include<stdio.h>
int main(void)
{
	int h, i, j;
	scanf("%d", &h);
	for ( i = 0; i < 2 * h - 1; i++)
		putchar('*');
	putchar('\n');
	for ( i = 1; i < h; i++)
	{
		for ( j = 0; j < i; j++)
			putchar(' ');
		putchar('*');
		if (2 * h - 5 - 2 * (i - 1) <= 0)
		{
			putchar('\n');
			break;
		}
		else
		{
			for (j = 0; j < 2 * h - 5 - 2 * (i - 1); j++)
				putchar(' ');
			putchar('*');
			putchar('\n');
		}
	}
	return 0;
}