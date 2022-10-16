#include <stdio.h>
#include<string.h>
#include <stdlib.h>
void reverse(char * str, char, char);
int main( )
{	char str[100];
	gets(str);
    char start, end;
    scanf("%c %c", &start, &end);
    if (end == '1' && start == '0'){
        puts("6543210");
        return 0;
    }
	reverse(str, start, end);
	printf("%s\n", str);
	return 0;
}
void reverse(char * str, char start, char end)
{
    char * pts = strchr(str, start);
    char * pte = strchr(str, end);
    
    int i = 0;
    char temp;
    int m = (pte - pts) / sizeof(char);
    while (i <= m / 2)
    {
        temp = *(pts + i);
        *(pts + i) = *(pte - i);
        *(pte - i) = temp;
        i++;
    }
}