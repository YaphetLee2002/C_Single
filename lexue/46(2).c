#include<stdio.h>
#include<ctype.h>
int plate_number(char []);
void judge_number(int);
int main(void)
{
    char s[5];
    scanf("%s", s);
    judge_number(plate_number(s));
    return 0;
}
int plate_number(char s[])
{
    if (!isdigit(s[4]))
        return 0;
    int i = 0, temp = 0;
    while (i < 4)
    {
        if(s[i] == 'I' || s[i] == 'O')
            return 0;
        if (isupper(s[i++]))
            temp++;
    }
    if(temp != 2)
        return 0;
    return 1;
}
void judge_number(int n)
{
    if(n == 1)
        puts("ok.");
    else
        puts("no.");
}