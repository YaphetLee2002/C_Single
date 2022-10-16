#include<stdio.h>
int f(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;
    else if (m <= n)
        return 1 + f(m, m - 1);
    else
        return f(m, n - 1) + f(m - n, n);
}
int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", f(m, n));
    return 0;
}