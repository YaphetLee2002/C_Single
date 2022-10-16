#include<stdio.h>
int main(void)
{
    int n, a, b, c;
    int sum = 0;
    scanf("%d", &n);
    for ( a = 0; a < 100 * n; a++)
    {
        b = 18 * a / 15;
        c = 9 * a / 10;
            if (a + 5 * b + 10 * c == 100 * n){
                printf("%d,%d,%d\n", a, b, c);
                sum++;
            }
    }
    if(sum==0)
        printf("No change.\n");
    return 0;
    
}