#include<stdio.h>
#include<math.h>
int main(void)
{
	int hou, min;
	double deg1, deg2, deg;
	scanf("%d %d", &hou, &min);
	deg1 = (double)30 * hou + 0.5 * min;
	deg2 = (double)6 * min;
	deg = fabs(deg1 - deg2);
	if (deg > 180.0)
	{
		deg = 360.0 - deg;
	}

	if (min < 10)
	{
		printf("At %d:0%d the angle is %.1f degrees.\n", hou, min, deg);
	}
	else
		printf("At %d:%2d the angle is %.1f degrees.\n", hou, min, deg);
	return 0;
}