#include<stdio.h>
#include<stdlib.h> 
#define N 22				//22位能表示第100个以内的斐波那契数列值
 
char * Add(char * x1, char * x2);
void Output(char * y);
 
int main()
{
	int a = 1, b = 100;
 
	scanf("%d %d", &a, &b);
	getchar();
	
	int count = b - a;
	int i;
 
	//y = x1 + x2;
	char * x1 = (char *)malloc(sizeof(char) * N);
	char * x2 = (char *)malloc(sizeof(char) * N);
	char * y = (char *)malloc(sizeof(char) * N);
 
	//初始化y, x1, x2
	for (i = 0; i < N; i++)
	{
		x1[i] = '\0';
		x2[i] = '\0';
		y[i] = '\0';
	}
 
	//给x1和x2赋初值
	x1[0] = '0';	x1[1] = '\0';
	x2[0] = '1';	x2[1] = '\0';
 
	//斐波那契数列，叠加
	for(i = 1; i <= count; i++)
	{
		y = Add(x1, x2);
		x1 = x2;
		x2 = y;
	}
	
	//输出结果
	Output(y);
	printf("\n");
    return 0; 
}

char * Add(char * x1, char * x2)
{
	char * y = (char *) malloc(sizeof(char) * N);
	int i = 0;
	int t = 0;				
 
	while(x1[i] != '\0' && x2[i] != '\0')
	{
		y[i] = (x1[i] - '0' + x2[i] - '0' + t) % 10 + '0';
		t = (x1[i] - '0' + x2[i] - '0' + t) / 10;
		i++;
	}
	
	while(x1[i] != '\0')
	{
		y[i] = (x1[i] - '0' + t) % 10 + '0';
		t = (x1[i] - '0' + t) / 10;
		i++;
	}
	
	while(x2[i] != '\0')
	{
		y[i] = (x2[i] - '0' + t) % 10 + '0';
		t = (x2[i] - '0' + t) / 10;
		i++;
	}
	
	if (t == 1)
		y[i++] = '1';
	y[i] = '\0';
	return y;
}

void Output(char * y)
{	
	int i = 0;
	while(y[i] != '\0')
		i++;
	i--;
	while(i >= 0)
		printf("%d", y[i--] - '0');
}