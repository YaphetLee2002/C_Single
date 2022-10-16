#include<stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b <= c || b + c <= a || a + c <= b)
		printf("non-triangle.\n");
	else
	{
		if (a == b && b == c)
			printf("equilateral triangle.\n");
		else
		{
			if (a == b || b == c || a == c)
				printf("isoceles triangle.\n");
			else
				printf("triangle.\n");
		}
	}
	
	return 0;
}
