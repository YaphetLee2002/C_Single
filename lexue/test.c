#include <stdio.h>
int main(void)
{
	int i, j, k;
	int n, flag1;
	scanf("%d", &n);
	for (i = 1; i <= (2 * n - 1); i++)
	{
		if (i > n)
		{
			i = 2 * n - i;
			flag1 = 1;
		}
		k = n;
		for (j = 1; j <= (2 * n - 1); j++)
		{
			if ((j <= (n - i)) || (j >= (n + i)))
			{
				if (j <= (n - i))
					printf("  ");
				if (j >= (n + i))
					break;
			}
			else
			{
				if (j <= n)
				{
					printf("%-2d", k);
					if (j < n)
						k -= 1;
					else
						k += 1;
				}
				else
					printf("%-2d", k++);
			}
		}
		printf("\n");
		if (flag1 == 1)
			i = 2 * n - i;
	}
    return 0;
}
