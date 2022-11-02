// local variable and  automatic variable are same
// int a; and auto int a;
// External varible same as global variable
#include <stdio.h>
// #include "49temp.c"

int sum = 897;
int fun1(int a, int b)
{
    // auto int sum;
    // to use global variable
    // extern int sum;
    // sum=a+b;
    static int myvar;
    myvar++;
    printf("The sum is %d\n", myvar);
    return myvar;
}
// extern int sum=343;
int main()
{
    // Declaration - telling the compiler about the variable(No space reserved)
    // Definition - Declaration + space reservation

    // int sum=fun1(3,5);
    register int myvar = fun1(3, 5);
    myvar = fun1(3, 5);
    myvar = fun1(3, 5);
    myvar = fun1(3, 5);
    // printf("The sum is %d\n", sum);
    return 0;
}