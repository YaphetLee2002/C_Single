#include<stdio.h>
#include<math.h>
int main(void)
{
	int a, b, c, d, f, g, h, i;
	int max, min, tmp1, tmp2, m, n;
	char op;

	scanf("%d/%d %c %d/%d", &a, &b, &op, &c, &d);

	switch (op)
	{
	case '+':
		f = a * d + b * c;
		g = b * d;
		break;
	case '-':
		f = a * d - b * c;
		g = b * d;
		break;
	case '*':
		f = a * c;
		g = b * d;
		break;
	default:
		f = a * d;
		g = b * c;
		break;
	}

	max = f;
	min = g;

	if (min > max)
	{
		tmp1 = min;
		min = max;
		max = tmp1;
	}

	if (min != 0)
	{
		do
		{
			if (max % min != 0)
			{
				tmp2 = max % min;
				max = min;
				min = tmp2;
			}
		} while (max % min != 0);
		h = f / min;
		i = g / min;
		m = abs(h);
		n = abs(i);
		if (h * i < 0)
		{
			printf("%d/%d %c %d/%d = -%d/%d\n", a, b, op, c, d, m, n);
		}
		else
		{
			if (n == 1)
			{
				printf("%d/%d %c %d/%d = %d\n", a, b, op, c, d, m);
			}
			else
			{
				printf("%d/%d %c %d/%d = %d/%d\n", a, b, op, c, d, m, n);
			}
		}
	}
	else
	{
		printf("%d/%d %c %d/%d = 0\n", a, b, op, c, d);
	}
	return 0;
}