#include<stdio.h>
int main(void)
{
	int m, n;
	int a[100][100];
	int i, j, k, l;
	int sum = 0;
	int sum2 = 0;
	scanf("%d %d", &m, &n);
	for ( i = 1; i <= m; i++)
	{
		for ( j = 1;  j <= n;  j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for ( i = 1; i <= m; i++)
	{
		for ( j = 1; j <= n; j++)
		{
			for ( k = 1; k <= n; k++)
			{
				if (a[i][j] < a[i][k])
				{
					sum++;
				}
			}
			for ( l = 1; l <= m; l++)
			{
				if (a[i][j] > a[l][j])
				{
					sum++;
				}
			}
			if (sum == 0)
			{
				printf("Point:a[%d][%d]==%d\n", i-1, j-1, a[i][j]);
				sum2++;
			}
			sum = 0;
		}
	}
	if (sum2 == 0)
		printf("No Point\n");
	return 0;
}