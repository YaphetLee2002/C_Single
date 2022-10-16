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
		week = 0;
	return week;
}
int main(void)
{
	int y, m, d;
	
	scanf("%d %d %d", &y, &m, &d);
	
	switch (m)
	{
	case (1):	
	case (3):	
	case (5):	
	case (7):	
	case (8):	
	case (10):	
	case (12):
		if (d > 31)
			puts("day is error.");
		else
			printf("%d\n", week(y, m, d));
		break;
		
	case (4):
	case (6):	
	case (9):	
	case (11):
		if (d > 30)
			puts("day is error.");
		else
			printf("%d\n", week(y, m, d));
		break;
	case (2):
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		{
			if (d > 29)
				puts("day is error.");
			else
				printf("%d\n", week(y, m, d));
		}
		else
		{
			if (d > 28)
				puts("day is error.");
			else
				printf("%d\n", week(y, m, d));
		}
		break;
	default:puts("month is error.");
		break;
	}
	
	return 0;
}