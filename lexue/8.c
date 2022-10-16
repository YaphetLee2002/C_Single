#include<stdio.h>
int main(void)
{
	int r, h;
	double s, v;

	scanf("%d", &r);
	scanf("%d", &h);
	s = 2 * 3.1415926 * r * h;
	v = 3.1415926 * r * r * h;
	printf("s=%.2f,v=%.2f\n", s, v);
	return 0;
}