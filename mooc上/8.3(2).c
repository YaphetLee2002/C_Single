#include<stdio.h>
#include<string.h>

char a[20];
char JY();        //这里最好加上这句，好处：一个方便注释，查看，二移植性更好 毕竟子函数写在主函数之后

int main()
{
    int n;
    scanf("%d ",&n);
    for (int i=1;i<=n;i++)
    {
        int l,t=0;
        gets(a);
        l=strlen(a);
        if (l==15)       //15位变为18位
        {
            /*t[0]=a[12];t[1]=a[13];t[2]=a[14];t[3]='\0';*/
            for(int k=12;k<15;++k)   t=t*10+a[k]-'0';
            if (t==996||t==997||t==998||t==999)    //18年
            {
                for (int j=14;j>=6;j--)  a[j+2]=a[j];
                a[6]='1';a[7]='8';
            }
            else             //19年
            {
                for (int j=14;j>=6;j--) a[j+2]=a[j];
                a[6]='1';a[7]='9';
            }
            a[17]=JY();
            a[18]='\0';        
            printf("%s\n",a);        
        }
        else if (l==18)         //18位判断合法
        {           
            if (a[17]==JY()) printf("Valid\n");
            else printf("Invalid\n");
        }
        else  printf("Invalid\n");
    }
    return 0;
}

char JY()  //最后一位校验码
{
    int s=0,c[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};  //权重
    char d[12]={'1','0','X','9','8','7','6','5','4','3','2','\0'};
   
    for (int k=0;k<17;k++)   s+=(a[k]-'0')*c[k];
   
    return d[s%11];
}