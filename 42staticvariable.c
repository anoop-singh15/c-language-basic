#include<stdio.h>
int func1(int b)
{
    // printf("The address of b in func1 is %d\n",&b);
    static int myvar=0;
    printf("the value of myvar is %d \n",myvar);
    myvar++;


    return printf("%d\n", b+myvar);
}
int main()
{
    int b=344;
    // printf("The address of b inside main is %d\n",&b);
    int val=func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    int *ptr=&val;
    // printf("The value of func1 is %d\n",val);
    return 0;
}