#include<stdio.h>
int main(void)
{
	int n, sqrt, i, j, k;
	int a[10];

	scanf("%d", &n);

	for (k = 1; k < n; k++)
	{
		sqrt = k * k;
		i = 0;
		do
		{
			a[i++] = sqrt % 10;
			sqrt /= 10;
		} while (sqrt != 0);
		i--;
		for (j = 0; j < i; j++, i--)
		{
			if (a[j] != a[i])
				break;
		}
		if (j == i)
			printf("%d\n", k);
	}
	return 0;
}