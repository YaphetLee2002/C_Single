#include<stdio.h>
int gcd(int n, int m)
{
    int result;
    if (m <= n && n % m == 0)
        result = m;
    else if (n < m)
        result = gcd(m, n);
    else
        result = gcd(m, n % m);
    return result;
}
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
    return 0;
}