#include<stdio.h>
int main(void)
{
	char cha;
	int num, i, j, k;
	scanf("%c %d", &cha, &num);
	
	for ( i = 1; i <= num; i++)
	{
		for ( j = 1; j <= num - i; j++) 
			putchar(' ');
		if (i == 1) 
		{
			printf("%c", cha);
		}
		else
		{
			printf("%c", cha + i - 1);
			for ( k = 0; k < 2 * i - 3; k++)
			{
				putchar(' ');
			}
			printf("%c", cha + i - 1);
		}
		putchar('\n');
	}
	for ( i = num - 1; i > 0; i--)
	{
		for (j = 1; j <= num - i; j++) 
			putchar(' ');
		if (i == 1)
		{
			printf("%c", cha);
		}
		else
		{
			printf("%c", cha + i - 1);
			for (k = 0; k < 2 * i - 3; k++)
			{
				putchar(' ');
			}
			printf("%c", cha + i - 1);
		}
		putchar('\n');
	}
	return 0;
}