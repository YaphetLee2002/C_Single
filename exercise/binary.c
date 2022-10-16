#include<stdio.h>
void to_binary(unsigned int n);

int main(void)
{
    unsigned long number;
    puts("Enter an integer (q to quit): ");
    while (scanf("%lu",&number) == 1)
    {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        puts("Enter an integer (q to quit): ");
    }
    puts("Done");
    return 0;
}

void to_binary(unsigned int n)
{
    int r;

    r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
    putchar( r == 0 ? '0' : '1');
    return;
}