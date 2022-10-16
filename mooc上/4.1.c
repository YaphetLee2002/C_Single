#include<stdio.h>
#include<math.h>
int main(void)
{
	int hour, minute;
	float degree1, degree2, degree;
	scanf("%d %d", &hour, &minute);
	
	degree1 = fabs((double)(hour % 12 * 30 + minute * 0.5));
	degree2 = (double)minute * 6;
	degree = fabs(degree1 - degree2);
	if (minute >= 10)
	{
		printf("At %d:%d the angle is %.1f degrees.", hour, minute, degree);
	}
	else
	{
		printf("At %d:0%d the angle is %.1f degrees.", hour, minute, degree);
	}
	return 0;
}