#include<stdio.h>
int main(void)
{
	char c;
	int num, i, j, k;
	scanf("%c,%d", &c, &num);
	for ( i = 1; i <= num; i++)
	{
		for ( j = 1; j <= num - i; j++)
			putchar(' ');
		if (i == 1)
		{
			printf("%c", c);
		}
		else
		{   
            c ++;
            if(c == 'Z' + 1)
                c = 'A';
			printf("%c", c);
			for ( k = 0; k < 2 * i - 3; k++)
				putchar(' ');
			printf("%c", c);
		}
		putchar('\n');
	}
	for ( i = num - 1; i > 0; i--)
	{
		for (j = 1; j <= num - i; j++)
			putchar(' ');
		if(i==1)
			printf("%c",--c);
		else
		{
            c --;
            if(c == 'A' - 1)
                c = 'Z';
			printf("%c", c);
			for (k = 0; k < 2 * i - 3; k++)
				putchar(' ');
			printf("%c", c);
		}
		putchar('\n');
	}
	return 0;
}