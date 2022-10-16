#include<stdio.h>
int main(void)
{
	int a, n, i, tmp;
	scanf("%d %d", &a, &n);
	tmp = a;
	if (n == 0)
	{
		printf("The last 3 numbers is 1.\n");
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			tmp *= (a % 10);
		}
		if (tmp == 0)
		{
			printf("The last 3 numbers is 000.\n");
		}
		else
		{
			printf("The last 3 numbers is %d.\n", tmp % 1000);
		}
	}
	
	return 0;
}