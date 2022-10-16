#include<stdio.h>
int main(void)
{
	int n, sub1, sub2, sub3, i;
	scanf("%d", &n);
	for (i = 10000; i <= 30000; i++)
	{
		sub1 = i / 100;
		sub2 = i / 10 % 1000;
		sub3 = i % 1000;
		if (sub1 % n == 0 && sub2 % n == 0 && sub3 % n == 0)
			printf("%d\n", i);
	}
	return 0;
}