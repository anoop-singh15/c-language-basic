#include <stdio.h>
void main()
{
    int a = 76;
    int *ptr = &a;
    printf("the address of pointer a is %p\n", &ptr);
    printf("the value of pointer a is %p\n", *ptr);
}