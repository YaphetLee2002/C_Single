#include<stdio.h>
int main(void)
{
	int n, i, sum = 0;
	scanf("%d", &n);

	if (n <= 1)
	{
		printf("1\n");
	}

	for ( i = 1; sum <= n; i++)
	{
		sum += i;
		if (sum >= n)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}