#include<stdio.h>
#include<string.h>
char map[105][105],count[105][105];
int n,m;
char add(int i,int j)
{
	char ans='0';
	if(i-1>=0)
	    ans=ans+(map[i-1][j]=='*'?1:0);
	if(i+1<=n)
	    ans=ans+(map[i+1][j]=='*'?1:0);
	if(j-1>=0)
	    ans=ans+(map[i][j-1]=='*'?1:0);
	if(j+1<=m)
	    ans=ans+(map[i][j+1]=='*'?1:0);
	if(i-1>=0&&j-1>=0)
	    ans=ans+(map[i-1][j-1]=='*'?1:0);
	if(i-1>=0&&j+1<=m)
	    ans=ans+(map[i-1][j+1]=='*'?1:0);
	if(i+1<=n&&j-1>=0)
	    ans=ans+(map[i+1][j-1]=='*'?1:0);
	if(i+1<=n&&j+1<=m)
	    ans=ans+(map[i+1][j+1]=='*'?1:0);
	return ans;
}
int main()
{
	
	int i,j,k=1;
	while(scanf("%d%d",&n,&m),n||m)
    {
		memset(count,'\n',sizeof(count));
		memset(map,'\n',sizeof(map));
		for(i=0;i<n;i++)
		scanf("%s",map[i]);
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			count[i][j]=map[i][j];
			if(map[i][j]=='.')
			count[i][j]=add(i,j);
			else continue;
		}
		if(k!=1)
		printf("\n");
		printf("Field #%d:\n",k++);
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			printf("%c",count[i][j]);
			if(j==m-1)
			printf("\n");
		}
	}
	return 0;
}