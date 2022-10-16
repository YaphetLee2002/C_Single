#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check(int len,char a[])
{
	int w=0,x=0,y=0,z=0;
	for(int i=0;i<len;i++)
	{
		if(a[i]>='0'&&a[i]<='9') w=1;
		else if(a[i]>='a'&&a[i]<='z') x=1;
		else if(a[i]>='A'&&a[i]<='Z') y=1;
		else z=1;
	}
	return w+x+y+z;
}
int main()
{
	int n;
	char a[100];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",a);
		int len=strlen(a);
		if(len<6)
		{
			printf("Not Safe\n");
			continue;
		}
		if(check(len,a)==1)
		{
			printf("Not Safe\n");
			continue;
		}
		if(check(len,a)==2)
		{
			printf("Medium Safe\n");
			continue;
		}
		if(check(len,a)>=3)
		{
			printf("Safe\n");
			continue;
		}
	}
	return 0;
}