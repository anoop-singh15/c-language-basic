#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a=344;
    int *ptr;// This is a wild pointer;
    *ptr=34;// this is not a good Thing to do
    ptr=&a;//ptr is no longer wild pointer.
    printf("the value of a is %d\n",*ptr);
    return 0;
}