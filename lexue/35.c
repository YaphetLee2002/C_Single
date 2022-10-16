#include<stdio.h>
int main(void)
{
    int i, j;
    int sum = 0;
    char a[100] = {'\0'};
    char b[100] = {'\0'};
    
    scanf("%s", a);

    for ( i = 0; i < 100; i++)
    {
        if (a[i] == '\0')
            break;
        for ( j = 0; j <= i; j++)
        { 
            if (j == i)
            {
                b[sum] = a[i];
                sum++;
            }
            if (a[j] == a[i] )
                break;
        } 
    }
    
    printf("%s\n", b);
    return 0;    
}