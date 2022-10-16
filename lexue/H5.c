#include<stdio.h>
int test(int a[]){
    int m,n;
    m=a[0]+a[2]+a[4]+a[6]+a[8]+a[10];
    n=a[1]+a[3]+a[5]+a[7]+a[9];
    int s=9-((3*m+n-1)%10);
    return s;
}
int main(void)
{
    char a[2],b[6],c[6];
    int i,num[12];
    scanf("%s%s%s",a,b,c);
    num[0]=a[0]-'0';
    for (i=0;i<5;i++)
        num[i+1]=b[i]-'0';
    for (i=0;i<5;i++)
        num[i+6]=c[i]-'0';
    printf("%d\n", test(num));
    return 0;
}