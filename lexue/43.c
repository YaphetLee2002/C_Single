#include<stdio.h>
main(){
    int n,i=2; double s=1;
    scanf("%d",&n);
    if(n==1) {printf("1\n");return 0;}
    for(;i<=n;i+=2) s+=(1.0/(i*(i+1)));
    if (!(n%2)) s+=1.0/(n+1);
    printf("%f\n",s);
}