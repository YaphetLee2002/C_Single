#include<stdio.h>
#include<math.h>
#include<string.h>
int max_array(char a[], int n)
{
    int i, max = 0;
    for ( i = 0; i < n; i++){
        if (a[i] >= 'A' && a[i] <= 'Z'){
            if (max < a[i] - 'A' + 10)
                max = a[i] - 'A' + 10;
        }
            
        else if (max < a[i] - '0')
            max = a[i] - '0';
    }
        
    return max;
}
int base(char a[], int n, int b){
    int result = 0;
    int i;
    for ( i = 0; i < n; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            result += ((a[i] - 'A' + 10) * pow(b, n - i - 1));
        else
            result += ((a[i] - '0') * pow(b, n - i - 1));
    }
    return result;
}
int main(void)
{
    int i, j;
    int sum = 0;
    char num1[200] = {'\0'};
    char num2[200] = {'\0'};
    
    scanf("%s %s", num1, num2);
    
    int m = strlen(num1);
    int n = strlen(num2);

    int p, q;

    for ( i = max_array(num1, m)+1; i < 37; i++)
    {
        for ( j = max_array(num2, n)+1; j < 37; j++)
        {
            p = base(num1, m, i);
            q = base(num2, n, j);
            if (p == q)
            {
                printf("%s (base %d) = %s (base %d)\n", num1, i, num2, j);
                return 0;
            }
        } 
    }
    if (sum == 0)
        printf("%s is not equal to %s in any base 2..36\n", num1, num2);
    return 0;   
}