#include<stdio.h>
int main(void)
{
	int num, i, j;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 0; j < 2 * (num - i); j++)
			putchar(' ');
		for (j = 1; j <= i; j++)
			printf("%2d", j);
		for (j = i - 1; j > 0; j--)
			printf("%2d", j);
		putchar('\n');
	}
}