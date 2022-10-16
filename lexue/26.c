#include<stdio.h>
int main(void)
{
	int num, i, j;
	scanf("%d", &num);
	for (i = num; i > 0; i--)
	{
		for (j = 0; j < 2 * (i - 1); j++)
			putchar(' ');
		if (i == num)
		{
			printf("%-2d", num);
			putchar('\n');
		}
		else
		{
			for (j = num; j >= i; j--)
				printf("%-2d", j);
			for (j = i + 1; j <= num; j++)
				printf("%-2d", j);
			putchar('\n');
		}
	}
	for (i = 2; i <= num; i++)
	{
		for (j = 0; j < 2 * (i - 1); j++)
			putchar(' ');
		if (i == num)
		{
			printf("%-2d", num);
			putchar('\n');
		}

		else
		{
			for (j = num; j >= i; j--)
				printf("%-2d", j);
			for (j = i + 1; j <= num; j++)
				printf("%-2d", j);
			putchar('\n');
		}
	}
	return 0;
}