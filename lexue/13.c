#include<stdio.h>
#include<math.h>
int main(void)
{
	int a, b, c;
	double x1, x2;
	int det;

	scanf("%d %d %d", &a, &b, &c);
	det = b * b - 4 * a * c;

	if (a == 0 && b == 0)
		printf("Input error!\n");
	else
	{
		if (a == 0 && b != 0)
			printf("x=%.6f\n", (double)-c / b);
		else
		{
			if (det > 0)
			{
				x1 = (-b + sqrt(det)) / (2 * a);
				x2 = (-b - sqrt(det)) / (2 * a);
				printf("x1=%.6f\nx2=%.6f\n", x1, x2);
			}
			if (det == 0)
			{
				x1 = (-b + sqrt(det)) / (2 * a);
				printf("x1=x2=%.6f\n", x1);
			}
			if (det < 0)
			{
				x1 = sqrt(-det) / abs(2 * a);
		
				if (b == 0)
					printf("x1=%.6fi\nx2=-%.6fi\n", x1, x1);
				else
					printf("x1=%.6f+%.6fi\nx2=%.6f-%.6fi\n", (double)-b / ( 2 * a), x1, (double)-b / ( 2 * a), x1);
			}
		}
	}
	return 0;
}