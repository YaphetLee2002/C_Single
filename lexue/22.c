
#include <stdio.h>
int main()
{
	int min,max;
	while(scanf("%d%d",&min,&max)!=EOF)
	{
		if(min==0||max==0) break;
		if(min<max&&min>=1000&&max<=9999)
		{
			int n=0;
			for(int i=min+2;i<max;i+=2)
			{
				if((i/1000)!=(i/100%10)&&(i/1000)!=(i/10%10)&&(i/1000)!=(i%10)&&
					(i/100%10)!=(i/10%10)&&(i/100%10)!=(i%10)&&
					(i/10%10)!=(i%10))
				{
					printf("%d  ",i);
					n++;
				}
			}
			printf("\ncounter=%d\n",n);
		}
		else printf("Error\n");
	}
	return 0;
}