#include<stdio.h>  
#include<string.h>  
#include<stdlib.h>  
void print_number(int n)
{
    if(n < 0) 
        printf("(%d)", n);  
    else 
        printf("%d", n); 
}
int main(void)  
{  
    char s[100], c[12];
    gets(s);  
    int n, i, j=0, result, max=-214748364, min=214748364;  
    for( i = 0; i < strlen(s) - 3; i++)  
    {  
        if(s[i] != ',')
        {
            c[j]=s[i];
            j++;
        }  
        else  
        {  
            c[j] = 0; 
            j = 0; 
            n = atoi(c);  
            if(n > max) 
                max = n;
            if(n < min) 
                min = n;  
        }  
    }  
    char fuhao = s[strlen(s)-3];  
    switch(fuhao)      
    {      
        case '+': result = max + min;
            break;      
        case '-': result = max - min;
            break;      
        case '*': result = max * min;
            break;      
        case '%': result = max % min;
            break;    
        case '/': 
            if(min == 0) 
            {
                printf("Error!\n");
                exit(0);
            }    
    }  
    print_number(max);  
    printf(" %c ", fuhao);  
    print_number(min);
    printf(" = %d\n", result);   
    return 0;
}