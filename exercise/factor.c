#include<stdio.h>
long fact(int);
long rfact(int);

int main(void)
{
    int num;
    puts("This Prigram caculates factorials.");
    puts("Enter a value in the range 0~12 (q to quit): ");
    while(scanf("%d", &num) == 1)
    {
        if (num < 0)
            puts("No negative numbers, please.");
        else if (num > 12)
            puts("Keep inputs under 13.");
        else
        {
            printf("loop: %d factorial = %ld\n",
            num, fact(num));
            printf("recursion: %d factorial = %ld\n",
            num, rfact(num));
        }
        puts("Enter a value in the range 0~12 (q to quit): ");
    }
    puts("Bye.");
    return 0;
}

long fact(int n)
{
    long ans;
    for ( ans = 1; n > 1; n--)
        ans *= n;
    return ans;
}

long rfact(int n)
{
    long ans;
    if (n > 0)
        ans = n * rfact(n - 1);
    else
        ans = 1;
    return ans;
}