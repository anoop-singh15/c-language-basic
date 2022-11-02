#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 32;
    //    int *ptr=&a;
    int *ptr;
    // int c=22;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be defrenced \n");
    }
    return 0;
}