#include <stdio.h> 
int main() 
{ 
    int ans, y, m, d; 
    scanf("%d %d %d", &y, &m, &d); 
    if (m > 12 ) 
        printf("month is error.\n"); 
    else if (d > 31) 
        printf("day is error."); 
    else 
        { 
            if (m == 1 || m == 2) m += 12, y--; 
            if((y < 1752) || (y == 1752 && m < 9) || (y == 1752 && m == 9 && d < 3)) 
                ans = (d + 2*m + 3*(m + 1) / 5 + y + y/4 + 5) % 7 + 1; 
            else  
                ans = (d + 2*m + 3*(m + 1) / 5 + y + y/4 - y/100 + y/400) % 7 + 1; 
            ans %= 7; 
            printf("%d\n", ans); 
        } 
    return 0 ; 
}