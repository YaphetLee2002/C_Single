#include<stdio.h>
void bsort(int a[], int n){
    int i, j;
    for ( i = 0; i < n - 1; i++)
    {
        for ( j = n - 1; j > i; j--)
        {
            if (a[j - 1] > a[j])
            {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }  
        } 
    }
}

void clean(int a[], int n, int m){
    int i;
    for ( i = n; i <= m + 1; i++)
    {
        a[i] = a[i + 1];
    }
}

int summary(int a[], int n){
    int i, b;
    for ( i = 0; i <= n; i++)
        b += a[i];
    return b;
}

int main(void)
{
    int n, m;
    int i, j, k = 0;
    int sum = 0;
    scanf("%d %d", &n, &m);
    int monster[100] = {0};
    int warrior[100] = {0};
    for ( i = 0; i < n; i++)
        scanf("%d", &monster[i]);
    for ( i = 0; i < m; i++)
        scanf("%d", &warrior[i]);

    bsort(monster, n);
    bsort(warrior, m);
    for ( i = 0; k < n;k++)
    {
        for ( j = 0; j < m; j++)
        {
            if (warrior[j] == 0)
            {
                if (monster[0] != 0)
                    goto looq;
                if (monster[0] == 0)
                    goto loop;
            }   
            if (warrior[j] >= monster[i])
            {
                sum += warrior[j];
                clean(warrior, j, m);
                clean(monster, i, n);

                break;
            }
        }
    }
    loop:;
    if (sum >= summary(monster, n))
        printf("%d\n", sum);
    else
        looq:printf("bit is doomed!\n");
    
    return 0;
}
    