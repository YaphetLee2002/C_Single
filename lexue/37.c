#include<stdio.h>
int week(int y, int m, int d)
{
	int week;
	if (m == 1 || m == 2)
	{
		m += 12;
		y--;
	}
	week = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7 + 1;
	if (week == 7)
	{
		week = 0;
	}
	return week;
}
int main(void)
{
    int i, y, a[12];
	int sum = 0;
	scanf("%d", &y);
	
    for ( i = 1; i < 13; i++)
    {
        if (week(y, i, 13) == 5)
        {
            a[sum] = i;
            sum++;
        }
    }
    if (sum == 1){
        printf("There is %d Black Friday in year %d.\n", sum, y);
        puts("It is:");
    }
        
    else {
        printf("There are %d Black Fridays in year %d.\n", sum, y);
        puts("They are:");
    }

    for ( i = 0; i < sum; i++)
        printf("%d/%d/%d\n", y, a[i], 13);

	return 0;
}