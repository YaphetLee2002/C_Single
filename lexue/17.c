#include<stdio.h>
int main(void)
{
	int n, i, sum = 0;
	scanf("%d", &n);
	for ( i = 1; i < n; i++)
	{
		sum += i;
		if (sum >= n)
		{
			break;
		}
	}
	printf("%d\n", i);
	return 0;
}