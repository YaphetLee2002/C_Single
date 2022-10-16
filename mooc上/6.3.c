#include<stdio.h>
int main(void)
{
	int n1, n2, n3, n4;
	int a, b, c, d, e;
	int flag = 1;
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	for  (e = 0; flag; ++e)
	{
		flag = 0;
		for ( a = 0; a <= 5; a++)
		{
			for ( b = 0; b <= 5 - a; b++)
			{
				for ( c = 0; c <= 5 - a - b; c++)
				{
					for ( d = 0; d <= 5 - a - b - c; d++)
					{
						if (a * n1 + b * n2 + c * n3 + d * n4 == e)
						{
							flag = 1;
						}
					}
				}
			}
		}
	}
	printf("The max is %d.\n", e - 2);
	return 0;
}