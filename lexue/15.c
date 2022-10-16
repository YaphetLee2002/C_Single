#include<stdio.h>
int main(void)
{
	int i, num;
	scanf("%d", &num);
	for ( i = 0; i < num; i++)
	{
		putchar('*');
	}
	putchar('\n');
	return 0;
}