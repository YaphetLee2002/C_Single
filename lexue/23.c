#include<stdio.h>
int main()
{
	int op;
	int max = 0, min = 9;
	for (; 1;)
	{
		char c;
		scanf("%c", &c);
		if (c == ',')
			continue;
		if (c == '=')
			break;
		if (c == '+')
			op = 1;
		if (c == '-')
			op = 2;
		if (c == '*')
			op = 3;
		if (c == '/')
			op = 4;
		if (c == '%')
			op = 5;
		if (c <= '9' && c >= '0')
		{
			if (c - '0' > max)
				max = c - '0';
			if (c - '0'< min)
				min = c - '0';
		}
	}
	switch (op)
	{
	case 1:printf("%d+%d=%d\n", max, min, max + min);
		break;
	case 2:printf("%d-%d=%d\n", max, min, max - min);
		break;
	case 3:printf("%d*%d=%d\n", max, min, max * min);
		break;
	case 4:
		if (min == 0)
			printf("Error!\n");
		else
			printf("%d/%d=%d\n", max, min, max / min);
		break;
	default:printf("%d%%%d=%d\n", max, min, max % min);
		break;
	}
	return 0;
}