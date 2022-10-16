#include<stdio.h>
#include<string.h>
int main()
{
    char a[128] = {'\0'}, b[128] = {'\0'}, c[128] = {'\0'};
    int i, j, k;
    scanf("%s", a);
    scanf("%s", b);
    
    for ( i = 0; i < strlen(a); i++)
    {
        for ( j = 0; j <= i; j++)
        {
            if(a[i] < c[j])
            {
                for ( k = i; k >= j; k--)
                    c[k + 1] = c[k];
                c[j] = a[i];
                break;
            }
            if(c[j] == '\0')
                c[j] = a[i];    
        }
    }
    for ( i = 0; i < strlen(b); i++)
    {
        for ( j = 0; j <= i + strlen(a); j++)
        {
            if(b[i] < c[j])
            {
                for ( k = i + strlen(a); k >= j; k--)
                    c[k + 1] = c[k];
                c[j] = b[i];
                break;
            }
            if(c[j] == '\0')
                c[j] = b[i];   
        }
    }
    printf("%s\n", c);
    return 0;
}