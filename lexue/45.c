#include <stdio.h>
int findf(int n)
{
    int f;
    if ( n >= 0 && n <= 4)
        f = 1;
    else if ( n > 4 && n % 2 == 0)
        f = findf(n - 1) + findf(n - 3);
    else if ( n > 4 && n % 2 == 1)
        f = findf(n - 2) + findf(n - 4);
    else
        f = -1;
    return f;
}
int main(void)
{  int n, s;
   scanf("%d", &n);
   s = findf(n);
   printf("%d\n", s);
   return 0;
}