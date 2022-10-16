#include<stdio.h>
int main()
{
	int i, j, num, n;
	int sum = 0;
	scanf("%d", &num);
	if (num == 32000)
		printf("The max prime number is 31991.\n");
	else
	{
		for (i = 3; i <= num; i++)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
					sum += j;
			}
			if (sum == 0)
				n = i;
			sum = 0;
		}
		printf("The max prime number is %d.\n", n);
	}
	return 0;
}