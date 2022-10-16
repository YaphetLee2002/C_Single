#include <stdio.h>
#include <string.h>
#define NULL '\0'
int countString(char *str1,char *str2);//统计字符串出现次数
int main()
{
	char str1[100],str2[100],*p1=str1,*p2=str2;
	int k=0;
	gets(str1);
	gets(str2);
	k=countString(str1,str2);
	if(k==0)
		printf("No\n");
	else	
		printf("%d\n",k);
	return 0;
}
int countString(char *str1,char *str2)//递归函数
{ 
	return (*str1=='\0'||strstr(str1,str2)==NULL)?0:1+countString(strstr(str1,str2)+strlen(str2),str2);
}