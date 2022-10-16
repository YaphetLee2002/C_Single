#include<stdio.h> 
int main(void) 
{ 
   int i, j, num; 
 scanf("%d", &num); 
 for ( i = 0; i < num; i++) 
  { 
      for ( j = 1; j <= num; j++) 
     { 
          printf("%3d", num * i + j); 
        } 
      putchar('\n'); 
 } 
   
   return 0; 
}