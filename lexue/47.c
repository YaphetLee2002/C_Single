#include<stdio.h>
int main(void)
{
    int row, column;
    scanf("%d %d", &row, &column);
    int a[100][100] = { 0 };
    int max_row[100] = { 0 };
    int j, i;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            if (a[i][j] > a[i][max_row[i]])
                max_row[i] = j;
        }
    }
    
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < row; j++)
        {
            if (a[i][max_row[i]] > a[j][max_row[i]])
                break;
        }
        if(j == row)
        {
            printf("Point:a[%d][%d]==%d\n", i, max_row[i], a[i][max_row[i]]);
            return 0;
        }
    }
    
    puts("No Point");
    return 0;    
}