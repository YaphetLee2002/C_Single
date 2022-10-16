#include<stdio.h>
void rank(int [], int []);
int main(void)
{
    int a[10], b[10] = {0};
    int i;
    for ( i = 0; i < 10; i++)
    scanf("%d", &a[i]);
    rank(a,b);
    i = 0;
    while (i<=8)
        printf("%d,", b[i++]);
    printf("%d\n", b[9]);
    return 0;
}
void rank(int a[], int b[])
{
    int i, j;
    for ( i = 0; i < 10; i++)
    {
        int sum = 0;
        for (j = 0; j < 10; j++)
        {
            if (a[i] > a[j])
                sum++;
        }
        if (b[sum] != 0){
            while(b[sum] != 0)
                sum++;
        }  
        b[sum] = a[i];
    }
}