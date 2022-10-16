#include<stdio.h>
#include<stdlib.h>
#define N 4
int main(void)
{   
    int * a = (int *) malloc(sizeof(int) * N * 3);
    int i, sum = 0;
    for (i = 0; i < N * 3; i++)
        scanf("%d", a + i);
    getchar();
    char ch = getchar();
    
    switch (ch)
    {
    case '1':
        i = 0;
        while (i < N)
        {
            printf("%d", a[i]);
            if ((i + 1) % N)
                putchar(' ');  
            sum += a[i++];
        }
        break;
    case '2':
        i = N;
        while (i < 2 * N)
        {
            printf("%d", a[i]);
            if ((i + 1) % N)
                putchar(' ');  
            sum += a[i++];
        }
        break;
    case '3':
        i = 2 * N;
        while (i < 3 * N)
        {
            printf("%d", a[i]);
            if ((i + 1) % N)
                putchar(' ');    
            sum += a[i++];
        }
        break;
    }
    putchar('\n');
    printf("%.2f\n", (double)sum / 4);
    return 0;
}