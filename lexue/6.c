#include<stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b)
		printf("min=%d\n", b);
	else
		printf("min=%d\n", a);
	return 0;
}