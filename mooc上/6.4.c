#include <stdio.h>
int main()
{
	int k, n, t, sum, len;
	int max = -99999;
	scanf("%d", &t);
	while (t--) 
	{
		scanf("%d", &n);
		sum = len = 0;
		while (n--) 
		{
			scanf("%d", &k);
			if (max <= k)
			{
				max = k;
			}
			len = len + k > 0 ? len + k : 0;
			if (sum < len)
				sum = len;
		}
		if (max <= 0)
			printf("%d", max);
		else
			printf("%d\n", sum);
	}
	return 0;
}