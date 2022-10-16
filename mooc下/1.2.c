#include<stdio.h>
void rank(int [], int []);
int main(void)
{
    int a[10], b[10] = {0};
    scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d", 
    &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8]);
    scanf("%d", &a[9]);
    rank (a, b);
    int i = 0;
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