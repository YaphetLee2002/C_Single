#include<stdio.h>
int main(void)
{
    int i, n;
    int sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= 2 * n - 1; i+=2)
        sum += i;
    printf("%d\n", sum);
    return 0;
}