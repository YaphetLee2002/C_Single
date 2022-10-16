#include<stdio.h>
#include<string.h>
int main()
{
	char c[5];
	int a;
	scanf("%s",c);
	if(strcmp(c,"max")==0){
		a=2;
	}
	else if(strcmp(c,"1")==0){
		a=80;
	}
	else if(strcmp(c,"2")==0){
		a=85;
	}
	else if(strcmp(c,"3")==0){
		a=79;
	}
	else a=0;
	printf("%d\n",a);
	return 0;
}