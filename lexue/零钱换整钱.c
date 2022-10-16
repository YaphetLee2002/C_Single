#include<stdio.h>
main()
{
    int n,a;
    scanf("%d",&n);
    a=(n*10)/16;
    if((n*10)%16==0)
        printf("%d,%d,%d\n", 10*a,12*a,9*a);
    else
        printf("No change.\n");
}