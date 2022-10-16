#include<stdio.h>
void bsort(int a[], int n);
int main(void)
{
    int n, i, j;
    int sum = 0;
    scanf("%d", &n);
    for (i = 100 * n + 12; i < 100 * n + 98; i++)
    {
        int s[9] = {0};
        int a = i;
        if (a > 333)
            break;
        int b = 2 * a;
        int c = 3 * a;
        s[0] = a/100;
        s[1] = a%100/10;
        s[2] = a%10;
        s[3] = b/100;
        s[4] = b%100/10;
        s[5] = b%10;
        s[6] = c/100;
        s[7] = c%100/10;
        s[8] = c%10;
        bsort(s, 9);
        for ( j = 0; j < 8; j++)
        {
            if(s[0] == 0)
                break;
            if (s[j] == s[j+1])
                break;
        }
        if (j == 8){
            printf("%d,%d,%d\n", a, b, c);
            sum++;
        }
    }
    if(sum == 0)
        puts("0,0,0");
    return 0;
    
}
void bsort(int a[], int n){
    int i, j;
    for(i = 0; i < n - 1; i ++){
        for(j = n - 1; j > 0; j--){
            if(a[j - 1] > a[j]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}