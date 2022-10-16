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
	
	return week;
}
int main(void)
{
	int y, m = 5, d = 1, weekday;
	
	scanf("%d", &y);
	
	weekday = week(y, m, d);

	printf("%d\n", 15 - weekday);
	
	return 0;
}