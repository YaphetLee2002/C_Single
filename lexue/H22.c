#include<stdio.h>
#include<string.h>
int main(void)
{
    int a, b, index, j, k, l;
    int i = 0;
    char nums[100][105][105];
    for (index = 1; 1; index++)
    {
        scanf("%d %d", &a, &b);
        if (a == 0)
            break;
        char maps[105][105];
        i = 0;
        while(i < a)
        {
            scanf("%s", maps[i]);
            i++; 
        }
        for (i = 0; i < a; i++)
        {
            memset(nums[index][i], '0', sizeof(char)*b);
            for (j = 0; j < b; j++)
            {
                if (maps[i][j] == '*'){
                    nums[index][i][j] = '*';
                    continue;
                }
                else
                {
                    for (k = i - 1; k <= i + 1; k++)
                    {
                        for (l = j - 1; l <= j + 1; l++)
                        {
                            if (maps[k][l] == '*')
                                nums[index][i][j]++;
                        }
                    }
                }
            }
        }
    }
    j = 0;
    for (i = 1; i < index; i++)
    {
        printf("Field #%d:\n", i);
        while (nums[i][j][0] != '\0')
            puts(nums[i][j++]);
        j = 0;
        if (i < index - 1)
            putchar('\n');
    }
    return 0;
}