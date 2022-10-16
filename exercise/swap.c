#include<stdio.h>
void interchange(int *, int *);

int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d\n", x, y);
    interchange(&x, &y);
    printf("Nox x = %d and y = %d", x, y);
    return 0;
}

void interchange(int * x, int * y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}