#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 345;
    float b = 8.22;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n", *(int *)ptr);
    ptr = &b;
    printf("The value of b is %f\n", *(float *)ptr);
    // malloc calloc and realloc return void* that is why
    //we typecaste it
    //example: ptr=(int*)calloc(n,sizeof(int));
    return 0;
}