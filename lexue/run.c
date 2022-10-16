#include<stdio.h>
int jiecheng(long n, long m)
{
	long a, b = 1, c = 1, d;
	for (a = n; a > m; a--)
	{
		b *= a;
	}
	for (a = 1; a <= (n - m); a++)
		c *= a;
	d = b / c;
	return d;
}
int main(void)
{
	
	long i, j, a, n, sum = 0;
	long yu;
	scanf("%ld", &n);
	j = n / 3;
	if (n % 3 == 0)
	{
		for (i = n / 3 - 1; i > 0; i--)
		{
			j = j + 2;
			sum += jiecheng(j, i);
		}
		printf("%ld\n", sum + 2);
	}
	else
	{
		yu = n % 3 + n / 3;
		for ( i = n / 3; i >= 1; i--)
		{
			sum += jiecheng(yu, i);
			yu += 2;
		}
		printf("%ld\n", sum + 1);
	}
	
	
	return 0;
}