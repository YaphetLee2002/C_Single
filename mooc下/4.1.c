#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[100];
    scanf("%s", a);
    int i = 0, n = strlen(a);
    while (a[i] == a[n - i - 1])
    {
        i++;
        if (i == n / 2)
            break;
    }    
    if (i == n / 2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}