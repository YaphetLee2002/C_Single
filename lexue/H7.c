#include<stdio.h>
#include<math.h>
int main(void)
{
    int s=0,i=0,a[7]={0};
    do
    {
        scanf("%d",&a[i]);   
    } while (a[i++]!=0);
    i=0;
    while (a[i]!=0)
        s+=pow(2,a[i++]-1);
    printf("%d\n", s);
    return 0;
}