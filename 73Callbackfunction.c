#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}
void greetHelloUser(int (*fptr)(int, int))
{
    printf("Hello User\n");
    printf("The sum of 4 and 5 is %d\n", fptr(4, 5));
}
void greetGmandExecute(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("The sum of 2 and 3 is %d\n", fptr(2, 3));
}

int main()
{
    int (*ptr)(int ,int);
    ptr = sum;
    greetGmandExecute(ptr);
    greetHelloUser(ptr);

    return 0;
}