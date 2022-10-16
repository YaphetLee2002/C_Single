#include<stdio.h>  
#include<math.h>  

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int s = 0;
    int num;
    int flag = 1;
    for (i = pow(10, n - 1); i <= pow(10, n) - 1; i++)
    {
        num = i;
        s = 0;
        while (num != 0)
        {
            s += pow(num % 10, n);
            num = num / 10;
        }
        if (s == i)
        {
            printf("%d\n", i);
            flag = 0;
        }
    }
    if (flag) printf("No output.\n");
    return 0;
}