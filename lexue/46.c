#include<stdio.h>
#include<math.h>
int main(void)
{
    int n, index, count, i, a, b, c;
    float S, max = 0.0;
    int dot[100][2];
    scanf("%d", &n);
    for (index = 0; index < n; index++)
    {
        scanf("%d", &count);
        for (i = 0; i < count; i++)
            scanf("%d %d", dot[i], dot[i] + 1);
        for (a = 0, count = 0; a < count - 2; a++)
            for (b = a + 1; b < count - 1; b++)
                for (c = b + 1; c < count; c++)
                {
                    S = 1.0 / 2 * fabs((dot[b][0] - dot[a][0]) * (dot[c][1] - dot[a][1]) - (dot[c][0] - dot[a][0]) * (dot[b][1] - dot[a][1]));
                    if (S > max)
                        max = S;
                }
        printf("%.1f\n", max);
    }
    return 0;
}