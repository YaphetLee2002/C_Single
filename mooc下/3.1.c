#include<stdio.h>
int main(void)
{
    int n, step = 0;
    scanf("%d", &n);
    while(n > 1)
    {
        printf("%d,", n);
        if (n % 2)
            n = 3 * n + 1;
        else
            n /= 2;
        step++;
    }
    puts("1");
    printf("step=%d\n", step+1);
    return 0;
}