#include<stdio.h>
int w(int x)
{
	if(x%100==0)
	{
		if(x%400==0) return 1;
		else return 0;
	}
	if(x%4==0) return 1;
	else return 0;
}
main()
{
	int y,m,d,c,i;scanf("%d%d%d",&y,&m,&d);
	int n; scanf("%d",&n);
	int k[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	for (i=1;i<=n;i++)
	{
		d += 1;
		if (m == 2) c = k[m] + w(y);
		else c = k[m];
		if (d==c+1) {m+=1;d=1;}
		if (m==13) {y+=1;m=1;d=1;}
	}
	printf("%d.%d.%d\n",y,m,d);
}