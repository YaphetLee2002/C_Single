#include<stdio.h>
main()
{
	int a, n, i, tmp = 1;
	scanf("%d%d", &a, &n);
	if (n == 0)
		printf("The last 3 numbers is 1.\n");
	else{
		for (i = 1; i <= n; i++)
			tmp = tmp * a % 1000;
		if(tmp  < 100 && tmp  > 0)
			printf("The last 3 numbers is %d.\n", tmp);
        else
            printf("The last 3 numbers is %03d.\n", tmp);
	}	
}