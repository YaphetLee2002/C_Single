#include<stdio.h>
void interchange(int *, int *);
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    interchange(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}

void interchange(int * u, int * v)
{
    int temp = *u;
    *u = *v;
    *v = temp;
    printf("%p\n%p\n", u, v);
}