#include<stdio.h>
#include<string.h>

int n,l,i,j;
char a[20],str,t[5];

int main()
{
    scanf("%d ",&n);
    for (i=1;i<=n;i++)
    {
        gets(a);
        l=strlen(a);
        if (l==15)       
        {
            t[0]=a[12];t[1]=a[13];t[2]=a[14];t[3]='\0';
            if ( strcmp(t,"996")==0 || strcmp(t,"997")==0 || strcmp(t,"998")==0 || strcmp(t,"999")==0  )    //18年
            {
                for (j=14;j>=6;j--)  a[j+2]=a[j];
                a[6]='1';a[7]='8';
            }
            else             
            {
                for (j=14;j>=6;j--) a[j+2]=a[j];
                a[6]='1';a[7]='9';
            }
            a[17]=JY();
            printf("%s\n",a);        
        }
        else if (l==18)
        {
            str=JY();
            if (str!=a[17]) printf("Invalid\n");
            else if ((a[12] >= '3' && a[13] >= '2')||(a[10]=='0'&&a[11]=='2'&&a[12]>'2'))
                printf("Invalid\n");
            
            else printf("Valid\n");
        }
        else  printf("Invalid\n");
    }
    return 0;
}

int JY()  
{
    int s=0,y,k,b[20],c[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};  //权重
    char d[12]={'1','0','X','9','8','7','6','5','4','3','2','\0'}; 

    for (k=0;k<17;k++)
    {
        b[k]=a[k]-'0';
        s+=b[k]*c[k];
    }
    y=s%11;
    return (d[y]);
}
