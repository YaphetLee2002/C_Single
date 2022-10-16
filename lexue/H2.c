#include<stdio.h>
main()
{
	int n,i,j,t;
	scanf("%d",&n);
	int sq[n+1][n+1];
	memset(sq,0,sizeof(sq));
	int x=1,y=0,vx=0,vy=1;
	for(i=1;i<=n*n;i++)
	{
		x+=vx;y+=vy;
		sq[x][y]=i;
		if((x==n&&y==1)||(y==n&&x==1)||(x==n&&y==n)||(sq[x+vx][y+vy]!=0))
		{t=vx;vx=vy;vy=-t;}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%3d",sq[i][j]);
			if(j==n) printf("\n");
		}
	}
}