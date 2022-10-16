#include<stdio.h>
main()
{
    int n, i, num = 1;
    scanf("%d", &n);
    if (n==1)
        printf("The monkey got 1 peach in first day.\n");
    else{
        for(i=n-1; i>0; i--){
            num = 2 * (num + i);
        }
        printf("The monkey got %d peaches in first day.\n", num);
    }    
}