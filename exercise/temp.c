#include<stdio.h>
void wht_me();
int main(int argc, char const *argv[])
{
    printf("This file is %s\n", __FILE__);
    printf("This date is %s\n", __DATE__);
    printf("This time is %s\n", __TIME__);
    printf("This is line %d\n", __LINE__);
    printf("This function is %s\n", __func__);
    wht_me();
    return 0;
}

void
wht_me()
{
    printf("This function is %s\n", __func__);
    printf("This is line %d\n", __LINE__);
}