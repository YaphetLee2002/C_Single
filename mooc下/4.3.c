#include<stdio.h>
#include<stdlib.h>
void found(int *ptr, int n)
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        if (n == *(ptr + i))
        {
            printf("%d\n", n);
            break;
        }
    }
    if (i == 10)
        printf("No\n");
}
int main(void)
{
    int p[10];
    int n, i = 0;
    while (i < 10)
        scanf("%d", &p[i++]);
    scanf("%d", &n);
    found(p, n);
    return 0;
}