#include<stdio.h>
#include<stdlib.h>
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int runnian(int y)
{
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        return 1;
    else
        return 0;
}
int week(int y, int m, int d)
{
	int week;
	if (m == 1 || m == 2)
	{
		m += 12;
		y--;
	}
	week = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7 + 1;
	return week;
}
int main(void)
{
    int y, m, d, day = 0, i;
	scanf("%d %d %d", &y, &m, &d);
    int weeks = week(y, m, d);
    if (weeks == 6 || weeks == 7)
    {
        puts("Free.");
        return 0;
    }
    
    if (y == 2012)
    {
        if (m > 4)
        {
            for ( i = m - 1; i > 4 ; i--)
                day += month[i];
            day += d;
            day += 22;
        }
        if (m == 4)
            day = d - 8;
    }
    else
    {
        day += 267;
        for ( i = y - 1; i > 2012; i--)
        {
            if(runnian(i))
                day += 366;
            else
                day += 365;
        }
        for ( i = m - 1; i > 0; i--)
        {
            if (runnian(y))
            {
                if(i == 2)
                    day++;
            }
            day += month[i];    
        }
        day += d;
    }
    int temp = (day / 91 + 1) % 5;
    if (temp == weeks)
        puts("3 and 8.");
    else if (temp == weeks - 1 || temp == weeks + 4)
        puts("4 and 9.");
    else if (temp == weeks - 2 || temp == weeks + 3)
        puts("5 and 0.");
    else if (temp == weeks - 3 || temp == weeks + 2)
        puts("1 and 6.");
    else if (temp == weeks - 4 || temp == weeks + 1)
        puts("2 and 7.");
    system("pause");
    return 0;
}