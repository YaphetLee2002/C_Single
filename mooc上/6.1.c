#include<stdio.h>
int main(void)
{
	int i, j, n;
	scanf("%d", &n);
	if (n == 0)
	{
		printf("0");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				printf("%3d", j + n * i);
			}
			putchar('\n');
		}
	}
	
	return 0;
}