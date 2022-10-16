#include<stdio.h>
int main(void)
{
	char cha;
	scanf("%c", &cha);
	if (cha <= 91 && cha >= 65)
		printf("%c\n", cha + 32);
	else
	{
		if (cha >= 97 && cha <= 123)
			printf("%c\n", cha - 32);
		else
			printf("%c\n", cha);
	}
	
	return 0;
}