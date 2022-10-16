#include<stdio.h>
int main(void)
{
	int a, b, c, n;
	int sum = 0;
	scanf("%d", &n);
	for ( a = 1; a < n; a++)
	{
		for ( b = a; b < n; b++)
		{
			for (c = 1; c <= n; c++)
			{
				if (c * c == a * a + b * b)
				{
					sum += 1;
				}
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}