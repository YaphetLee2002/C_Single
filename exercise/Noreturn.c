#include <stdio.h>
#include <stdlib.h>
_Noreturn void Print()
{
    printf("Warning...\n");
    exit(EXIT_SUCCESS);
}
int main(int argc, char const *argv[])
{
    printf("START\n");
    Print();
    printf("END\n"); /* Won' t be print out */
    return 0;
}