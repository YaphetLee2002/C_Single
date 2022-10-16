#include<stdio.h>
int main(void)
{
	int a[30000] = { 0 };
	int b[30000] = { 0 };
	int i, j;
	int num;
	int sum = 0;
	int n;
	scanf("%d", &n);
	for (i = 1; i <= 2 * n; i++)
	{
		a[i] = i;
		b[i] = i;
	}
	for (num = 1; 1; num++)
	{
		for (j = 1; j <= n; j++)
		{
			a[2 * j] = b[j];
			a[2 * j - 1] = b[j + n];
		}
		for (j = 1; j <= 2 * n; j++)
			b[j] = a[j];
		for ( j = 1; j <= 2 * n; j++)
		{
			if (a[j] == j)
				sum = sum + 1;
		}
		if (sum == 2 * n)
			break;
		sum = 0;
	}

	printf("%d\n", num);
	return 0;
}