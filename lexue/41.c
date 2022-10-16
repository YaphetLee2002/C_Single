#include <stdio.h>
int leap_year(int year)	// 判断闰年或平年
{	return ( (year%4==0 && year%100!=0) || year%400==0 ) ? 1 : 0;
}

int year_days(int year)		// 计算一整年的天数
{	return leap_year( year ) ? 366 : 365;
}

int days( int year, int month, int day ) // 计算该天month,day 是本年year的第几天
{	int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}, i;
	
	if  ( leap_year( year ) && month >2 )
		day++;
	
	for ( i=1; i<month; i++ )
		day += months[i];

	return day;
}

int main(void)
{
    int y1, y2, m1, m2, d1, d2, i;
    scanf("%d %d %d", &y1, &m1, &d1);
    scanf("%d %d %d", &y2, &m2, &d2);
    int sum = 0;
    for (i = y1; i < y2; i++)
        sum+=year_days(i);
    printf("%d days\n", sum - days(y1, m1, d1) + days(y2, m2, d2));
    return 0;
}