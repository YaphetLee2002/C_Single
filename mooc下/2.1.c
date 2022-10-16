#include<stdio.h>
int func2(int x, int y);
int func1(int x, int y, int c)
{
    return x * y / c;
}
int func2(int x, int y){
    if (x % y == 0)
        return y;
    else
        return func2(y, x % y);
}

int main(void)
{
    int x, y;
    scanf("%d,%d", &x, &y);
    int c = func2(x, y);
    printf("最大公约数：%d\n", func2(x, y));
    printf("最小公倍数：%d\n", func1(x, y, c));
    return 0;
}