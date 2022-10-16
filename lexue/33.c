#include<stdio.h>
void del(char s[], char t[]){
    int temp, j;
    while (t[j])
    {
        int i = 0;
        while(s[i]){
            if (s[i] == t[j])
            {
                temp = i;
                while (s[temp])
                {
                    s[temp] = s[temp+1];
                    temp++;
                }
                i--;
            }
            i++;
        }
        j++;
    }
    printf("%s\n", s);
}
int main()
{
    char s[80], t[80];
    scanf("%s", s);
    scanf("%s", t);
    del(s, t);
    return 0;
}