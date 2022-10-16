#include<stdio.h>
void ary_print(int []);
int main(void)
{
    int a[12], i, sum1 = 0, sum2 = 0, sum3 = 0;
    for ( i = 0; i < 12; i++)
        scanf("%d", &a[i]);
    for ( i = 0; i < 4; i++)
        sum1+=a[i];
    for ( i = 5; i < 8; i++)
        sum2+=a[i];
    for ( i = 9; i < 12, i++)
        sum3+=a[i];
    

}
void ary_point(int a[]);