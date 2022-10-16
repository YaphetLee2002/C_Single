#include<stdio.h>
int a[50][50],n,num=1;
void diag(int k)
{
	int i,j;
	if(k<=n){
		if(k%2==0){
			for(i=1;i<=k;i++){
				a[i][k-i+1]=num;
				num++;
			}
		}
		if(k%2==1){
			for(i=k;i>=1;i--){
				a[i][k-i+1]=num;
				num++;
			}
		}
	}
	if(k>n){
		if(k%2==0){
			for(i=k-n+1;i<=n;i++){
				a[i][k-i+1]=num;
				num++;
			}
		}
		if(k%2==1){
			for(i=k-n+1;i<=n;i++){
				a[k-i+1][i]=num;
				num++;
			}
		}
	}
	return;
}
int main()
{
	int i,j,t=0;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++){
		diag(i);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%2d",a[i][j]);
			t++;
			if(t%n!=0) printf(" ");
		}
		printf("\n");
	}
	return 0;
}