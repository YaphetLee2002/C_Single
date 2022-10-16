#include <stdio.h>
#include <string.h>
void na(char a[])
{
    int b = 0, c = 0, d, i, e = 0, f = 0, n;
    d = strlen(a);
    if (d < 6)
        printf("Not Safe\n");
    else
    {
        for (i = 0; i < d; i++)
            if (a[i] < 58 && a[i] > 47)
                b = 1;
            else if (a[i] > 64 && a[i] < 91)
                c = 1;
            else if (a[i] > 96 && a[i] < 123)
                e = 1;
            else
                f = 1;
    }
    n = b + c + e + f;
    switch (n)
    {
    case 1:
        printf("Not Safe\n");
        break;
    case 2:
        printf("Medium Safe\n");
        break;
    case 3:
        printf("Safe\n");
        break;
    case 4:
        printf("Safe\n");
        break;
    }
}
main()
{
    char a[21];
    int j, k;
    scanf("%d\n", &j);
    for (k = 0; k < j; k++)
    {
        gets(a);
        na(a);
    }
}